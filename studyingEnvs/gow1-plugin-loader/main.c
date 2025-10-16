#include "elf.h"
#include "erl.h"
#include "injector.h"
#include "sifdev.h"
#include "stdio.h"
#include "string.h"
#include "type.h"
// FD8F0

#define PLUGIN_HEAP_SIZE 0x61A80
#define PLUGIN_HEAP_START 0x96000

void FlushCache(uint32_t);

typedef struct HeapZone {
    UINT32 uHZConstant;
    UINT32 *pFreeList;
    UINT32 *pEndFreeList;
    struct HeapZone *pNextZone;
    char * pStart;
    char * pStartUse;
    char * pEnd;
    UINT32 *pMasterChunkList;
    UINT32 *pMasterList;
    UINT32 uMoreMasters;
    char cName[16];
    UINT32 heapData;
} HeapZone;

extern HeapZone *ZoneList;

uint *dword_2CB944 = (uint*)0x2CB944;
uint *dword_2CB948 = (uint*)0x2CB948;

extern uint TheZone;

uint Mem_FreeBytes(uint  a1, uint a2)
{
    uint  v2; // $a2
    int i; // $a3
    int v4; // $v1

    if ( !a1 )
    {
        if ( *dword_2CB944 == (uint )*dword_2CB948 )
            a1 = 0LL;
        else
            a1 = *(int *)(4 * *dword_2CB944 + TheZone);
    }
    if ( a2 )
        *(uint *)a2 = 0;
    v2 = *(int *)(a1 + 4);
    for ( i = 0; v2 != a1; i += v4 )
    {
        v4 = (*(uint *)v2 & 0x1FFFFFF) - 2;
        if ( a2 )
            ++*(uint *)a2;
        v2 = *(int *)(v2 + 4);
    }
    return 4 * i;
}

void PrintHeapStats()
{
    int iVar1;
    int iVar2;
    int iVar3;
    char* pCVar4;
    int iVar5;
    HeapZone *zone;
    long lVar6;
    UINT32 freeBlocks;
    
    _printf("            Name        Free\n");
    _printf("  ============================================================================\n");
    lVar6 = (long)(int)ZoneList;
    if (lVar6 != 0) {
        pCVar4 = ZoneList->pEnd;
        while( true ) {
            zone = (HeapZone *)lVar6;
            iVar3 = Mem_FreeBytes((uint)zone,(uint)&freeBlocks);
            _printf("%20s %10d\n",zone->cName, iVar3);
            lVar6 = (long)(int)zone->pNextZone;
            if (lVar6 == 0) break;
            pCVar4 = zone->pNextZone->pEnd;
        }
    }
}

u32 *Mem_NewHeapZone(u32 pStart,u32 byteSize,char *pHeapName,u32 moreMasters);
u32 *Mem_GetCurrentHeapZone();
void *Mem_NewPtr(u32*, u32, u32);
void sys_GameLoop(u32);
void Mem_FreePtr(void *);
extern u32 *Mem__pRootHeap;
void Mem_SetCurrentHeapZone(u32 *a1);

u32 *pluginHeap = NULL;
symbol_t *global_symbols[6] = {NULL, NULL, NULL, NULL, NULL, NULL};
erl_record_t * erl_record_root = NULL;

char *symbol_path = "host0:\\SYMBOLS.DAT";
char symbol_name_buffer[255];

void createPluginHeapZone()
{
    pluginHeap = Mem_NewHeapZone(PLUGIN_HEAP_START, PLUGIN_HEAP_SIZE, "PLUGIN", 0x40);
}

void *mem_alloc(u32 nBytes, u32 byteAlignment)
{
    void *ptr = Mem_NewPtr(Mem_GetCurrentHeapZone(), nBytes, byteAlignment == 0 ? 8 : byteAlignment);
    // _printf("Alocando %d bytes em %p, freebytes: %d!\n", nBytes, ptr, Mem_FreeBytes((uint)pluginHeap, 0));
    return ptr;
}

void mem_free(void* ptr)
{
    Mem_FreePtr(ptr);
}

char *my_strndup(const char *s, size_t n)
{
    char* new = mem_alloc(n + 1, 0);
    if (new) {
        strncpy(new, s, n);
        new[n] = '\0';
    }
    return new;
}

char *my_strdup(const char *s)
{
    char *p = mem_alloc(strlen(s) + 1, 0);
    if (p != NULL)
        strcpy(p,s);
    return p;
}

char * reloc_types[] = {
    "R_MIPS_NONE",
    "R_MIPS_16",
    "R_MIPS_32",
    "R_MIPS_REL32",
    "R_MIPS_26",
    "R_MIPS_HI16",
    "R_MIPS_LO16",
    "R_MIPS_GPREL16",
    "R_MIPS_LITERAL",
    "R_MIPS_GOT16",
    "R_MIPS_PC16",
    "R_MIPS_CALL16",
    "R_MIPS_GPREL32"
};

int EndsWith(const char *str, const char *suffix)
{
    if (!str || !suffix)
        return 0;
    size_t lenstr = strlen(str);
    size_t lensuffix = strlen(suffix);
    if (lensuffix >  lenstr)
        return 0;
    return strncmp(str + lenstr - lensuffix, suffix, lensuffix) == 0;
}

symbol_t *create_symbol(char *symbol, u32 address)
{
    if (!symbol)
    {
        _printf("not possible to create symbol with name %s\n", symbol);
        return NULL;
    }
    
    symbol_t *sym = mem_alloc(sizeof(symbol_t), 0);

    if (!sym)
    {
        _printf("not enough memory for symbol!\n");
        return NULL;
    }
    
    sym->name = symbol;
    sym->address = address;

    return sym;
}

symbol_t *readNextSymbol(int fd, uint *offset, size_t file_size)
{
    char line[256];
    char *str_end_line;

    if (*offset >= file_size)
    {
        return NULL;
    }

    // _printf("Initial offset: %d\n\n", *offset);
    
    line[255] = '\0';
    sceRead(fd, line, 255);

    str_end_line = strchr(line, '\n');

    if (str_end_line == NULL)
    {
        _printf("End of the line bigger than 255 bytes.");

        return NULL;
    }
    
    // _printf("%s\n", line);

    char *div = strchr(line, ' ');
    uint name_size = (uint)div - (uint)line;
    
    symbol_t *symbol = create_symbol(my_strndup(line, name_size), strtol(++div, NULL, 16));

    *offset += (uint)str_end_line - (uint)line + 1;
    sceLseek(fd, *offset, 0);

    if (!symbol)
    {
        return NULL;
    }
    
    // _printf("%s %x\n", symbol->name, symbol->address);

    return symbol;

}

void load_global_symbols()
{
    _printf("Loading Symbols!\n");

    sce_stat stat;
    
    if (sceGetstat(symbol_path, &stat) < 0)
    {
        _printf("not possible to load symbols!\n");
        return;
    }
    
    size_t size = stat.st_size;

    int fd = sceOpen(symbol_path, SCE_RDONLY);

    symbol_t *sym;
    uint offset = 0;
    
    while ((sym = readNextSymbol(fd, &offset, size)) != NULL)
    {
        symbol_t **symbol = &global_symbols[strlen(sym->name) % 6];
        sym->next = *symbol;
        *symbol = sym;
    }

    _printf("Global symbols loaded.\n");

    sceClose(fd);
}

void destroy_global_symbols()
{

    _printf("destroying global symbols!\n");

    for (size_t i = 0; i < 6; i++)
    {
        symbol_t *sym = global_symbols[i];
        
        while (sym)
        {
            symbol_t *next = sym->next;

            mem_free(sym->name);
            mem_free(sym);

            sym = next;
        }
        
    }
}

u32 align(u32 x, int align) {
    // if (align < 16)
    //     align = 16;

    align--;

    if (x & align) 
    {
        x |= align;
        x++;
    }

    return x;
}

symbol_t *erl_find_local_symbol(const char *symbol, erl_record_t *erl)
{
    if (!erl) return NULL;
    symbol_t *sym = erl->symbols[strlen(symbol) % 6];

    while (sym != NULL)
    {
        if (!strcmp(sym->name, symbol))
        {
            return sym;
        }
        
        sym = sym->next;
    }
    
    return NULL;
}

symbol_t *r_find_symbol(const char * symbol, struct erl_record_t * erl) {
    if (!erl) return NULL;
    
    symbol_t *sym = erl->symbols[strlen(symbol) % 6];

    while (sym != NULL)
    {
        if (!strcmp(sym->name, symbol))
        {
            return sym;
        }
        
        sym = sym->next;
    }
    
    return r_find_symbol(symbol, erl->next);
}

symbol_t *erl_find_symbol(const char * symbol) {
    if (global_symbols)
    {
        symbol_t *sym = global_symbols[strlen(symbol) % 6];
        
        while (sym != NULL)
        {
                if (!strcmp(sym->name, symbol))
                {
                    return sym;
                }
            
            sym = sym->next;
        }
        
    }

    return r_find_symbol(symbol, erl_record_root);
}

int add_symbol(erl_record_t*erl, char *symbol, u32 address)
{
    if (erl_find_symbol(symbol))
	{
        _printf("%s Symbol already exists.\n", symbol);
        return -1;
    }

    symbol_t *new_sym = create_symbol(my_strdup(symbol), address);

    if (!new_sym)
    {
        return -1;
    }

    symbol_t **sym = &erl->symbols[strlen(symbol) % 6];

    new_sym->next = *sym;
    *sym = new_sym;
    
    return 0;
}

int apply_reloc(u8 *reloc, u32 type, u32 addr)
{
    u32 u_current_data;
    int s_current_data;
	u32 newstate;

	memcpy(&u_current_data, reloc, 4);
	memcpy(&s_current_data, reloc, 4);

    switch (type) {
	case R_MIPS_32:
		newstate = s_current_data + addr;
		break;
	case R_MIPS_26:
		newstate = (u_current_data & 0xfc000000) | (((u_current_data & 0x03ffffff) + (addr >> 2)) & 0x3ffffff);
		break;
	case R_MIPS_HI16:
		newstate = (u_current_data & 0xffff0000) | ((((s_current_data << 16) >> 16) + (addr >> 16) + ((addr & 0xffff) >= 0x8000 ? 1 : 0)) & 0xffff);
		break;
	case R_MIPS_LO16:
		newstate = (u_current_data & 0xffff0000) | ((((s_current_data << 16) >> 16) + (addr & 0xffff)) & 0xffff);
		break;
	default:
		return -1;
    }

    memcpy(reloc, &newstate, 4);

    _printf("Changed data at %08X from %08X to %08X.\n", reloc, u_current_data, newstate);

    return 0;
}

erl_record_t *allocate_erl_record() {
    struct erl_record_t * r;

    if (!(r = (erl_record_t *) mem_alloc(sizeof(erl_record_t), 0)))
        return 0;

    r->bytes = NULL;
    memset(r->symbols, 0, 24);

    r->next = erl_record_root;
    erl_record_root = r;

    return r;
}

void erl_flush_symbols(struct erl_record_t * erl) 
{
    for (size_t i = 0; i < 6; i++)
    {
        symbol_t *sym = erl->symbols[i];
        symbol_t *next;
        while (sym != NULL)
        {
            next = sym->next;

            mem_free(sym->name);
            mem_free(sym);

            sym = next;
        }
    }
}

void destroy_erl_record(erl_record_t * erl) {
    if (!erl) return;

    erl_flush_symbols(erl);

    erl_record_t *curr_erl = erl_record_root;
    erl_record_t *prev_erl = NULL;

    if (curr_erl && curr_erl == erl)
    {
        erl_record_root = curr_erl->next;
        curr_erl = NULL;
        return;
    }

    while (curr_erl && curr_erl != erl)
    {
        prev_erl = curr_erl;
        curr_erl = curr_erl->next;
    }
    
    if (!curr_erl)
    {
        return;
    }

    prev_erl->next = curr_erl->next;

    mem_free(erl);
}

int read_erl(int fd, erl_record_t** p_erl_record)
{
    Elf32_Ehdr hdr;
    Elf32_Shdr *sec;
    Elf32_Sym *sym;
    Elf32_Rela reloc;

    char * names = 0, * strtab_names = 0, * reloc_section = 0;
    int symtab = 0, strtab = 0, linked_strtab = 0;
    u32 fullsize = 0;
    struct erl_record_t * erl_record = 0;
    symbol_t *s = 0;

#define free_and_return(code) \
    if (names) mem_free(names); \
    if (sec) mem_free(sec); \
    if (strtab_names) mem_free(strtab_names); \
    if (sym) mem_free(sym); \
    if ((code < 0) && erl_record) destroy_erl_record(erl_record); \
return code

    if (!(erl_record = allocate_erl_record())) 
    {
        _printf("Memory allocation error.\n");
        free_and_return(-1);
    }

    sceRead(fd, &hdr, sizeof(Elf32_Ehdr));

    if ((hdr.e_ident[EI_MAG0] != ELFMAG0) || (hdr.e_ident[EI_MAG1] != ELFMAG1) || (hdr.e_ident[EI_MAG2] != ELFMAG2) || ((hdr.e_ident[EI_MAG3] != ELFMAG3))) {
        _printf("Not an ELF file.\n");
        free_and_return(-1);
    }

    if (hdr.e_type != REL_TYPE) 
    {
        _printf("File isn't a relocatable ELF file.\n");
        free_and_return(-1);
    }

    if (sizeof(Elf32_Shdr) != hdr.e_shentsize) 
    {
        _printf("Inconsistancy in section table entries.\n");
        free_and_return(-1);
    }

    if (!(sec = mem_alloc(sizeof(Elf32_Shdr) * hdr.e_shnum, 0)))
    {
        _printf("Not enough memory.\n");
        free_and_return(-1);
    }

    sceLseek(fd, hdr.e_shoff, 0);
    sceRead(fd, sec, sizeof(Elf32_Shdr) * hdr.e_shnum);

	if (!(names = (char *) mem_alloc(sec[hdr.e_shstrndx].sh_size, 0))) 
    {
        _printf("Not enough memory.\n");
        free_and_return(-1);
	}

    sceLseek(fd, sec[hdr.e_shstrndx].sh_offset, 0);
    sceRead(fd, names, sec[hdr.e_shstrndx].sh_size);

    for (uint i = 1; i < hdr.e_shnum; i++)
    {
        if (!strcmp(names + sec[i].sh_name, ".symtab")) 
        {
            symtab = i;
            linked_strtab = sec[i].sh_link;
        } else if (!strcmp(names + sec[i].sh_name, ".strtab")) 
        {
            strtab = i;
        }
        if (((sec[i].sh_type == SHT_PROGBITS) || (sec[i].sh_type == SHT_NOBITS)) && (sec[i].sh_flags & SHF_ALLOC)) 
        {
        // Let's use this, it's not filled for relocatable objects.
            fullsize = align(fullsize, sec[i].sh_addralign);
            sec[i].sh_addr = fullsize;
            fullsize += sec[i].sh_size;
            _printf("Section to load at %08X:\n", sec[i].sh_addr);
        }
    }

    if (symtab) {
        _printf("Discovered symtab = %i\n", symtab);
    } else {
        _printf("No symbol table.\n");
        free_and_return(-1);
    }

    if (strtab != linked_strtab) 
    {
        _printf("Warning, inconsistancy: strtab != symtab.sh_link (%i != %i)\n", strtab, linked_strtab);
        free_and_return(-1);
    }

    if (sizeof(Elf32_Sym) != sec[symtab].sh_entsize) 
    {
        _printf("Symbol entries not consistant.\n");
        free_and_return(-1);
    }

    _printf("Computed needed size to load the erl file: %i\n", fullsize);

    
    if (!(erl_record->bytes = (u8 *) mem_alloc(fullsize, 0))) {
        _printf("Cannot allocate ERL bytes.\n");
        free_and_return(-1);
    }

    erl_record->fullsize = fullsize;

    _printf("Base address: %08X\n", erl_record->bytes);

    for (uint i = 1; i < hdr.e_shnum; i++) 
    {
        if (!(sec[i].sh_flags & SHF_ALLOC))
        {
            continue;
        }
        
        switch (sec[i].sh_type) {
        case SHT_PROGBITS:
                // **TODO** handle compession
            _printf("reading section %s at %08X.\n", names + sec[i].sh_name, erl_record->bytes + sec[i].sh_addr);

            sceLseek(fd, sec[i].sh_offset, 0);
            sceRead(fd, erl_record->bytes + sec[i].sh_addr, sec[i].sh_size);
            break;
        case SHT_NOBITS:
            _printf("Zeroing section %s at %08X.\n", names + sec[i].sh_name, erl_record->bytes + sec[i].sh_addr);
            memset(erl_record->bytes + sec[i].sh_addr, 0, sec[i].sh_size);
            break;
        }
    }

    if (!(strtab_names = (char *) mem_alloc(sec[strtab].sh_size, 0))) 
    {
        _printf("Not enough memory.\n");
        free_and_return(-1);
    }

    sceLseek(fd, sec[strtab].sh_offset, 0);
    sceRead(fd, strtab_names, sec[strtab].sh_size);

	if (!(sym = (Elf32_Sym *) mem_alloc(sec[symtab].sh_size, 0))) {
        _printf("Not enough memory.\n");
        free_and_return(-1);
	}

    sceLseek(fd, sec[symtab].sh_offset, 0);
    sceRead(fd, sym, sec[symtab].sh_size);

   // Parsing sections to find relocation sections.
    for (size_t i = 0; i < hdr.e_shnum; i++) {
        if (sec[i].sh_type != SHT_RELA)
            continue;

        if (sec[sec[i].sh_info].sh_type != 1 || !(sec[sec[i].sh_info].sh_flags & SHF_ALLOC))
            continue;

        _printf("Section %i (%s) contains relocations for section %i (%s):\n",
        i, names + sec[i].sh_name, sec[i].sh_info, names + sec[sec[i].sh_info].sh_name);

        if (sec[i].sh_entsize != sizeof(Elf32_Rela)) {
            _printf("Warning: inconsistancy in relocation table.\n");
            free_and_return(-1);
        }

        // Loading relocation section.
        // **TODO** handle compession
        sceLseek(fd, sec[i].sh_offset, 0);
        if (!(reloc_section = (char *) mem_alloc(sec[i].sh_size, 0))) 
        {
            _printf("Not enough memory.\n");
            free_and_return(-1);
        }
        sceLseek(fd, sec[i].sh_offset, 0);
        sceRead(fd, reloc_section, sec[i].sh_size);

        // We found one relocation section, let's parse it to relocate.
        _printf("   Num: Offset   Type           Symbol\n");
        for (uint j = 0; (u32)j < (sec[i].sh_size / sec[i].sh_entsize); j++) 
        {
            int sym_n;

            reloc = *((Elf32_Rela *) (reloc_section + j * sec[i].sh_entsize));

            sym_n = reloc.r_info >> 8;
            _printf("%6i: %08X %-14s %3i: ", j, reloc.r_offset, reloc_types[reloc.r_info & 255], sym_n);

            switch(sym[sym_n].st_info & 15) {
            case STT_NOTYPE:
                _printf("external symbol reloc to symbol %s\n", strtab_names + sym[sym_n].st_name);
                if (!(s = erl_find_symbol(strtab_names + sym[sym_n].st_name))) 
                {
                    // if(strcmp(strtab_names + sym[sym_n].st_name, "_Jv_RegisterClasses") != 0) 
                    // {
                    //     // add_loosy(erl_record, erl_record->bytes + sec[sec[i].sh_info].sh_addr + reloc.r_offset, reloc.r_info & 255, strtab_names + sym[sym_n].st_name);
                    // }
                    _printf("%s: Symbol not found.\n", strtab_names + sym[sym_n].st_name);
                    free_and_return(-1);
                } else {
                    _printf("Found symbol at %08X, relocating.\n", s->address);
                    if (apply_reloc(erl_record->bytes + sec[sec[i].sh_info].sh_addr + reloc.r_offset, reloc.r_info & 255, s->address + reloc.r_addend) < 0) 
                    {
                        _printf("Something went wrong in relocation.\n");
                        free_and_return(-1);
                    }
                }
                break;
            case STT_SECTION:
                _printf("internal section reloc to section %i (%s) %x\n", sym[sym_n].st_shndx, names + sec[sym[sym_n].st_shndx].sh_name, (u32) (erl_record->bytes + sec[sym[sym_n].st_shndx].sh_addr) + reloc.r_addend);
                _printf("Relocating at %08X.\n", erl_record->bytes + sec[sym[sym_n].st_shndx].sh_addr);
                if (apply_reloc(erl_record->bytes + sec[sec[i].sh_info].sh_addr + reloc.r_offset, reloc.r_info & 255, (u32) (erl_record->bytes + sec[sym[sym_n].st_shndx].sh_addr) + reloc.r_addend) < 0) 
                {
                    _printf("Something went wrong in relocation.\n");
                    free_and_return(-1);
                }
                break;
            case STT_OBJECT:
            case STT_FUNC:
                _printf("Relocating at %08X.\n", erl_record->bytes + sec[sym[sym_n].st_shndx].sh_addr + sym[sym_n].st_value);
                if (apply_reloc(erl_record->bytes + sec[sec[i].sh_info].sh_addr + reloc.r_offset, reloc.r_info & 255, (u32) (erl_record->bytes + sec[sym[sym_n].st_shndx].sh_addr + sym[sym_n].st_value + reloc.r_addend)) < 0) 
                {
                    _printf("Something went wrong in relocation.\n");
                    free_and_return(-1);
                }
                break;
            default:
                _printf("Unknown relocation. Bug inside.\n");
                free_and_return(-1);
            }
        }
        mem_free(reloc_section);
    }

    for (size_t i = 0; (u32)i < sec[symtab].sh_size / sec[symtab].sh_entsize; i++) 
    {
        if (((sym[i].st_info >> 4) == STB_GLOBAL) || ((sym[i].st_info >> 4) == STB_WEAK)) 
        {
            if ((sym[i].st_info & 15) != STT_NOTYPE) 
            {
                if (add_symbol(erl_record, strtab_names + sym[i].st_name, ((u32)erl_record->bytes) + sec[sym[i].st_shndx].sh_addr + sym[i].st_value) < 0) 
                {
                    _printf("%s Symbol probably alrw_ready exists, let's ignore that.\n", strtab_names + sym[i].st_name);
                }
            }
        }
    }
    
    *p_erl_record = erl_record;

    free_and_return(0);
}

typedef int (*func_t)(void);


erl_record_t *load_erl(char *fname)
{
    erl_record_t *r;
    symbol_t *s;

    int fd;

    if ((fd = sceOpen(fname, SCE_RDONLY)) < 0)
    {
        _printf("Error opening erl file: %s", fname);

        return 0;
    }
    
    if (read_erl(fd, &r) < 0)
    {
        _printf("Error loading erl file.");
        sceClose(fd);

        return 0;
    }

	if ((s = erl_find_local_symbol("erl_id", r))) {
		r->name = *(char **) s->address;
	} else {
        _printf("erl_id not found.\n");
		r->name = 0;
	}

    _printf("erl_id = %s.\n", r->name);


    if ((s = erl_find_local_symbol("_start", r))) 
    {
        _printf("_start = %08X\n", s->address);

        ((func_t)s->address)();

    }
}

// void execEntry(u32 address)
// {
//     ((void(*)())address)();
// }

// 
// Elf32_Shdr *findSymTab(Elf32_Shdr *shdr_array, u32 shnum)
// {
//     for (u32 i = 0; i < shnum; i++)
//     {
//         if (shdr_array[i].sh_type == SHT_SYMTAB)
//         {
//             return &shdr_array[i];
//         }
//         
//     }
//     return NULL;
// }
// 
// u32 calcContentSize(Elf32_Shdr *shdr_array, u32 shnum)
// {
//     u32 alloc_size = 0;
// 
//     for (u32 i = 0; i < shnum; i++)
//     {
//         if ((shdr_array[i].sh_flags & SHF_WRITE | SHF_ALLOC | SHF_EXECINSTR))
//         {
//             alloc_size += shdr_array[i].sh_size;
//         }
//     }
//     
//     return alloc_size;
// }
// 
// int relocELFContent(u32 *elf)
// {
//     Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf;
//     Elf32_Shdr *shdr_array = (Elf32_Shdr *)((u32)ehdr + ehdr->e_shoff);
// 
//     u32 e_shnum = ehdr->e_shnum;
// 
//     u32 alloc_size = calcContentSize(shdr_array, e_shnum);
// 
//     u32 *reloc_ptr = mem_alloc(alloc_size, 4);
// 
//     if (!reloc_ptr)
//     {
//         _printf("Nao foi possivel alocar memoria! %d\n", alloc_size);
//         return -1;
//     }
//     
//     Elf32_Shdr *symtab_Shdr = findSymTab(shdr_array, e_shnum);
// 
// 
//     if (!symtab_Shdr)
//     {
//         _printf("Nao foi possivel encontrar symtab!\n");
//         return -1;
//     }
// 
//     Elf32_Sym *sym_array = (Elf32_Sym *)((u32)ehdr + symtab_Shdr->sh_offset);
// 
//     for (u32 i = 0; i < e_shnum; i++)
//     {
//         Elf32_Shdr *shdr = &shdr_array[i];
// 
//         if (shdr->sh_type == SHT_PROGBITS)
//         {
//             shdr->sh_addr += (u32)reloc_ptr;
//         }
//         
//         if (shdr->sh_type == SHT_RELA)
//         {
//             Elf32_Shdr *reloc_target_shdr = &shdr_array[shdr->sh_info];
//             
//             if (reloc_target_shdr->sh_type != 1 || !(reloc_target_shdr->sh_flags & (SHF_WRITE | SHF_ALLOC | SHF_EXECINSTR)))
//                 continue;
// 
//             Elf32_Rela *rela_array = (Elf32_Rela *)((u32)ehdr + shdr->sh_offset);
//             u32 nRela = (u32)(shdr->sh_size /  shdr->sh_entsize);
// 
//             for (u32 j = 0; j < nRela; j++)
//             {
//                 Elf32_Rela *rela = &rela_array[j];
//                 u32 r_info = rela->r_info;
//                 Elf32_Sym *sym = &sym_array[ELF32_R_SYM(r_info)];
//                 u32 symbol_value = sym->st_value;
//                 u32 addr = symbol_value;
// 
//                 u32 st_type = ELF32_ST_TYPE(sym->st_info);
// 
//                 if (sym->st_shndx > 0 && sym->st_shndx < ehdr->e_shnum)
//                 {
//                     Elf32_Shdr *sym_sh = &shdr_array[sym->st_shndx];
//                     addr += rela->r_addend + sym_sh->sh_addr;
// 
//                     // if (st_type == STT_SECTION)
//                     // {
//                     //     addr += sym_sh->sh_addralign;
//                     // }
//                 }
// 
//                 u32 *relocData = (u32 *)((u32)ehdr + reloc_target_shdr->sh_offset + rela->r_offset);
// 
//                 if (!applyReloc(relocData, ELF32_R_TYPE(r_info), addr))
//                 {
//                     _printf("Incorrect reloc type!\n");
//                     return -1;
//                 }
// 
//             }
// 
//             memcpy((u32 *)reloc_target_shdr->sh_addr, (u32*)((u32)ehdr + reloc_target_shdr->sh_offset), reloc_target_shdr->sh_size);
//         }
//     }
// 
//     ehdr->e_entry += (u32)reloc_ptr;
// 
//     return 0;
// }
// 
// void sys_GameLoop(u32);

// void main(u32 a0)
// {
//     // createPluginHeapZone();
//     Elf32_Ehdr *elf = (Elf32_Ehdr *)loadELF();
// 
//     // if (elf)
//     // {
//     //     relocELFContent((u32*)elf);
//     //     execEntry(elf->e_entry);
//     //     Mem_FreePtr(elf);
//     // }
//     sys_GameLoop(a0);
// }

void _main(uint a0)
{

    createPluginHeapZone();
    Mem_SetCurrentHeapZone(Mem__pRootHeap);
    PrintHeapStats();
    load_global_symbols();

    Mem_SetCurrentHeapZone(pluginHeap);

    load_erl("host0:GOWPLUGIN.ERL");

    destroy_global_symbols();

    Mem_SetCurrentHeapZone(Mem__pRootHeap);

    PrintHeapStats();

    sys_GameLoop(a0);
}

void injectPatches()
{
    RedirectCall(0x138DC0, _main);
}

void INVOKER()
{
    FlushCache(0);
    injectPatches();
}
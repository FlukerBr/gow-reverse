#include "elf.h"
#include "injector.h"
#include "sifdev.h"
#include "stdio.h"
#include "string.h"

// FD8F0

#define PLUGIN_HEAP_SIZE 0x2D8E0
#define PLUGIN_HEAP_START 0xD0000

typedef uint32_t u32;
u32 *Mem_NewHeapZone(u32 pStart,u32 byteSize,char *pHeapName,u32 moreMasters);
u32 Mem_GetCurrentHeapZone();
void *Mem_NewPtr(u32*, u32, u32);
void sys_GameLoop(u32);
void Mem_FreePtr(void *);

u32 *pluginHeap;

void *mem_alloc(u32 nBytes, u32 byteAlignment)
{
    if (!pluginHeap)
    {
        return NULL;

    }

    return Mem_NewPtr(pluginHeap, nBytes, byteAlignment);
}

void *loadELF()
{
    sce_dirent dirbuf;

    char *rootDir = "cdrom0:\\";

    int dirfd = sceDopen(rootDir);

    sceDread(dirfd, &dirbuf);
    sceDread(dirfd, &dirbuf);

    while (sceDread(dirfd, &dirbuf) > 0)
    {
        if (EndsWith(dirbuf.d_name, ".ELF;1"))
        {
            break;
        }
    }
    char format_path[32];
    sprintf(format_path, "%s%s", rootDir, dirbuf.d_name);

    int fd = sceOpen(format_path, SCE_RDONLY);

    u32 elf_size = dirbuf.d_stat.st_size;

    u32 *elf = mem_alloc(elf_size, 4);

    if (!elf)
    {
        kprintf("*** Unable to alloc memory %d to load elf ***!\n", elf_size);
        return NULL;
    }
}

void execEntry(u32 address)
{
    ((void(*)())address)();
}

int applyReloc(u32 *reloc, u32 type, u32 addr)
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

    kprintf("Changed data at %08X from %08X to %08X.\n", reloc, u_current_data, newstate);

    return 0;
}

Elf32_Shdr *findSymTab(Elf32_Shdr *shdr_array, u32 shnum)
{
    for (u32 i = 0; i < shnum; i++)
    {
        if (shdr_array[i].sh_type == SHT_SYMTAB)
        {
            return &shdr_array[i];
        }
        
    }
    return NULL;
}

u32 calcAllocSize(Elf32_Shdr *shdr_array, u32 shnum)
{
    u32 alloc_size = 0;

    for (u32 i = 0; i < shnum; i++)
    {
        if ((shdr_array[i].sh_flags & SHF_WRITE | SHF_ALLOC | SHF_EXECINSTR))
        {
            alloc_size += shdr_array[i].sh_size;
        }
    }
    
    return alloc_size;
}

int relocELFCode(u32 *elf)
{
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf;
    Elf32_Shdr *shdr_array = (Elf32_Shdr *)((u32)ehdr + ehdr->e_shoff);

    u32 e_shnum = ehdr->e_shnum;

    u32 alloc_size = calcAllocSize(shdr_array, e_shnum);

    u32 *reloc_ptr = mem_alloc(alloc_size, 4);

    if (!reloc_ptr)
    {
        kprintf("Nao foi possivel alocar memoria!\n");
        return -1;
    }
    
    Elf32_Shdr *symtab_Shdr = findSymTab(shdr_array, e_shnum);


    if (!symtab_Shdr)
    {
        kprintf("Nao foi possivel encontrar symtab!\n");
        return -1;
    }

    Elf32_Sym *sym_array = (Elf32_Sym *)((u32)ehdr + symtab_Shdr->sh_offset);

    for (u32 i = 0; i < e_shnum; i++)
    {
        Elf32_Shdr *shdr = &shdr_array[i];

        if (shdr->sh_type == SHT_PROGBITS)
        {
            shdr->sh_addr += (u32)reloc_ptr;
        }
        
        if (shdr->sh_type == SHT_RELA)
        {
            Elf32_Shdr *reloc_target_shdr = &shdr_array[shdr->sh_info];
            
            if (reloc_target_shdr->sh_type != 1 || !(reloc_target_shdr->sh_flags & (SHF_WRITE | SHF_ALLOC | SHF_EXECINSTR)))
                continue;

            Elf32_Rela *rela_array = (Elf32_Rela *)((u32)ehdr + shdr->sh_offset);
            u32 nRela = (u32)(shdr->sh_size /  shdr->sh_entsize);

            for (u32 j = 0; j < nRela; j++)
            {
                Elf32_Rela *rela = &rela_array[j];
                u32 r_info = rela->r_info;
                Elf32_Sym *sym = &sym_array[ELF32_R_SYM(r_info)];
                u32 symbol_value = sym->st_value;
                u32 addr = symbol_value;

                u32 st_type = ELF32_ST_TYPE(sym->st_info);

                if (sym->st_shndx > 0 && sym->st_shndx < ehdr->e_shnum)
                {
                    Elf32_Shdr *sym_sh = &shdr_array[sym->st_shndx];
                    addr += rela->r_addend + sym_sh->sh_addr;

                    // if (st_type == STT_SECTION)
                    // {
                    //     addr += sym_sh->sh_addralign;
                    // }
                }

                u32 *relocData = (u32 *)((u32)ehdr + reloc_target_shdr->sh_offset + rela->r_offset);

                if (!applyReloc(relocData, ELF32_R_TYPE(r_info), addr))
                {
                    kprintf("Erro ao realocar dados na memoria!\n");
                    return -1;
                }

            }

            memcpy((u32 *)reloc_target_shdr->sh_addr, (u32*)((u32)ehdr + reloc_target_shdr->sh_offset), reloc_target_shdr->sh_size);
        }
    }

    ehdr->e_entry += (u32)reloc_ptr;

    return 0;
}

void createPluginHeapZone()
{
    pluginHeap = Mem_NewHeapZone(PLUGIN_HEAP_START, PLUGIN_HEAP_SIZE, "PLUGIN", 0x40);
}

void main(u32 a0)
{
    createPluginHeapZone();
    Elf32_Ehdr *elf = (Elf32_Ehdr *)loadELF();

    if (elf)
    {
        relocELFCode((u32*)elf);
        execEntry(elf->e_entry);
        Mem_FreePtr(elf);
    }
    
    sys_GameLoop(a0);
}

void injectPatches()
{
    RedirectCall(0x143148, main);
    // RedirectCall(0x18BE68, hook_sysFile_OpenResource);
    // RedirectCall(0x18EEE0, hook_sysFile_OpenResource);
    // RedirectCall(0x1DCDF0, hook_sysFile_OpenResource);
}

void FlushCache(uint32_t);

void INVOKER()
{
    FlushCache(0);
    injectPatches();
}
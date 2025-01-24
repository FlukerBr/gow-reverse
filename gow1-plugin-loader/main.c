#include "elf.h"
#include "injector.h"
#include "sifdev.h"
#include "stdio.h"
#include "string.h"
#include "type.h"
// FD8F0

#define PLUGIN_HEAP_SIZE 0x2D8E0
#define PLUGIN_HEAP_START 0xD0000

typedef uint32_t u32;

typedef struct t_ee_sema
{
    int count,
        max_count,
        init_count,
        wait_threads;
    u32 attr,
        option;
} ee_sema_t;

void FlushCache(uint32_t);

u32 *Mem_NewHeapZone(u32 pStart,u32 byteSize,char *pHeapName,u32 moreMasters);
u32 Mem_GetCurrentHeapZone();
void *Mem_NewPtr(u32*, u32, u32);
void sys_GameLoop(u32);
void Mem_FreePtr(void *);

extern int _fs_init;
extern int _fs_iob_semid;

int _sceFsWaitS(int);
int sceFsInit();
int _sceFsSigSema();
int new_iob();
void WaitSema(int);
void DeleteSema(int);
int sceFsSifCallRpc(uint,uint,uint,uint,uint,uint,uint,uint,uint,uint);
int CreateSema(ee_sema_t*);
void SignalSema(int);
int get_iob(uint);

extern uint DAT_329344;
extern uint DAT_329348;
extern uint DAT_32934C;
extern uint DAT_329350;
extern uint DAT_329354;
extern uint DAT_32974B;
extern uint _send_data;
extern uint _rcv_data_rpc;
extern uint _cd;
extern uint _iob;

int _sceCallCode(char *a1, int a2)
{
    uint i; // $s0
    int v5; // $v1
    int v6; // $s1
    int result; // $v0
    int v8; // $s0
    ee_sema_t v9; // [sp+10h] [-B0h] BYREF
    int v10; // [sp+14h] [-ACh]
    int v11; // [sp+18h] [-A8h]
    char *v12; // [sp+24h] [-9Ch]
    int v13; // [sp+30h] [-90h] BYREF

    _sceFsWaitS(a2);
    if ( !_fs_init )
        sceFsInit();
    i = 0LL;
    *((char*)&DAT_32934C) = *a1;
    if ( (unsigned char)DAT_32934C << 24 )
    {
        for ( i = 1LL; i < 1024; i = (int)i + 1 )
        {
            v5 = (unsigned char)a1[i];
            *((char *)&_send_data + i + 12) = v5;
            if ( !(v5 << 24) )
                break;
        }
    }

    if ( i == 1024 )
    {
        *(char*)((uint)&_send_data + 0x40B) = 0;
        i = 1023;
    }

    v10 = 1;
    v12 = "SceStdioCCodeSema";
    v11 = 0;
    v6 = CreateSema(&v9);
    DAT_329344 = (int)&v13;
    _send_data = v6;
    DAT_329348 = 4;
    if ( sceFsSifCallRpc((uint)&_cd, a2, 0LL, (uint)&_send_data, (int)i + 13, (uint)&_rcv_data_rpc, 4LL, 0LL, 0, 0) >= 0 )
    {
        v8 = *(uint*)0x20329F80;
        _sceFsSigSema();
        if ( v8 )
        {
            WaitSema(v6);
            DeleteSema(v6);
            result = v13;
        }
        else
        {
            DeleteSema(v6);
            result = -11LL;
        }
    }
    else
    {
        DeleteSema(v6);
        _sceFsSigSema();
        result = -11LL;
    }
    return result;
}

int sceDopen(char *pathname)
{
    int v2; // $v0
    char *v3; // $s2
    int v5; // $s1
    int v6; // $a1
    int v7; // $a2
    int v8; // $a3
    int v9; // $a0

    _sceFsWaitS(9LL);
    if ( !_fs_init )
        sceFsInit();
    _sceFsSigSema();
    v2 = new_iob();
    v3 = (char *)v2;
    if ( !v2 )
        return -19LL;
    v5 = _sceCallCode(pathname, 9LL);
    WaitSema(_fs_iob_semid);
    if ( v5 >= 0 )
    {
        *(int *)v3 = v5;
        v9 = _fs_iob_semid;
        v5 = (v3 - (char *)&_iob) >> 4;
    }
    else
    {
        *((int *)v3 + 1) = 0;
        v9 = _fs_iob_semid;
    }
    SignalSema(v9);
    return v5;
}

int sceDread(int fd, void* buf)
{
    int v3; // $s0
    int v4; // $v1
    int result; // $v0
    int v6; // $s1
    int v7; // $s0
    ee_sema_t v8; // [sp+10h] [-70h] BYREF
    int v9; // [sp+14h] [-6Ch]
    int v10; // [sp+18h] [-68h]
    const char *v11; // [sp+24h] [-5Ch]
    int v12; // [sp+30h] [-50h] BYREF

    v3 = get_iob(fd);
    _sceFsWaitS(11LL);
    if ( _fs_init && v3 && *(int *)(v3 + 4) )
    {
        v4 = *(int *)v3;
        DAT_329350 = (uint)buf;
        DAT_32934C = v4;
        v9 = 1;
        v11 = "SceStdioDreadSema";
        v10 = 0;
        v6 = CreateSema(&v8);
        _send_data = v6;
        DAT_329344 = (int)&v12;
        DAT_329348 = 4;
        if ( sceFsSifCallRpc((uint)&_cd, 11LL, 0LL, (uint)&_send_data, 32LL, (uint)&_rcv_data_rpc, 4LL, 0LL, 0, 0) >= 0 )
        {
            v7 = *(uint*)0x20329F80;
            _sceFsSigSema();
            if ( v7 )
            {
                WaitSema(v6);
                DeleteSema(v6);
                result = v12;
            }
            else
            {
                DeleteSema(v6);
                result = -11LL;
            }
        }
        else
        {
            WaitSema(v6);
            _sceFsSigSema();
            result = -11LL;
        }
    }
    else
    {
        _sceFsSigSema();
        result = -9LL;
    }
    return result;
}

int sceDclose(int fd)
{
    int v1; // $s0
    int result; // $v0
    int v3; // $s1
    int v4; // $s0
    ee_sema_t v5; // [sp+10h] [-80h] BYREF
    int v6; // [sp+14h] [-7Ch]
    int v7; // [sp+18h] [-78h]
    const char *v8; // [sp+24h] [-6Ch]
    int v9; // [sp+30h] [-60h] BYREF

    v1 = get_iob(fd);
    _sceFsWaitS(10LL);
    if ( _fs_init && v1 && *(int *)(v1 + 4) )
    {
        DAT_32934C = *(int *)v1;
        v6 = 1;
        v8 = "SceStdioDcloseSema";
        v7 = 0;
        v3 = CreateSema(&v5);
        _send_data = v3;
        DAT_329344 = (int)&v9;
        DAT_329348 = 4;
        if ( sceFsSifCallRpc((uint)&_cd, 10LL, 0LL, (uint)&_send_data, 20LL, (uint)&_rcv_data_rpc, 4LL, 0LL, 0, 0) < 0 )
        {
            DeleteSema(v3);
            _sceFsSigSema();
            result = -11LL;
        }
        else
        {
            *(int *)(v1 + 4) = 0;
            v4 = *(uint*)0x20329F80;
            _sceFsSigSema();
            if ( v4 )
            {
                // WaitSema(v3);
                DeleteSema(v3);
                result = v9;
                if ( v9 > -1LL )
                    result = 0LL;
            }
            else
            {
                DeleteSema(v3);
                result = -11LL;
            }
        }
    }
    else
    {
        _sceFsSigSema();
        result = -9LL;
    }
    return result;
}

u32 *pluginHeap;

void *mem_alloc(u32 nBytes, u32 byteAlignment)
{
    if (!pluginHeap)
    {
        return NULL;
    }

    _printf("Alocando %d nbytes!\n", nBytes);
    return Mem_NewPtr(pluginHeap, nBytes, byteAlignment);
}

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

char buffertest[50];

void *loadELF()
{
    char *rootDir = "cdrom0:\\";
    int dirfd = sceDopen(rootDir);
    char fname[32];
    sce_dirent dirbuf;

    // sceDread(dirfd, &dirbuf);
    // sceDread(dirfd, &dirbuf);

    while (sceDread(dirfd, &dirbuf) > 0)
    {
        // if (EndsWith(dirbuf.d_name, ".ELF;1"))
        // {
        //     break;
        // }
        _printf("ELF: %s found size %d!\n", dirbuf.d_name, dirbuf.d_stat.st_size);
    }
    

    // u32 elf_size = dirbuf.d_stat.st_size;
    // strcpy(fname, dirbuf.d_name);

    _printf("%d\n", sceDclose(dirfd));
    return NULL;
//     char format_path[32];
//     sprintf(format_path, "%s%s", rootDir, fname);
//     int fd = sceOpen(format_path, SCE_RDONLY);
// 
//     _printf("%s\n", format_path);
// 
//     u32 *elf = mem_alloc(elf_size, 4);
// 
//     if (elf && fd >= 0)
//     {
//         sceRead(fd, elf, elf_size);
//         _printf("Elf alocado em: %p %d\n", elf, fd);
//         sceClose(fd);
//         
//         return elf;
//     }
// 
//     _printf("*** Unable to alloc memory %d to load elf ***!\n", elf_size);
//     return NULL;
}

typedef struct
{
    uint L2 : 1;
    uint R2 : 1;
    uint L1 : 1;
    uint R1 : 1;
    uint triangle : 1;
    uint circle : 1;
    uint X : 1;
    uint square : 1;
    uint select : 1;
    uint L3 : 1;
    uint R3 : 1;
    uint start : 1;
    uint UP : 1;
    uint RIGHT : 1;
    uint DOWN : 1;
    uint LEFT : 1;
    ushort dummy;
} Gpad;

extern uint g_Timer;
uint time;
Gpad gamepad;

Gpad ReadPad();

uint abc = 0;

void GameState_Update();

void loop()
{
    gamepad = ReadPad(0);

    if ((g_Timer - time)/10 > 0.1f)
    {
        if (gamepad.L1 && !abc)
        {
            abc = 1;
            loadELF();
        }
        
        time = g_Timer;
    }
    GameState_Update();
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

    _printf("Changed data at %08X from %08X to %08X.\n", reloc, u_current_data, newstate);

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

u32 calcContentSize(Elf32_Shdr *shdr_array, u32 shnum)
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

int relocELFContent(u32 *elf)
{
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)elf;
    Elf32_Shdr *shdr_array = (Elf32_Shdr *)((u32)ehdr + ehdr->e_shoff);

    u32 e_shnum = ehdr->e_shnum;

    u32 alloc_size = calcContentSize(shdr_array, e_shnum);

    u32 *reloc_ptr = mem_alloc(alloc_size, 4);

    if (!reloc_ptr)
    {
        _printf("Nao foi possivel alocar memoria! %d\n", alloc_size);
        return -1;
    }
    
    Elf32_Shdr *symtab_Shdr = findSymTab(shdr_array, e_shnum);


    if (!symtab_Shdr)
    {
        _printf("Nao foi possivel encontrar symtab!\n");
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
                    _printf("Incorrect reloc type!\n");
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

void sys_GameLoop(u32);

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

void injectPatches()
{
    RedirectCall(0x21FD6C, loop);
}

void INVOKER()
{
    FlushCache(0);
    injectPatches();
}
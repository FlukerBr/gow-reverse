#include "stdint.h"
#include "type.h"
#include "sifdev.h"

typedef struct _iomanX_iop_file {
    int mode;       
    int unit;       
    struct _iomanX_iop_device *device;
    void    *privdata;  
} iomanX_iop_file_t;

typedef struct _iomanX_iop_device {
    const char *name;
    unsigned int type;
    unsigned int version;
    const char *desc;
    uint *ops; // struct _iomanX_iop_device_ops
} iomanX_iop_device_t;

typedef struct t_ee_sema
{
    int count,
        max_count,
        init_count,
        wait_threads;
    u32 attr,
        option;
} ee_sema_t;

extern int _fs_init;
extern int _fs_iob_semid;
extern int _fs_fsq_semid;

int _sceFsWaitS(int);
int sceFsInit();
int _sceFsSigSema();
iomanX_iop_file_t* new_iob();
void WaitSema(int);
void DeleteSema(int);
int sceFsSifCallRpc(uint,uint,uint,uint,uint,uint,uint,uint,uint,uint);
int sceSifCallRpc(uint,uint,uint,uint,uint,uint,uint,uint,uint,uint);
int CreateSema(ee_sema_t*);
void SignalSema(int);
iomanX_iop_file_t* get_iob(uint);

extern uint _send_data;
extern uint _rcv_data_rpc;
extern uint _cd;
extern uint _iob;
extern uint _sceFs_q;

extern uint DAT_35D744;
extern uint DAT_35D748;
extern uint DAT_35D74C;
extern uint DAT_35D750;
extern uint DAT_35D754;
extern uint DAT_35D758;
// extern uint DAT_32974B;

int _sceCallCode(const char *param_1,int param_2)
{
    char cVar1;
    int sema_id;
    int lVar2;
    int iVar3;
    ee_sema_t sema;
    int result;
    
    _sceFsWaitS(param_2);
    if (_fs_init == 0)
    {
        sceFsInit();
    }
    *(char*)&DAT_35D74C = *param_1;
    iVar3 = 0;
    if ((char)DAT_35D74C != '\0')
    {
        for (iVar3 = 1;
            (iVar3 < 0x400 &&
            (cVar1 = param_1[iVar3], *(char *)((int)&DAT_35D74C + iVar3) = cVar1, cVar1 != '\0'));
            iVar3 = iVar3 + 1) {
        }
    }
    if (iVar3 == 0x400)
    {
        *((char*)((uint)&_send_data + 0x40B)) = 0;
        iVar3 = 0x3ff;
    }
    sema.max_count = 1;
    sema.option = (u32)"SceStdioCCodeSema";
    sema.init_count = 0;
    sema_id = CreateSema(&sema);
    DAT_35D748 = 4;
    _send_data = sema_id;
    DAT_35D744 = (uint)&result;
    lVar2 = sceFsSifCallRpc((uint)&_cd,param_2,0,(uint)&_send_data,iVar3 + 0xd,(uint)&_rcv_data_rpc,4,0,0,0);
    iVar3 = *(uint*)(0x20000000 | (uint)&_rcv_data_rpc);
    if (lVar2 < 0)
    {
        DeleteSema(sema_id);
        _sceFsSigSema();
        result = -0xb;
    }
    else
    {
        _sceFsSigSema();
        if (iVar3 == 0)
        {
            DeleteSema(sema_id);
            result = -0xb;
        }
        else
        {
            WaitSema(sema_id);
            DeleteSema(sema_id);
        }
    }
    return result;
}

int sceDopen(const char *dirname)
{
    iomanX_iop_file_t *v7; // $s2
    int v9; // $s1

    _sceFsWaitS(9LL);
    if ( !_fs_init )
        sceFsInit();
    _sceFsSigSema();
    v7 = new_iob();
    if ( !v7 )
        return -19;
    v9 = _sceCallCode(dirname, 9LL);
    WaitSema(_fs_iob_semid);
    if ( v9 >= 0 )
    {
        v7->mode = v9;
        v9 = ((uint)v7 - (uint)&_iob) >> 4;
    }
    else
    {
        v7->unit = 0;
    }
    SignalSema(_fs_iob_semid);
    return v9;
}

int sceDread(int fd, sce_dirent *buf)

{
    int iVar1;
    iomanX_iop_file_t *iob;
    int sema_id;
    int lVar2;
    ee_sema_t sema;
    int result;
    int lVar3;
    
    iob = get_iob(fd);
    _sceFsWaitS(0xb);
    if (((_fs_init == 0) || (iob == NULL)) || (iob->unit == 0))
    {
        _sceFsSigSema();
        result = -9;
    }
    else
    {
        DAT_35D74C = iob->mode;
        sema.max_count = 1;
        sema.option = (uint)"SceStdioDreadSema";
        sema.init_count = 0;
        DAT_35D750 = (uint)buf;
        sema_id = CreateSema(&sema);
        DAT_35D744 = (uint)&result;
        DAT_35D748 = 4;
        _send_data = sema_id;
        lVar3 = sceFsSifCallRpc((uint)&_cd,0xb,0,(uint)&_send_data,0x20,(uint)&_rcv_data_rpc,4,0,0,0);
        iVar1 = *(uint*)(0x20000000 | (uint)&_rcv_data_rpc);
        if (lVar3 < 0)
        {
            WaitSema(sema_id);
            _sceFsSigSema();
            result = -0xb;
        }
        else
        {
            _sceFsSigSema();
            if (iVar1 == 0)
            {
                DeleteSema(sema_id);
                result = -0xb;
            }
            else
            {
                WaitSema(sema_id);
                DeleteSema(sema_id);
            }
        }
    }
    return result;
}

int sceDclose(int fd)
{
    int iVar1;
    iomanX_iop_file_t *iob;
    int sema_id;
    long lVar2;
    ee_sema_t sema;
    int result;
    
    iob = get_iob(fd);
    _sceFsWaitS(10);
    if (((_fs_init == 0) || (iob == NULL)) || (iob->unit == 0))
    {
        _sceFsSigSema();
        result = -9;
    }
    else
    {
        DAT_35D74C = iob->mode;
        sema.max_count = 1;
        sema.option = (u32)"SceStdioDcloseSema";
        sema.init_count = 0;
        sema_id = CreateSema(&sema);
        DAT_35D744 = (uint)&result;
        DAT_35D748 = 4;
        _send_data = sema_id;
        lVar2 = sceFsSifCallRpc((uint)&_cd,10,0,(uint)&_send_data,0x14,(uint)&_rcv_data_rpc,4,0,0,0);
        if (lVar2 < 0)
        {
            DeleteSema(sema_id);
            _sceFsSigSema();
            result = -0xb;
        }
        else
        {
            iob->unit = 0;
            iVar1 = *(uint*)(0x20000000 | (uint)&_rcv_data_rpc);
            _sceFsSigSema();
            if (iVar1 == 0)
            {
                DeleteSema(sema_id);
                result = -0xb;
            }
            else
            {
                WaitSema(sema_id);
                DeleteSema(sema_id);
                if (-1 < result)
                {
                    result = 0;
                }
            }
        }
    }
    return result;
}

size_t sceLseek(int fd,size_t offset,int whence)
{
    iomanX_iop_file_t *iob;
    int iVar2;
    undefined8 sema_id;
    int *ppuVar3;
    int iVar4;
    ee_sema_t sema;
    int result;
    uint uVar1;
    
    iob = get_iob(fd);
    _sceFsWaitS(4);
    if (_fs_init == 0)
    {
        _sceFsSigSema();
        result = -1;
    }
    else if ((iob == NULL) || (uVar1 = iob->unit, uVar1 == 0))
    {
        _sceFsSigSema();
        result = -9;
    }
    else
    {
        DAT_35D74C = iob->mode;
        DAT_35D758 = ((uint)iob - (uint)&_iob) >> 4;
        sema.max_count = 1;
        sema.init_count = 0;
        sema.option = 0;
        DAT_35D750 = offset;
        DAT_35D754 = whence;
        sema_id = CreateSema(&sema);
        DAT_35D744 = (uint)&result;
        DAT_35D748 = 4;
        _send_data = sema_id;
        if ((uVar1 & 0x8000) != 0)
        {
            WaitSema(_fs_fsq_semid);
            if (_sceFs_q == -1)
            {
                _sceFs_q = _send_data;
                _send_data = -_send_data;
            }
            else
            {
                iVar4 = 1;
                do {
                    if (0x1f < iVar4) goto LAB_00486254;
                    ppuVar3 = &_sceFs_q + iVar4;
                    iVar4 = iVar4 + 1;
                } while (*ppuVar3 != -1);
                *ppuVar3 = _send_data;
                _send_data = -_send_data;
            }
LAB_00486254:
            SignalSema(_fs_fsq_semid);
        }
        iVar2 = sceSifCallRpc((uint)&_cd,4,0,(uint)&_send_data,0x1c,(uint)&_rcv_data_rpc,4,0,0,0);
        iVar4 = *(uint*)(0x20000000 | (uint)&_rcv_data_rpc);
        if (iVar2 < 0)
        {
            DeleteSema(sema_id);
            _sceFsSigSema();
            result = -0xb;
        }
        else
        {
            _sceFsSigSema();
            if (iVar4 == 0)
            {
                DeleteSema(sema_id);
                result = -0xb;
            }
            else if ((uVar1 & 0x8000) == 0)
            {
                WaitSema(sema_id);
                DeleteSema(sema_id);
            }
            else
            {
                DeleteSema(sema_id);
                result = 0;
            }
        }
    }
    return result;
}

int sceGetstat(const char *name, sce_stat *buf)
{
    char cVar1;
    int iVar2;
    int aa;
    int iVar3;
    ee_sema_t sema;
    int result;
    undefined8 sema_id;
    
    _sceFsWaitS(0xc);
    if (_fs_init == 0)
    {
        sceFsInit();
    }
    ((char*)&DAT_35D750)[0] = name[0];
    iVar2 = 0;
    cVar1 = (char)DAT_35D750;
    while (iVar3 = iVar2, cVar1 != '\0') {
        iVar3 = iVar2 + 1;
        if (0x3ff < iVar3) break;
        cVar1 = name[iVar3];
        *(char *)((int)&DAT_35D750 + iVar2 + 1) = cVar1;
        iVar2 = iVar3;
    }
    if (iVar3 == 0x400)
    {
        ((char*)((uint)&_send_data + 0x40f))[0] = '\0';
        iVar3 = 0x3ff;
    }
    sema.max_count = 1;
    sema.init_count = 0;
    sema.option = 0;
    DAT_35D74C = (uint)buf;
    sema_id = CreateSema(&sema);
    _send_data = (uint)sema_id;
    DAT_35D748 = 4;
    DAT_35D744 = (uint)&result;
    iVar3 = sceSifCallRpc((uint)&_cd,0xc,0,(uint)&_send_data,(iVar3 + 0x11),(uint)&_rcv_data_rpc,4,0,0,0);
    iVar2 = *(uint*)(0x20000000 | (uint)&_rcv_data_rpc);
    if (iVar3 < 0)
    {
        DeleteSema(sema_id);
        _sceFsSigSema();
        result = -0xb;
    }
    else
    {
        _sceFsSigSema();
        if (iVar2 == 0)
        {
            DeleteSema(sema_id);
            result = -0xb;
        }
        else
        {
            WaitSema(sema_id);
            DeleteSema(sema_id);
        }
    }
    return result;
}
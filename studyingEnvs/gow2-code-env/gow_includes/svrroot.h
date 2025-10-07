#ifndef SVRROOT_H
#define SVRROOT_H

#include "structs.h"


uint svrRoot_QueUnPause(void);
uint svrRoot_QuePause(void);
uint svrRoot_UnPauseAllClients(void);
uint svrRoot_PauseAllClients(void);
uint svrRoot_LoadClient(IFF_Header const *,svrLoadParm const *);
uint svrRoot_FreeClient(svrClient *);
uint svrRoot_StartClient(svrClient *,svrClientParm const *);
uint svrRoot_ProcessClient(svrClient *);
uint svrRoot_Destructor_svrRoot(void);
uint svrRoot_WadLoadCompleted(void);
uint svrRoot_ProcessContext(void);
uint svrRoot_AddData(char const *,void *);
uint svrRoot_FindObject_(uint);
uint svrRoot_FindObject(char const *);
uint svrRoot_FindData(char const *,int *);
uint svrRoot_AllocateClient(svrClientParm const *);
uint svrRoot_Start(void);
uint svrRoot_m_pClientParmStack;
uint svrRoot_m_uClientParmStackIdx;
uint svrRoot_m_bPushNextClientParmFlg;
uint svrRoot_m_bPaused;
uint svrRoot_m_pRegistered;
uint svrRoot_vtbl;


#endif
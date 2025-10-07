#ifndef SVR_H
#define SVR_H

#include "structs.h"


uint svr_ReadContextStack(void);
uint svr_PopClientContext(void);
uint svr_PushClientContext(svrClient const *);
uint svr_SignalWadLoadCompleted(void);
uint svr_CreateDefaultParm(int);
uint svr_ProcessClient(svrClient *);
uint svr_Destructor_svr(void);
uint svr_SvrParm(svrClientParm const *);
uint svr_vtbl;


#endif
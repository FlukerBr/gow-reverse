#ifndef FXSERVERCONTEXT_H
#define FXSERVERCONTEXT_H

#include "structs.h"


uint fxServerContext_StartServer(void);
uint fxServerContext_ProcessServer(void);
uint fxServerContext_NotifyClientDisconnect(svrClient *);
uint fxServerContext_NotifyClientConnect(svrClient *);
uint fxServerContext_FreeClient(svrClient *);
uint fxServerContext_AllocateClient(svrClientParm const *);
uint fxServerContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint fxServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint fxServerContext_Destructor_fxServerContext(void);
uint fxServerContext_fxServerContext(svrParm const *);
uint fxServerContext_vtbl;


#endif
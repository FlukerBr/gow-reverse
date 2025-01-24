#ifndef BHVRCONTEXT_H
#define BHVRCONTEXT_H

#include "structs.h"


uint bhvrContext_BHVRClient(svrClient *);
uint bhvrContext_Destructor_bhvrContext(void);
uint bhvrContext_SendEvent(goEvent const *);
uint bhvrContext_NotifyContextDisconnected(void);
uint bhvrContext_EndClient(svrClient *);
uint bhvrContext_FreeClient(svrClient *);
uint bhvrContext_AllocateClient(svrClientParm const *);
uint bhvrContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint bhvrContext_NotifyClientDisconnect(svrClient *);
uint bhvrContext_ProcessServer(void);
uint bhvrContext_bhvrContext(svrParm const *);
uint bhvrContext_vtbl;


#endif
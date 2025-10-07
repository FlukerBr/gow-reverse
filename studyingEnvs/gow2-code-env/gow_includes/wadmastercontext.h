#ifndef WADMASTERCONTEXT_H
#define WADMASTERCONTEXT_H

#include "structs.h"


uint wadMasterContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint wadMasterContext_EndClient(svrClient *);
uint wadMasterContext_StartClient(svrClient *,svrClientParm const *);
uint wadMasterContext_Destructor_wadMasterContext(void);
uint wadMasterContext_NextContext(void);
uint wadMasterContext_FirstContext(void);
uint wadMasterContext_FindContext_(void const *);
uint wadMasterContext_FindContext(char const *);
uint wadMasterContext_NotifyClientDisconnect(svrClient *);
uint wadMasterContext_NotifyClientConnect(svrClient *);
uint wadMasterContext_CreateDefaultParm(int);
uint wadMasterContext_FreeClient(svrClient *);
uint wadMasterContext_AllocateClient(svrClientParm const *);
uint wadMasterContext_vtbl;


#endif
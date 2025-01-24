#ifndef GOMASTERCONTEXTSERVER_H
#define GOMASTERCONTEXTSERVER_H

#include "structs.h"


uint goMasterContextServer_AllocateClient(svrClientParm const *);
uint goMasterContextServer_FreeClient(svrClient *);
uint goMasterContextServer_LoadClient(IFF_Header const *,svrLoadParm const *);
uint goMasterContextServer_Destructor_goMasterContextServer(void);
uint goMasterContextServer_FindContext(wadContext *,uint);
uint goMasterContextServer_EndClient(svrClient *);
uint goMasterContextServer_NotifyClientDisconnect(svrClient *);
uint goMasterContextServer_NotifyClientConnect(svrClient *);
uint goMasterContextServer_StartClient(svrClient *,svrClientParm const *);
uint goMasterContextServer_vtbl;


#endif
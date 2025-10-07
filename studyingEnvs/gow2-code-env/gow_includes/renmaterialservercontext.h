#ifndef RENMATERIALSERVERCONTEXT_H
#define RENMATERIALSERVERCONTEXT_H

#include "structs.h"


uint renMaterialServerContext_NotifyClientDisconnect(svrClient *);
uint renMaterialServerContext_NotifyClientConnect(svrClient *);
uint renMaterialServerContext_EndClient(svrClient *);
uint renMaterialServerContext_FreeClient(svrClient *);
uint renMaterialServerContext_AllocateClient(svrClientParm const *);
uint renMaterialServerContext_ProcessClient(svrClient *);
uint renMaterialServerContext_Destructor_renMaterialServerContext(void);
uint renMaterialServerContext_ProcessServer(void);
uint renMaterialServerContext_BuildMaterialKeyList(int);
uint renMaterialServerContext_BuildMaterialKeyMap(void);
uint renMaterialServerContext_GetNumberOfSortKeys(void);
uint renMaterialServerContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint renMaterialServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renMaterialServerContext__workname;
uint renMaterialServerContext_vtbl;


#endif
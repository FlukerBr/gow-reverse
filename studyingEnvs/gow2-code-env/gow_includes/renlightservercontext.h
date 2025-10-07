#ifndef RENLIGHTSERVERCONTEXT_H
#define RENLIGHTSERVERCONTEXT_H

#include "structs.h"


uint renLightServerContext_FreeClient(svrClient *);
uint renLightServerContext_AllocateClient(svrClientParm const *);
uint renLightServerContext_Destructor_renLightServerContext(void);
uint renLightServerContext_UpdateSphereGrid(SphereGrid *);
uint renLightServerContext_NotifyClientDisconnect(svrClient *);
uint renLightServerContext_NotifyClientConnect(svrClient *);
uint renLightServerContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint renLightServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renLightServerContext_vtbl;


#endif
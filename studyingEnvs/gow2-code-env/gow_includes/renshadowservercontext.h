#ifndef RENSHADOWSERVERCONTEXT_H
#define RENSHADOWSERVERCONTEXT_H

#include "structs.h"


uint renShadowServerContext_FreeClient(svrClient *);
uint renShadowServerContext_AllocateClient(svrClientParm const *);
uint renShadowServerContext_Destructor_renShadowServerContext(void);
uint renShadowServerContext_ProcessServer(void);
uint renShadowServerContext_Prep(void);
uint renShadowServerContext_DestroyClient(svrClient *);
uint renShadowServerContext_NotifyClientConnect(svrClient *);
uint renShadowServerContext_NotifyClientDisconnect(svrClient *);
uint renShadowServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renShadowServerContext_vtbl;


#endif
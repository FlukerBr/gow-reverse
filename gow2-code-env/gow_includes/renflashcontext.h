#ifndef RENFLASHCONTEXT_H
#define RENFLASHCONTEXT_H

#include "structs.h"


uint renFlashContext_Destructor_renFlashContext(void);
uint renFlashContext_ProcessClient(svrClient *);
uint renFlashContext_FreeClient(svrClient *);
uint renFlashContext_AllocateClient(svrClientParm const *);
uint renFlashContext_ResolveTextures(F_Movie *,F_Shape *);
uint renFlashContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renFlashContext_renFlashContext(svrParm const *);
uint renFlashContext_vtbl;


#endif
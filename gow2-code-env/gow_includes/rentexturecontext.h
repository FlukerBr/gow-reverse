#ifndef RENTEXTURECONTEXT_H
#define RENTEXTURECONTEXT_H

#include "structs.h"


uint renTextureContext_FreeClient(svrClient *);
uint renTextureContext_AllocateClient(IFF_Header const *,svrLoadParm const *);
uint renTextureContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renTextureContext_Destructor_renTextureContext(void);
uint renTextureContext_vtbl;


#endif
#ifndef RENMASTERTEXTURECONTEXT_H
#define RENMASTERTEXTURECONTEXT_H

#include "structs.h"


uint renMasterTextureContext_FreeClient(svrClient *);
uint renMasterTextureContext_AllocateClient(svrClientParm const *);
uint renMasterTextureContext_Destructor_renMasterTextureContext(void);
uint renMasterTextureContext_ProcessServer(void);
uint renMasterTextureContext_vtbl;


#endif
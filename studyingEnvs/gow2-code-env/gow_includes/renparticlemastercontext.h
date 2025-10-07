#ifndef RENPARTICLEMASTERCONTEXT_H
#define RENPARTICLEMASTERCONTEXT_H

#include "structs.h"


uint renParticleMasterContext_Destructor_renParticleMasterContext(void);
uint renParticleMasterContext_ShrinkChunkPools(void);
uint renParticleMasterContext_NotifyClientDisconnect(svrClient *);
uint renParticleMasterContext_FreeClient(svrClient *);
uint renParticleMasterContext_AllocateClient(svrClientParm const *);
uint renParticleMasterContext_renParticleMasterContext(svrClientParm const *);
uint renParticleMasterContext_vtbl;


#endif
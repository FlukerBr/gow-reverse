#ifndef RENPARTICLECONTEXT_H
#define RENPARTICLECONTEXT_H

#include "structs.h"


uint renParticleContext_NotifyContextDisconnected(void);
uint renParticleContext_NotifyClientDisconnect(svrClient *);
uint renParticleContext_NotifyClientConnect(svrClient *);
uint renParticleContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint renParticleContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renParticleContext_FreeClient(svrClient *);
uint renParticleContext_AllocateClient(svrClientParm const *);
uint renParticleContext_CreateDefaultParm(int);
uint renParticleContext_Destructor_renParticleContext(void);
uint renParticleContext_renParticleContext(svrParm const *);
uint renParticleContext_ProcessServer(void);
uint renParticleContext_Prep(void);
uint renParticleContext_MoveToDyingList(renParticleChunk *);
uint renParticleContext_FreeParticleChunk(renParticleChunk *);
uint renParticleContext_AllocateParticleChunk(void);
uint renParticleContext_vtbl;


#endif
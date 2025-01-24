#ifndef RENPARTICLESERVER_H
#define RENPARTICLESERVER_H

#include "structs.h"


uint renParticleServer_Destructor_renParticleServer(void);
uint renParticleServer_Prep(void);
uint renParticleServer_CreateMasterContext(void);
uint renParticleServer_renParticleServer(svrParm const *);
uint renParticleServer_RemoveSharedSystem(renParticleSystem *);
uint renParticleServer_AddSharedSystem(renParticleSystem *);
uint renParticleServer_ResetSharedSystems(void);
uint renParticleServer_vtbl;
uint renParticleServer_gLastBufferPrepped;


#endif
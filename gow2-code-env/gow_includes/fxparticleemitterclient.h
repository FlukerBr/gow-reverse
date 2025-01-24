#ifndef FXPARTICLEEMITTERCLIENT_H
#define FXPARTICLEEMITTERCLIENT_H

#include "structs.h"


uint fxParticleEmitterClient_GetInitialAttributes(void);
uint fxParticleEmitterClient_SetVelocityOffset(VUVec4);
uint fxParticleEmitterClient_ResetAttributes(void);
uint fxParticleEmitterClient_GetRate(void);
uint fxParticleEmitterClient_PrepVelocity(void);
uint fxParticleEmitterClient_GetInterpolator(void);
uint fxParticleEmitterClient_GetParticleSystem(void);
uint fxParticleEmitterClient_MakeClientList(void);
uint fxParticleEmitterClient_CalcParticlesRecquired(void);
uint fxParticleEmitterClient_AllocateInterpolator(void);
uint fxParticleEmitterClient_GetLODEmissionScale(void);
uint fxParticleEmitterClient_PrepEmitter(void);
uint fxParticleEmitterClient_Disconnect(void);
uint fxParticleEmitterClient_Connect(void);
uint fxParticleEmitterClient_InitAnim(void);
uint fxParticleEmitterClient_SetParticleSystem(renParticleSystem *);
uint fxParticleEmitterClient_Destructor_fxParticleEmitterClient(void);
uint fxParticleEmitterClient_fxParticleEmitterClient(fxParticleEmitterClientParm const *);
uint fxParticleEmitterClient_vtbl;


#endif
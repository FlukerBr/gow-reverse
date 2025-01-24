#ifndef RENPARTICLESYSTEM_H
#define RENPARTICLESYSTEM_H

#include "structs.h"


uint renParticleSystem_GetTimeStep(void);
uint renParticleSystem_GetLODEmissionScale(void);
uint renParticleSystem_UpdateLWMatrix(ulong);
uint renParticleSystem_GetGlobalFrameTimeStamp(void);
uint renParticleSystem_ClearGlobalFrame(void);
uint renParticleSystem_SetGlobalFrame(VUMat4 const *);
uint renParticleSystem_GetGlobalFrame(void);
uint renParticleSystem_GetParticles(int,renParticleSystem_ParticleAllocation *);
uint renParticleSystem_Destructor_renParticleSystem(void);
uint renParticleSystem_KillAllParticles(void);
uint renParticleSystem_Reset(void);
uint renParticleSystem_renParticleSystem(renParticleSystemClientParm const *,renParticleContext *);
uint renParticleSystem_Allocator_Allocator(renParticleSystem *,int);
uint renParticleSystem_Allocator_NewChunk(void);
uint renParticleSystem_Iterator_Iterator(renParticleSystem *,float);
uint renParticleSystem_Iterator_StartChunk(void);
uint renParticleSystem_gGlobalFrame;
uint renParticleSystem_gGlobalFrameTimeStamp;


#endif
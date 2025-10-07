#ifndef TSTANDARDEFFECTSYSTEM_H
#define TSTANDARDEFFECTSYSTEM_H

#include "structs.h"


uint tStandardEffectSystem_Destructor_tStandardEffectSystem(void);
uint tStandardEffectSystem_UpdateS_FadeOut(goCreatureCollision *);
uint tStandardEffectSystem_UpdateS_Dead(goCreatureCollision *);
uint tStandardEffectSystem_GetBoneData(goGameObject *);
uint tStandardEffectSystem_SetupBoneData(goGameObject *);
uint tStandardEffectSystem_DeathParticleCallback(odbEffect *);
uint tStandardEffectSystem_UpdateS(goCreatureCollision *);
uint tStandardEffectSystem_InitFadeOut(goCreatureCollision *);
uint tStandardEffectSystem_InitDead(goCreatureCollision *);
uint tStandardEffectSystem_UpdateSoldierEffects(goSoldier *);
uint tStandardEffectSystem_Init(goCreatureCollision *,uint);
uint tStandardEffectSystem_tStandardEffectSystem(void);
uint tStandardEffectSystem___dl(void *);
uint tStandardEffectSystem_Allocate(wadContext *);
uint tStandardEffectSystem_sm_tStandardEffectSystemMultiPool;
uint tStandardEffectSystem_vtbl;


#endif
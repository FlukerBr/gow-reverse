#ifndef TEFFECTSYSTEM_H
#define TEFFECTSYSTEM_H

#include "structs.h"


uint tEffectSystem_InitFadeOut(goCreatureCollision *);
uint tEffectSystem_PlayRippleEffect(goSoldier *);
uint tEffectSystem_PlayFrozenEffect(goCreatureCollision *);
uint tEffectSystem_PlaySplashEffect(goSoldier *);
uint tEffectSystem_GenericFadeOut(goCreatureCollision *,float,float);
uint tEffectSystem_GenericDeath(goCreatureCollision *,float,float);
uint tEffectSystem_Destructor_tEffectSystem(void);
uint tEffectSystem_tEffectSystem(void);
uint tEffectSystem_Reset(void);
uint tEffectSystem_vtbl;


#endif
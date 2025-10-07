#ifndef TPLAYEREFFECTSYSTEM_H
#define TPLAYEREFFECTSYSTEM_H

#include "structs.h"


uint tPlayerEffectSystem_UpdateS_Dead(goSoldier *);
uint tPlayerEffectSystem_UpdateS(goCreatureCollision *);
uint tPlayerEffectSystem_InitDead(goCreatureCollision *);
uint tPlayerEffectSystem_UpdateSoldierEffects(goSoldier *);
uint tPlayerEffectSystem_Init(goCreatureCollision *,uint);
uint tPlayerEffectSystem_Destructor_tPlayerEffectSystem(void);
uint tPlayerEffectSystem_tPlayerEffectSystem(void);
uint tPlayerEffectSystem___dl(void *);
uint tPlayerEffectSystem_Allocate(wadContext *);
uint tPlayerEffectSystem_sm_tPlayerEffectSystemMultiPool;
uint tPlayerEffectSystem_vtbl;


#endif
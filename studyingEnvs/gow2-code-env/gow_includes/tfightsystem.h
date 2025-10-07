#ifndef TFIGHTSYSTEM_H
#define TFIGHTSYSTEM_H

#include "structs.h"


uint tFightSystem_Frozen(void);
uint tFightSystem_Destructor_tFightSystem(void);
uint tFightSystem_Invulnerable(void);
uint tFightSystem_CanAddProximityPressure(ushort);
uint tFightSystem_ResetProjectileWeightLimit(void);
uint tFightSystem_ResetFightWeightLimit(void);
uint tFightSystem_Reset(void);
uint tFightSystem_SetFight(Fight *);
uint tFightSystem_tFightSystem(goCreature *);
uint tFightSystem___dl(void *);
uint tFightSystem_Allocate(wadContext *);
uint tFightSystem_sm_tFightSystemMultiPool;
uint tFightSystem_vtbl;


#endif
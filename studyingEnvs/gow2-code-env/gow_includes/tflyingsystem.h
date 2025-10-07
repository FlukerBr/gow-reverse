#ifndef TFLYINGSYSTEM_H
#define TFLYINGSYSTEM_H

#include "structs.h"


uint tFlyingSystem_Destructor_tFlyingSystem(void);
uint tFlyingSystem_UpdateHarpy(goSoldier *,VUVec4,VUVec4,VUVec4);
uint tFlyingSystem_ResolveMovementMatrix(goSoldier *,VUVec4,float);
uint tFlyingSystem_ResolveDirectionMatrix(goSoldier *,VUVec4,float);
uint tFlyingSystem_Reset(VUMat4 const *);
uint tFlyingSystem___dl(void *);
uint tFlyingSystem_Allocate(wadContext *);
uint tFlyingSystem_sm_tFlyingSystemMultiPool;
uint tFlyingSystem_vtbl;


#endif
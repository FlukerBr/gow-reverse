#ifndef ELECTRICBOLT_H
#define ELECTRICBOLT_H

#include "structs.h"


uint ElectricBolt_Damage(char const *,VUVec4,goHandle,float,float,int,uint,dc_tImpulse const *,dc_tImpulse const *);
uint ElectricBolt_TargetBolt(VUVec4,VUVec4);
uint ElectricBolt_Free(void);
uint ElectricBolt_Init(char const *);


#endif
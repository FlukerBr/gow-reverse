#ifndef CSHIELD_H
#define CSHIELD_H

#include "structs.h"


uint CShield_IsInfiniteShield(void);
uint CShield_IsShardShield(void);
uint CShield_IsTrueShield(void);
uint CShield_ProcessDamage(float,int,VUVec4,float *);
uint CShield_vtbl;


#endif
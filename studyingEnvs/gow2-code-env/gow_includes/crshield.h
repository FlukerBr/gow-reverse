#ifndef CRSHIELD_H
#define CRSHIELD_H

#include "structs.h"


uint CRShield_IsInfiniteShield(void);
uint CRShield_CRShield(void);
uint CRShield_ProcessDamage(float,int,VUVec4,float *);
uint CRShield_vtbl;


#endif
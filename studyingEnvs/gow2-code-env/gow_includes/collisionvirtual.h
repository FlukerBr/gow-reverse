#ifndef COLLISIONVIRTUAL_H
#define COLLISIONVIRTUAL_H

#include "structs.h"


uint collisionVirtual___dl(void *);
uint collisionVirtual_Reset(void);
uint collisionVirtual_EndTestVolume(void);
uint collisionVirtual_BeginTestVolume(VUVec4,float);
uint collisionVirtual_GetCollisionRootJoint(void);
uint collisionVirtual_ComputeBoundingVolume(VUVec4 *);
uint collisionVirtual_GetWorldBound(VUVec4 *);
uint collisionVirtual_Destructor_collisionVirtual(void);
uint collisionVirtual_vtbl;


#endif
#ifndef SHEETCOLLISIONVIRTUAL_H
#define SHEETCOLLISIONVIRTUAL_H

#include "structs.h"


uint sheetCollisionVirtual_PairTest(collisionVirtual *,collisionInput const *,collisionInput const *);
uint sheetCollisionVirtual_FindCollisionSpheres(VUVec4,float);
uint sheetCollisionVirtual_GetClientType(void);
uint sheetCollisionVirtual_SweptSpherePrim(VUVec4,VUVec4,float,KDLeafPrim *,float *,VUVec4 *,VUVec4 *);
uint sheetCollisionVirtual_SweptSphereTest(VUVec4,VUVec4);
uint sheetCollisionVirtual_SphereQuad(VUVec4,float,KDQuad const *,VUVec4 *,float *);
uint sheetCollisionVirtual_SphereTri(VUVec4,float,KDTriangle const *,VUVec4 *,float *);
uint sheetCollisionVirtual_EndTestVolume(void);
uint sheetCollisionVirtual_BeginTestVolume(VUVec4,float);
uint sheetCollisionVirtual_PointTest(VUVec4);
uint sheetCollisionVirtual_SphereTest(VUVec4,float);
uint sheetCollisionVirtual_LineTest(VUVec4,VUVec4);
uint sheetCollisionVirtual_LinePrim(VUVec4,VUVec4,CachedPrim *,float *,VUVec4 *,VUVec4 *);
uint sheetCollisionVirtual_AddLeafToCache(sheetCollisionVirtual *,KDNode const *);
uint sheetCollisionVirtual_FlushCacheSelectively(sheetCollisionVirtual *);
uint sheetCollisionVirtual_Reset(void);
uint sheetCollisionVirtual_Destructor_sheetCollisionVirtual(void);
uint sheetCollisionVirtual_sheetCollisionVirtual(KDHeader const *,collisionClient *,int);
uint sheetCollisionVirtual_vtbl;


#endif
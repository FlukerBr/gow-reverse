#ifndef MCNVXCOLLISIONVIRTUAL_H
#define MCNVXCOLLISIONVIRTUAL_H

#include "structs.h"


uint mCnvxCollisionVirtual_GetCollisionRootJoint(void);
uint mCnvxCollisionVirtual_GetClientType(void);
uint mCnvxCollisionVirtual_Ball_HullCnvx_Contact(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *,PairContact const *);
uint mCnvxCollisionVirtual_Ball_HullSphere_Contact(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *,PairContact const *);
uint mCnvxCollisionVirtual_Ball_Ball_Contact(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *,PairContact const *);
uint mCnvxCollisionVirtual_BothBoth(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_HullHull(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_HullBall(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_BallHull(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_BallBall(mCnvxCollisionVirtual *,mCnvxCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_BoundSheet(mCnvxCollisionVirtual *,sheetCollisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_PairTest(collisionVirtual *,collisionInput const *,collisionInput const *);
uint mCnvxCollisionVirtual_UpdateDeltas(void);
uint mCnvxCollisionVirtual_UpdateWorldActualFunction(void);
uint mCnvxCollisionVirtual_ComputeBoundingVolume(VUVec4 *);
uint mCnvxCollisionVirtual_GetWorldBound(VUVec4 *);
uint mCnvxCollisionVirtual_FindCollisionSpheres(VUVec4,float);
uint mCnvxCollisionVirtual_PointTest(VUVec4);
uint mCnvxCollisionVirtual_SweptSphereTest(VUVec4,VUVec4);
uint mCnvxCollisionVirtual_SphereTest(VUVec4,float);
uint mCnvxCollisionVirtual_LineTest(VUVec4,VUVec4);
uint mCnvxCollisionVirtual_Destructor_mCnvxCollisionVirtual(void);
uint mCnvxCollisionVirtual_mCnvxCollisionVirtual(mCnvxCollisionClientParm const *,collisionClient *);
uint mCnvxCollisionVirtual_vtbl;


#endif
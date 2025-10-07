#ifndef GOSKELETON_H
#define GOSKELETON_H

#include "structs.h"


uint goSkeleton_FindCloseBonePos(VUVec4,int,int,VUVec4 *,VUVec4 *);
uint goSkeleton_FindCloseBonePosChld(VUVec4,int,int,VUVec4 *,VUVec4 *);
uint goSkeleton_BoneCloser(VUVec4,int,int,VUVec4 *,VUVec4 *);
uint goSkeleton_GetJointIndex(uint);
uint goSkeleton_CalcHierarchy_(VUMat4 *,VUMat4 *);
uint goSkeleton_CalcSkinHierarchyWithVisCheck(VUMat4 *,VUMat4 *,VUMat4 *,float);
uint goSkeleton_CalcSkinHierarchy(VUMat4 *,VUMat4 *,VUMat4 *,float);
uint goSkeleton_CalcHierarchyWithVisCheck(VUMat4 *,VUMat4 *,float);
uint goSkeleton_RecalcPartialWorldHierarchy(int,int);
uint goSkeleton_CalcHierarchy(VUMat4 *,VUMat4 *,float);
uint goSkeleton_CalcWorldJointMatrixNoUpdate(uint);
uint goSkeleton_UpdateWorldJointMatricies(ulong);
uint goSkeleton_AllocateWorldJointMatricies(void);
uint goSkeleton_ResetAnim(void);
uint goSkeleton_InitAnim(anmClient *);
uint goSkeleton_AddJointVisibilityBuffer(void);
uint goSkeleton_Destructor_goSkeleton(void);
uint goSkeleton_goSkeleton(goGameObject *,goPrototype const *);


#endif
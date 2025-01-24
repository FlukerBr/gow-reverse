#ifndef SC_CONCUSSIONINTERNAL_H
#define SC_CONCUSSIONINTERNAL_H

#include "structs.h"


uint SC_ConcussionInternal_CBlock_Tween(dc_tConcussion const *,float,int,int,float);
uint SC_ConcussionInternal_CBlock_Scale(float);
uint SC_ConcussionInternal_CBlock_CopyNth(dc_tConcussion const *,int);
uint SC_ConcussionInternal_CBlock_GetNbConcussions(dc_tConcussion const *);
uint SC_ConcussionInternal_CPlane_Tween(dc_tConcussion const *,float,int,int,float);
uint SC_ConcussionInternal_CPlane_Scale(float);
uint SC_ConcussionInternal_CPlane_CopyNth(dc_tConcussion const *,int);
uint SC_ConcussionInternal_CPlane_GetNbConcussions(dc_tConcussion const *);
uint SC_ConcussionInternal_CBlock_CBlock(void);
uint SC_ConcussionInternal_CPlane_CPlane(void);
uint SC_ConcussionInternal_CRadius_Tween(dc_tConcussion const *,float,int,int,float);
uint SC_ConcussionInternal_CRadius_Scale(float);
uint SC_ConcussionInternal_CRadius_CopyNth(dc_tConcussion const *,int);
uint SC_ConcussionInternal_CRadius_GetNbConcussions(dc_tConcussion const *);
uint SC_ConcussionInternal_CTweener_CTweener(void);
uint SC_ConcussionInternal_ConcussionInstanceData_STweener_STweener(void);
uint SC_ConcussionInternal_CRadius_CRadius(void);
uint SC_ConcussionInternal_Destroy(goScript *);
uint SC_ConcussionInternal_Update(goScript *);
uint SC_ConcussionInternal_Init(goScript *);
uint SC_ConcussionInternal_CollisionCallback(void);
uint SC_ConcussionInternal_CalcTotalDuration(dc_tConcussion const *);
uint SC_ConcussionInternal_ApplyDamage(goCreature *,goCreature *,SC_ConcussionInternal_ConcussionInstanceData *,dc_tConcussion const *,VUVec4);
uint SC_ConcussionInternal_ApplyBlock(goCreature *,dc_tConcussion const *,VUVec4);
uint SC_ConcussionInternal_ConcussionInstanceData___dl(void *);
uint SC_ConcussionInternal_ConcussionInstanceData_Allocate(wadContext *);
uint SC_ConcussionInternal_Tween(dc_tConcussion const *,float,SC_ConcussionInternal_CTweener *,int *);
uint SC_ConcussionInternal_IsInTetragon(VUVec4 const *,VUVec4 const *,VUVec4 const *);
uint SC_ConcussionInternal_IsInHalfPlane(VUVec4 const *,VUVec4 const *,VUVec4 const *);
uint SC_ConcussionInternal_TweenValueMod(float,float,float,float,float);
uint SC_ConcussionInternal_TweenValue(float,float,float,float);
uint SC_ConcussionInternal_ConcussionInstanceData_sm_ConcussionInstanceDataMultiPool;
uint SC_ConcussionInternal_CTweener_vtbl;
uint SC_ConcussionInternal_CPlane_vtbl;
uint SC_ConcussionInternal_CBlock_vtbl;
uint SC_ConcussionInternal_CRadius_vtbl;


#endif
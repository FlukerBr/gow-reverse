#ifndef ODBARROW_H
#define ODBARROW_H

#include "structs.h"


uint odbArrow_GetType(void);
uint odbArrow_EmitArrows_(dc_tArrowEmitter const *,wadContext *,goGameObject *,goGameObject *,VUVec4,VUVec4,int);
uint odbArrow_EmitArrows(dc_tArrowEmitter const *,wadContext *,goCreature *,goHandle);
uint odbArrow_Update(void);
uint odbArrow_ArrowCallback(void);
uint odbArrow_TestCollision(void);
uint odbArrow_HandleCollision(void);
uint odbArrow_IsValidTarget(goGameObject *);
uint odbArrow_CreateConcussionEffect(void);
uint odbArrow_CreateHitEffect(VUMat4 const *,goGameObject *,int,int);
uint odbArrow_PlaySound(char const *);
uint odbArrow_StopArrow(VUMat4 *,float,int);
uint odbArrow_MoveArrow(VUMat4 *,float);
uint odbArrow_Destructor_odbArrow(void);
uint odbArrow_odbArrow(dc_tArrow const *,goHandle,VUVec4,VUVec4,VUVec4,float,goHandle,VUVec4);
uint odbArrow___dl(void *);
uint odbArrow_Allocate(wadContext *);
uint odbArrow_sm_odbArrowMultiPool;
uint odbArrow_vtbl;


#endif
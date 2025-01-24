#ifndef GOIO_TANDF_H
#define GOIO_TANDF_H

#include "structs.h"


uint goIO_TandF_SetDamageInfo(float,VUVec4,uint,int);
uint goIO_TandF_GetRadius(void);
uint goIO_TandF_GetHeight(void);
uint goIO_TandF_GetMass(void);
uint goIO_TandF_GetEffectSystem(void);
uint goIO_TandF_GetFightSystem(void);
uint goIO_TandF_GetHandleSystem(void);
uint goIO_TandF_GetAttachmentSystem(void);
uint goIO_TandF_GetMoveSystem(void);
uint goIO_TandF_GetAnimSystem(void);
uint goIO_TandF_GetCreatureControls(void);
uint goIO_TandF_DerivedTweaks(void);
uint goIO_TandF_Update(uint);
uint goIO_TandF_ProcessDetachedSyncJoints(void);
uint goIO_TandF_KeepSyncJointsAligned(void);
uint goIO_TandF_Pause(void);
uint goIO_TandF_SendProgressEvent(float,float,float);
uint goIO_TandF_Destructor_goIO_TandF(void);
uint goIO_TandF_goIO_TandF(goClient *,dc_tTnF const *,int);
uint goIO_TandF_GrabState(void);
uint goIO_TandF_Unlock(void);
uint goIO_TandF_Init(dc_tTnF const *,int);
uint goIO_TandF_PlayAnim(uint);
uint goIO_TandF_Reset(uint);
uint goIO_TandF_UpdateVarsFromTweakers(void);
uint goIO_TandF___dl(void *);
uint goIO_TandF_Allocate(wadContext *);
uint goIO_TandF_sm_goIO_TandFMultiPool;
uint goIO_TandF_vtbl;


#endif
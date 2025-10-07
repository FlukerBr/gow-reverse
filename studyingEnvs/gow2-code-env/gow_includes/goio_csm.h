#ifndef GOIO_CSM_H
#define GOIO_CSM_H

#include "structs.h"


uint goIO_CSM_SetDamageInfo(float,VUVec4,uint,int);
uint goIO_CSM_GetRadius(void);
uint goIO_CSM_GetHeight(void);
uint goIO_CSM_GetMass(void);
uint goIO_CSM_GetEffectSystem(void);
uint goIO_CSM_GetFightSystem(void);
uint goIO_CSM_GetHandleSystem(void);
uint goIO_CSM_GetAttachmentSystem(void);
uint goIO_CSM_GetMoveSystem(void);
uint goIO_CSM_GetAnimSystem(void);
uint goIO_CSM_GetCreatureControls(void);
uint goIO_CSM_DerivedTweaks(void);
uint goIO_CSM_Update(uint);
uint goIO_CSM_EmitOrbs(dc_tOrbEmitter const *);
uint goIO_CSM_UpdateChest(void);
uint goIO_CSM_UpdateChestGFX(int);
uint goIO_CSM_HandleCollision(goCreature *,int);
uint goIO_CSM_Pause(void);
uint goIO_CSM_SendProgressEvent(float,float,float);
uint goIO_CSM_Destructor_goIO_CSM(void);
uint goIO_CSM_goIO_CSM(goClient *,dc_tCSM const *,int);
uint goIO_CSM_GrabState(void);
uint goIO_CSM_Unlock(void);
uint goIO_CSM_Init(dc_tCSM const *,int);
uint goIO_CSM_PlayAnim(uint);
uint goIO_CSM_Reset(uint);
uint goIO_CSM_UpdateVarsFromTweakers(void);
uint goIO_CSM___dl(void *);
uint goIO_CSM_Allocate(wadContext *);
uint goIO_CSM_sm_goIO_CSMMultiPool;
uint goIO_CSM_vtbl;


#endif
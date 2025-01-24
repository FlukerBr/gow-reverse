#ifndef GOIO_H
#define GOIO_H

#include "structs.h"


uint goIO_PushableWeight(void);
uint goIO_SetDamageInfo(float,VUVec4,uint,int);
uint goIO_GetRadius(void);
uint goIO_GetHeight(void);
uint goIO_GetMass(void);
uint goIO_GetEffectSystem(void);
uint goIO_GetFightSystem(void);
uint goIO_GetHandleSystem(void);
uint goIO_GetAttachmentSystem(void);
uint goIO_GetMoveSystem(void);
uint goIO_GetAnimSystem(void);
uint goIO_GetCreatureControls(void);
uint goIO_DerivedTweaks(void);
uint goIO_DoCrankMotion(uint,uint);
uint goIO_CrankProcessSound(float);
uint goIO_CrankProcessMotion(dc_tIO_tCrankMotionSet const *,float,float,float,int,int,int,int);
uint goIO_CrankGetChangesetAndTarget(float,float,int,int,dc_tIO_tCrankMotionSet const **,float *,int *);
uint goIO_CrankGetClosestStopPosition(float,float);
uint goIO_DoLeverMotion(void);
uint goIO_Update(uint);
uint goIO_Restore(void);
uint goIO_Unpause(void);
uint goIO_Pause(void);
uint goIO_HandlePushableSounds(uint,VUVec4);
uint goIO_HandlePushableParticles(VUVec4);
uint goIO_ModulateScrapeParticles(float);
uint goIO_DoPushableMotion(int *,VUVec4);
uint goIO_DoAttachedToMotion(void);
uint goIO_SendProgressEvent(float,float,float);
uint goIO_GetPushSpeed(int);
uint goIO_HandleWalkingSlidingFalling(VUVec4);
uint goIO_CheckPositionForIO(VUVec4 *,uint);
uint goIO_InTheWaterGroundChecks(VUVec4);
uint goIO_HandleFloatingAndUnderwater(VUVec4 *);
uint goIO_SetMode_Underwater(void);
uint goIO_SetMode_Floating(void);
uint goIO_SetMode_Sliding(void);
uint goIO_SetMode_OnGround(void);
uint goIO_SetMode_Falling(void);
uint goIO_Destructor_goIO(void);
uint goIO_goIO(goClient *,dc_tIO const *,int);
uint goIO_GrabState(void);
uint goIO_Unlock(float);
uint goIO_Disconnect(void);
uint goIO_Init(dc_tIO const *,int);
uint goIO_Reset(uint);
uint goIO_UpdateVarsFromTweakers(void);
uint goIO___dl(void *);
uint goIO_Allocate(wadContext *);
uint goIO_sm_goIOMultiPool;
uint goIO_vtbl;


#endif
#ifndef LIGHTNING_H
#define LIGHTNING_H

#include "structs.h"


uint Lightning_CreateBolt(int);
uint Lightning_DamageFromBolt_(LightningBolt *,goGameObject *,goHandle,ushort,float,float);
uint Lightning_Damage_(goGameObject *,float);
uint Lightning_DamageFromBolt(LightningBolt *,goCreature *,goHandle,ushort,float,float,int,uint);
uint Lightning_Damage(goCreature *,float,int,uint,dc_tImpulse const *);
uint Lightning_SCR_Lightning(goScript *);
uint Lightning_SCR_LightningDestructor(goScript *);
uint Lightning_GetLightningContext(void);
uint Lightning_AreResourcesAllocated(void);
uint Lightning_FreeResources(void);
uint Lightning_SetUnloadPending(int);
uint Lightning_sm_fVisualRadius;
uint Lightning_sm_fMashometer;
uint Lightning_sm_fCurrentTime;
uint Lightning_sm_iRightHandJointIdx;
uint Lightning_sm_iLeftHandJointIdx;
uint Lightning_sm_pVisualRadiusGO;
uint Lightning_sm_pHideGO;
uint Lightning_sm_pMainGO;
uint Lightning_sm_aAttachedEffects;
uint Lightning_sm_aBolts;
uint Lightning_sm_iRefCnt;
uint Lightning_sm_bUnloadPending;


#endif
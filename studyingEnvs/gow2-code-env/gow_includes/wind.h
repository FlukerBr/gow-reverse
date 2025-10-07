#ifndef WIND_H
#define WIND_H

#include "structs.h"


uint Wind_SCR_WindBlowHit(goScript *);
uint Wind_SCR_WindShowBow(goScript *);
uint Wind_SCR_WindShowBowDestructor(goScript *);
uint Wind_CreateChargeGust(VUMat4,goHandle);
uint Wind_SCR_ChargeGustUpdate(goScript *);
uint Wind_SCR_ChargeGustDestructor(goScript *);
uint Wind_CreateTornado(char const *,VUMat4,VUVec4,float,int,uint,float,float,float,float,float,tImpulse const *,goHandle,float,float);
uint Wind_SCR_TornadoUpdate(goScript *);
uint Wind_SCR_TornadoDestructor(goScript *);
uint Wind_SCR_WindGustPlayback(goScript *);
uint Wind_SCR_WindTrigger(goScript *);
uint Wind_SCR_WindTriggerDestructor(goScript *);
uint Wind_SCR_WindThrow(goScript *);
uint Wind_SCR_WindCharge(goScript *);
uint Wind_SCR_WindChargeDestructor(goScript *);
uint Wind_DetachFromHand(goGameObject *);
uint Wind_AttachToHand(goCreature *,goGameObject *,int);
uint Wind_GetHandJointIdx(goCreature *,int);
uint Wind_AreResourcesAllocated(void);
uint Wind_FreeResources(void);
uint Wind_AllocResources(void);
uint Wind_SetUnloadPending(int);
uint Wind_GetWindContext(void);
uint Wind_sm_fTimeSinceStart;
uint Wind_sm_aChargeGusts;
uint Wind_sm_aTornados;
uint Wind_sm_pChargeGustScript;
uint Wind_sm_pTornadoScript;
uint Wind_sm_iTriggerRefCnt;
uint Wind_sm_iTriggerCnt;
uint Wind_sm_iTriggerMod;
uint Wind_sm_iTriggerType;
uint Wind_sm_iBowRefCnt;
uint Wind_sm_iChargeRefCnt;
uint Wind_sm_iWindRefCnt;
uint Wind_sm_pChargeEffect;
uint Wind_sm_bUnloadPending;


#endif
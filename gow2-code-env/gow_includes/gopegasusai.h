#ifndef GOPEGASUSAI_H
#define GOPEGASUSAI_H

#include "structs.h"


uint goPegasusAI_CanAutoAim(void);
uint goPegasusAI_CanDoCombatMove(void);
uint goPegasusAI_SetDamageInfo(float,VUVec4,uint,int);
uint goPegasusAI_DerivedTweaks(void);
uint goPegasusAI_GetRadius(void);
uint goPegasusAI_GetHeight(void);
uint goPegasusAI_GetMass(void);
uint goPegasusAI_GetCreatureControls(void);
uint goPegasusAI_GetAttachmentSystem(void);
uint goPegasusAI_GetEffectSystem(void);
uint goPegasusAI_GetHandleSystem(void);
uint goPegasusAI_GetAnimSystem(void);
uint goPegasusAI_IsLockedOn(void);
uint goPegasusAI_SetFlightMode(void);
uint goPegasusAI_ClrSwarmMode(void);
uint goPegasusAI_SetSwarmMode(void);
uint goPegasusAI_SetLockedOnMode(void);
uint goPegasusAI_GetNavBranch(dc_tNavBankBase const *,int);
uint goPegasusAI_ClearPegasusLockedOn(void);
uint goPegasusAI_Update(uint);
uint goPegasusAI_RemoveCurrentAction(void);
uint goPegasusAI_UpdateAgressiveness(void);
uint goPegasusAI_ForceMove(uint,int);
uint goPegasusAI_UpdateSwarmMode(void);
uint goPegasusAI_GetSwarmRadius(void);
uint goPegasusAI_SwarmOrbit(float,float,VUVec4,VUVec4);
uint goPegasusAI_UpdatePatrolMode(void);
uint goPegasusAI_CanAttack(void);
uint goPegasusAI_InLockOnZone(void);
uint goPegasusAI_InPegasusCloseProx(void);
uint goPegasusAI_InLockedOnCloseProx(void);
uint goPegasusAI_EndOfPatrol(void);
uint goPegasusAI_PegasusCalcSteeringForce(void);
uint goPegasusAI_PegasusCalcLockedOnSteeringForce(void);
uint goPegasusAI_GetLockonPosition(void);
uint goPegasusAI_CalculateSteeringForArrival(VUVec4,VUVec4);
uint goPegasusAI_PegasusAISeparationCollision(void);
uint goPegasusAI_PegasusCreatureCallback(void);
uint goPegasusAI_PegasusAISheetCollision(void);
uint goPegasusAI_Reset(uint);
uint goPegasusAI_Init(goClient *,int,uint,signed char);
uint goPegasusAI_GetDamageMultiplier(int);
uint goPegasusAI_Recycle(void);
uint goPegasusAI_Destructor_goPegasusAI(void);
uint goPegasusAI_goPegasusAI(char const *);
uint goPegasusAI_goCreatureCollision_vtbl;
uint goPegasusAI_vtbl;
uint goPegasusAI_smAnimData;


#endif
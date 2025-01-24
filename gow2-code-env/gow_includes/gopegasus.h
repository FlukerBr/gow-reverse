#ifndef GOPEGASUS_H
#define GOPEGASUS_H

#include "structs.h"


uint goPegasus_SetBoostFalloff(void);
uint goPegasus_ClrBoostFalloff(void);
uint goPegasus_StartupReset(void);
uint goPegasus_WarpOtherPegasusElements(VUMat4,VUMat4);
uint goPegasus_GetLeadPoint(goAIWorldRep const *,float);
uint goPegasus_ClearLockOn(float);
uint goPegasus_SwitchTracks(uint,uint);
uint goPegasus_CalcSiteIndex(goAIWorldRep const *);
uint goPegasus_CalcArmature(camera_Client *,camera_TweenValues *,VUMat4 *);
uint goPegasus_CalcProjArmature(camera_Client *,camera_TweenValues *,VUMat4 *);
uint goPegasus_DoCameraShake(dc_tPegasusCameraShake const *);
uint goPegasus_CalcCamShake(float *,float *,float *,float *,dc_tPegasusCameraShake const *);
uint goPegasus_CalcFlutterMult(void);
uint goPegasus_CalcFOV(void);
uint goPegasus_DoTargeting(goHandle);
uint goPegasus_IsTargetInReticle(goCreature const *);
uint goPegasus_SelectTarget(void);
uint goPegasus_InsideSafeZoneLeftRight(VUVec4);
uint goPegasus_InsideSafeZone(VUVec4);
uint goPegasus_DrainBoost(float);
uint goPegasus_GetPegasus(void);
uint goPegasus_DoPegasusRideMotion(goCreature *);
uint goPegasus_UpdateRamTarget(sysPad *);
uint goPegasus_Run(void);
uint goPegasus_TestForCollision(VUMat4 const *,VUMat4 const *,VUMat4 const *);
uint goPegasus_UpdateTargetingShooting(sysPad *);
uint goPegasus_UpdateReticle(sysPad_ControlStick *);
uint goPegasus_UpdateCameraTarget(void);
uint goPegasus_UpdateNoTrackTimer(void);
uint goPegasus_UpdateLocalMovement(sysPad *,VUVec4);
uint goPegasus_ScaleControlsForSafeZone(goPegasus_PegasusLocalUpdateData *);
uint goPegasus_ScaleControlsForLockedOnEnemy(goPegasus_PegasusLocalUpdateData *);
uint goPegasus_PegasusLocalUpdateData_SetupLinkJointPos(goCreature *);
uint goPegasus_UpdateAnimSystem(void);
uint goPegasus_UpdateBoost(void);
uint goPegasus_Init(goClient *,short,short,uint);
uint goPegasus_ToggleTurbulance(void);
uint goPegasus_Recycle(void);
uint goPegasus_Reset(void);
uint goPegasus_SetLockedOnAI(goPegasusAI *);
uint goPegasus_GetLockedOnAI(void);
uint goPegasus_WindOff(void);
uint goPegasus_Destructor_goPegasus(void);
uint goPegasus_goPegasus(void);
uint goPegasus_sm_fLastCamFOVVal;
uint goPegasus_sm_vLastCamUp;
uint goPegasus_sm_vLastCamPos;
uint goPegasus_sm_hLockedOnAI;
uint goPegasus_vtbl;
uint goPegasus_goCreatureCollision_vtbl;
uint goPegasus_sm_bReticleHome;
uint goPegasus_sm_bTiltPegasus;


#endif
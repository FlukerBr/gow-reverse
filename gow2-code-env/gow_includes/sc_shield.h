#ifndef SC_SHIELD_H
#define SC_SHIELD_H

#include "structs.h"


uint SC_Shield_IsTrueShield(void);
uint SC_Shield_Destructor_SC_Shield(void);
uint SC_Shield_CShard_IsShardShield(void);
uint SC_Shield_CShard_CShard(void);
uint SC_Shield_SFocus_SFocus(void);
uint SC_Shield_ScriptInterface(goScript *);
uint SC_Shield_GetHandlePos(goHandle,int,VUVec4 *);
uint SC_Shield_RemoveRiderShield(goCreature *);
uint SC_Shield_DestroyScript(goScript *);
uint SC_Shield_RunScript(goScript *);
uint SC_Shield_ProcessDamage(float,int,VUVec4,float *);
uint SC_Shield_SetRoamingShard(SC_Shield_CShard *,int,float,float);
uint SC_Shield_ReleaseShardAndTarget(goCreature *);
uint SC_Shield_DestroyRainShard(SC_Shield_CShard *,float);
uint SC_Shield_CycleShard(SC_Shield_CShard *);
uint SC_Shield_DestroyShard(SC_Shield_CShard *);
uint SC_Shield_AttachShard(SC_Shield_CShard *,goHandle);
uint SC_Shield_AbsorbShard(SC_Shield_CShard *);
uint SC_Shield_ReleaseShard(void);
uint SC_Shield_AddShard(SC_Shield_CShard **);
uint SC_Shield_FindShardTarget(goCreature *,goHandle *);
uint SC_Shield_FindShardTargetCallback(void);
uint SC_Shield_GetRoamingPos(VUVec4,VUVec4,VUVec4,float,float,float,float,float);
uint SC_Shield_GetRandomGroundPos(VUVec4,float,float,float);
uint SC_Shield_DestroyResources(void);
uint SC_Shield_RemoveWadContext(wadContext *);
uint SC_Shield_Destroy(void);
uint SC_Shield_TransferShield(goCreature *,goCreature *);
uint SC_Shield_UpdateRiderShield(goCreature *,goCreature *);
uint SC_Shield_Update(float);
uint SC_Shield_Initialize(goHandle);
uint SC_Shield_CShard_Destroy(void);
uint SC_Shield_CShard_Teleport(VUVec4);
uint SC_Shield_CShard_Hide(int);
uint SC_Shield_CShard_Update(float);
uint SC_Shield_CShard_Initialize(SC_Shield *,SC_Shield_SFocus const *,float);
uint SC_Shield_CShard_ResetTweaks(void);
uint SC_Shield_CShard_ResetGameTweaks(void);
uint SC_Shield_CShard_SetMatrix(VUVec4 const *,VUVec4 const *,VUMat4 *);
uint SC_Shield_CShard_ProcessDamage(float,int,VUVec4,float *);
uint SC_Shield_CShard_NextOrbitModulation(float,float,VUVec4,VUVec4);
uint SC_Shield_CShard_NextDemodulation(float);
uint SC_Shield_CShard_BroadcastTargetAbandon(void);
uint SC_Shield_CShard_BroadcastTargetReach(void);
uint SC_Shield_CShard_ClrTarget(void);
uint SC_Shield___dl(void *);
uint SC_Shield_Allocate(wadContext *);
uint SC_Shield_s_pTargets;
uint SC_Shield_s_iTargetFilter;
uint SC_Shield_s_dwNbTargets;
uint SC_Shield_s_ShieldList;
uint SC_Shield_sm_SC_ShieldMultiPool;
uint SC_Shield_CShard_vtbl;
uint SC_Shield_vtbl;


#endif
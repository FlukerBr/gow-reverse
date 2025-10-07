#ifndef GOPASSIVE_H
#define GOPASSIVE_H

#include "structs.h"


uint goPassive_ResolveMovement(float);
uint goPassive_GetFreezeTimeLeft(float);
uint goPassive_GetFrozenRatio(void);
uint goPassive_IsFrozen(void);
uint goPassive_CanDoCombatMove(void);
uint goPassive_GetRadius(void);
uint goPassive_GetHeight(void);
uint goPassive_GetMass(void);
uint goPassive_GetEffectSystem(void);
uint goPassive_GetHandleSystem(void);
uint goPassive_GetAttachmentSystem(void);
uint goPassive_GetAnimSystem(void);
uint goPassive_GetCreatureControls(void);
uint goPassive_GetGOName(void);
uint goPassive_DerivedTweaks(void);
uint goPassive_ResolveMovement_Other(VUVec4,VUVec4,float);
uint goPassive_ResolveMovement_PhysicsDriven(VUVec4,VUVec4,float);
uint goPassive_ResolveMovement_CombatSystem(float);
uint goPassive_ResolveMovement_DoMotion(VUVec4,VUVec4,VUVec4,int *,float);
uint goPassive_SetMovement_Water(void);
uint goPassive_SetMovement_Sliding(void);
uint goPassive_SetMovement_OnGround_Landing(VUVec4);
uint goPassive_SetMovement_OnGround(int);
uint goPassive_SetMovement_Falling(void);
uint goPassive_HandleCollision_Complete(VUVec4,float);
uint goPassive_HandleCollision_World(VUVec4,int,int,int,float);
uint goPassive_HandleCollision_Water(VUVec4);
uint goPassive_GroundCheck_Water(VUVec4);
uint goPassive_UpdateSH_ProcessDamage(float);
uint goPassive_UpdateSH_ProcessFreezeBeam(void);
uint goPassive_UpdateSH_Dead(void);
uint goPassive_UpdateSH_Frozen(float);
uint goPassive_UpdateSH_PostProcess(void);
uint goPassive_BreakFrozenIncarnation(int);
uint goPassive_CreateFrozenIncarnation(void);
uint goPassive_GetNavBranch(dc_tNavBankBase const *,int);
uint goPassive_SetDamageInfo(float,VUVec4,uint,int);
uint goPassive_GetTargetingPos(int);
uint goPassive_Update(uint);
uint goPassive_Enable(void);
uint goPassive_Disable(void);
uint goPassive_Init(goClient *,dc_tCreature const *,uint);
uint goPassive_ResetStatue(void);
uint goPassive_Reset(uint);
uint goPassive_Destructor_goPassive(void);
uint goPassive_goPassive(goClient *,dc_tCreature const *);
uint goPassive_SetSaveData(uchar);
uint goPassive_RemoveWadContext(wadContext *);
uint goPassive_SetInstanceVariations(float,float,uint);
uint goPassive_UpdateVarsFromTweakers(void);
uint goPassive_SetTweaks(dc_tCreature const *);
uint goPassive___dl(void *);
uint goPassive_Allocate(wadContext *);
uint goPassive_sm_goPassiveMultiPool;
uint goPassive_vtbl;


#endif
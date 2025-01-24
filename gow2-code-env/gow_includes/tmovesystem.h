#ifndef TMOVESYSTEM_H
#define TMOVESYSTEM_H

#include "structs.h"


uint tMoveSystem_GetBlockMask(void);
uint tMoveSystem_GetCreature(void);
uint tMoveSystem_MoveTwk(void);
uint tMoveSystem_FindMove(uint);
uint tMoveSystem_FindBranchData(uint);
uint tMoveSystem_UpdateSlaveAnmClients(void);
uint tMoveSystem_IsDoingMoveWithScriptAction(char const *);
uint tMoveSystem_GetDamageMultiplier(void);
uint tMoveSystem_HasActiveCollision(int,float *);
uint tMoveSystem_DoCancelMoveByAnimName(uint);
uint tMoveSystem_DoCancelMove(tMove *);
uint tMoveSystem_DoCancelAllReplaceMoves(void);
uint tMoveSystem_DoCancelAllMoves(void);
uint tMoveSystem_EndMove(tMove *);
uint tMoveSystem_StartMove(tMove *,dc_tBranch const *,float);
uint tMoveSystem_DoBranchDecision(dc_tBranchDecision const *);
uint tMoveSystem_PushBranch(dc_tBranch const *,float);
uint tMoveSystem_SynchBranch(dc_tBranch const *);
uint tMoveSystem_BranchByMoveName(dc_tBranch const *,uint);
uint tMoveSystem_TriggerBranch_(dc_tBranch const *,int,float);
uint tMoveSystem_TriggerBranch(uint,int);
uint tMoveSystem_TriggerReactionBranches(int,goCreature *,int,int,int,dc_tMaterialFX const *);
uint tMoveSystem_TriggerRootBranches(sysPad const *);
uint tMoveSystem_CheckBranchCommon(tMove *,dc_tBranch const *,int *,int,uint,goCreature *,int,int,int,dc_tMaterialFX const *);
uint tMoveSystem_CheckBranchAgainstPad(tMove *,dc_tBranch const *,sysPad const *);
uint tMoveSystem_GetCreatureBranchMask(void);
uint tMoveSystem_GetTargetHealth(void);
uint tMoveSystem_GetTargetID(void);
uint tMoveSystem_GetTargetContext(void);
uint tMoveSystem_GetTargetCreature(void);
uint tMoveSystem_GetSynchCreature(void);
uint tMoveSystem_AutoAim(void);
uint tMoveSystem_CalcAutoAimDir(void);
uint tMoveSystem_GetSimilarScriptInstance(goScript *,uint);
uint tMoveSystem_DecScriptRefCnt(goScript *);
uint tMoveSystem_IncScriptRefCnt(goScript *);
uint tMoveSystem_Update(void);
uint tMoveSystem_AlignSynchJoints(void);
uint tMoveSystem_SetTrailStatus(int);
uint tMoveSystem_SetAttachmentStatus(int,int,int,int);
uint tMoveSystem_StaticUpdate(goScript *);
uint tMoveSystem_StaticInit(void);
uint tMoveSystem_Damage_(float,goCreature *,int,int,dc_tMaterialFX const *,VUVec4,uint,uint);
uint tMoveSystem_Damage(float,goCreature *,int,int,dc_tCollision const *,VUVec4,uint,uint);
uint tMoveSystem_HandleCollision(goGameObject *,AtrValue const *,ushort,goGameObject *,int,ushort,collisionOutput const *,int);
uint tMoveSystem_ApplyImpulse(VUVec4,dc_tImpulse const *);
uint tMoveSystem_CalcImpulse(VUVec4,dc_tImpulse const *);
uint tMoveSystem_DoCollisionReaction(uint,goCreature *,int,int,int,dc_tCollision const *,VUVec4);
uint tMoveSystem_ApplyHit(int,goGameObject *,tMoveSystem *,ushort,goGameObject *,goCreature *,tMoveSystem *,AtrValue const *,ushort,collisionOutput const *,dc_tCollision const *);
uint tMoveSystem_SetupSyncMove(tMoveSystem *);
uint tMoveSystem_QuickBlock(goGameObject *,dc_tMove const *,int,uint);
uint tMoveSystem_MoveCollisionCallback(void);
uint tMoveSystem_Reset(void);
uint tMoveSystem_Destructor_tMoveSystem(void);
uint tMoveSystem_tMoveSystem(goCreature *);
uint tMoveSystem___dl(void *);
uint tMoveSystem_Allocate(wadContext *);
uint tMoveSystem_sm_fSlowdownTimeScale;
uint tMoveSystem_sm_fSlowdownDuration;
uint tMoveSystem_sm_tMoveSystemMultiPool;
uint tMoveSystem_sm_pUpdateScript;


#endif
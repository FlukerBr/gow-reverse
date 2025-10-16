#ifndef TMOVESYSTEM_H
#define TMOVESYSTEM_H

#include "type.h"
#include "gocreature.h"
#include "collisionoutput.h"
#include "syspad.h"
#include "goscript.h"
#include "dcdefinitions.h"

typedef UINT32 QuickBlockTestBase;

typedef struct tMoveSystem_ {
    VUVec4 m_vCSMMovement;
    VUVec4 m_vCollisionResponse;
    VUVec4 m_vTargetPos;
    struct goCreature_ *m_pCreature;
    FLOAT m_fVelocityScale;
    FLOAT m_fVelocityScaleTarget;
    FLOAT m_fVelocityScaleTimeLeft;
    struct tCreature_ *m_pTweaks;
    struct tCombat_ *m_pMoveTweaks;
    QuickBlockTestBase *m_pQuickBlockCB;
    goHandle m_hTarget;
    goHandle m_hSynch;
    FLOAT m_fDamageTaken;
    FLOAT m_fTimer;
    FLOAT m_fTargetingDelay;
    FLOAT m_fTargetingDelayDist;
    FLOAT m_fTargetingDelayTimer;
    FLOAT m_fSinToTarget;
    FLOAT m_fAutoAimDamping;
    FLOAT m_fAutoAimDampingTarget;
    FLOAT m_fSynchDamping;
    UINT32 m_uSynchStartFrame;
    struct tSynchBranch_ m_SynchBranch;
    stdCList m_RefCntScriptList;
    stdCList m_MoveList;
    struct tMove__1_16070_ *m_pPrimaryMove;
    struct tBranchQue_ m_BranchQue;
    struct tBranchQueEntry_ m_aBranchQueMem[4];
} tMoveSystem;

void tMoveSystem_Allocate(tMoveSystem *,wadContext *);
void tMoveSystem___dl(tMoveSystem *,void *);
void tMoveSystem_tMoveSystem(tMoveSystem *,goCreature *);
void tMoveSystem_Destructor_tMoveSystem(tMoveSystem *);
void tMoveSystem_Reset(tMoveSystem *);
void tMoveSystem_MoveCollisionCallback(tMoveSystem *);
void tMoveSystem_QuickBlock(tMoveSystem *,goGameObject *,tMove__1_16070 *,ushort);
void tMoveSystem_QuickBlockProjectile(tMoveSystem *);
void tMoveSystem_SetupSyncMove(tMoveSystem *,tMoveSystem *);
void tMoveSystem_ApplyHit(tMoveSystem *,int,goGameObject *,tMoveSystem *,ushort,goGameObject *,goCreature *,tMoveSystem *,AtrValue *,ushort,collisionOutput *,tCollision *);
void tMoveSystem_DoCollisionReaction(tMoveSystem *,uint,goCreature *,int,int,int,tCollision *,VUVec4);
void tMoveSystem_CalcImpulse(tMoveSystem *,VUVec4,tImpulse *);
void tMoveSystem_ApplyImpulse(tMoveSystem *,VUVec4,tImpulse *);
void tMoveSystem_HandleCollision(tMoveSystem *,goGameObject *,AtrValue *,ushort,goGameObject *,int,ushort,collisionOutput *);
void tMoveSystem_Damage(tMoveSystem *,float,goCreature *,int,int,tCollision *,VUVec4,uint,uint);
void tMoveSystem_Damage(tMoveSystem *,float,goCreature *,int,int,tMaterialFX *,VUVec4,uint,uint);
void tMoveSystem_StaticInit(tMoveSystem *);
void tMoveSystem_StaticUpdate(tMoveSystem *,goScript *);
void tMoveSystem_SetAttachmentStatus(tMoveSystem *,int,int,int,int);
void tMoveSystem_AlignSynchJoints(tMoveSystem *);
void tMoveSystem_Update(tMoveSystem *);
void tMoveSystem_IncScriptRefCnt(tMoveSystem *,goScript *);
void tMoveSystem_DecScriptRefCnt(tMoveSystem *,goScript *);
void tMoveSystem_GetSimilarScriptInstance(tMoveSystem *,goScript *,uint);
void tMoveSystem_CalcAutoAimDir(tMoveSystem *);
void tMoveSystem_AutoAim(tMoveSystem *);
void tMoveSystem_GetSynchCreature(tMoveSystem *);
void tMoveSystem_GetTargetCreature(tMoveSystem *);
void tMoveSystem_GetTargetContext(tMoveSystem *);
void tMoveSystem_GetTargetID(tMoveSystem *);
void tMoveSystem_GetTargetHealth(tMoveSystem *);
void tMoveSystem_GetCreatureBranchMask(tMoveSystem *);
void tMoveSystem_CheckBranchAgainstPad(tMoveSystem *,tMove__1_5844 *,tBranch *,sysPad *);
void tMoveSystem_CheckBranchCommon(tMoveSystem *,tMove__1_5844 *,tBranch *,int *,int,uint,goCreature *,int,int,int,tMaterialFX *);
void tMoveSystem_TriggerRootBranches(tMoveSystem *,sysPad *);
void tMoveSystem_TriggerReactionBranches(tMoveSystem *,int,goCreature *,int,int,int,tMaterialFX *);
void tMoveSystem_TriggerBranch(tMoveSystem *,uint,int);
void tMoveSystem_TriggerBranch(tMoveSystem *,tBranch *,int);
void tMoveSystem_SynchBranch(tMoveSystem *,tBranch *);
void tMoveSystem_PushBranch(tMoveSystem *,tBranch *,float);
void tMoveSystem_StartMove(tMoveSystem *,tMove__1_5844 *,tBranch *,int);
void tMoveSystem_EndMove(tMoveSystem *,tMove__1_5844 *);
void tMoveSystem_DoCancelAllMoves(tMoveSystem *);
void tMoveSystem_DoCancelMove(tMoveSystem *,tMove__1_5844 *);
void tMoveSystem_HasActiveCollision(tMoveSystem *,int,float *);
void tMoveSystem_GetDamageMultiplier(tMoveSystem *);
void tMoveSystem_IsDoingMoveWithScriptAction(tMoveSystem *,char *);
void tMoveSystem_FindBranch(tMoveSystem *,uint);
void tMoveSystem_MoveTwk(tMoveSystem *);
void tMoveSystem_GetCreature(tMoveSystem *);


extern UINT32 tMoveSystem_sm_pUpdateScript;
extern UINT32 tMoveSystem_sm_tMoveSystemMultiPool;
extern UINT32 tMoveSystem_sm_fSlowdownDuration;
extern UINT32 tMoveSystem_sm_fSlowdownTimeScale;

#endif





#ifndef TEMPLATE
#define TEMPLATE

#include "type.h"
#include "gocreature.h"
#include "vtbl.h"
#include "goclient.h"
#include "gohandledb.h"

typedef __vtbl_ptr_type  goSoldier__vtable;
typedef UINT32  tSoldierNavCaps;
typedef UINT32  tCreatureControls;
typedef UINT32  tSoldier;
typedef UINT32  tAnimSystem;
typedef UINT32  tFlyingSystem;
typedef UINT32  tIOSystem;
typedef UINT32  tGrappleSystem;
typedef UINT32  SDecalContext;
typedef UINT32  tSys;
typedef UINT32  tEffectSystem;
typedef UINT32  AtrValue;
typedef UINT32  dc_tNavBank;
typedef UINT32  stdStack;



typedef struct goSoldier {
    goGameObject *m_pGameObject; /* Inherited from goBase */
    goSoldier__vtable *__vtable; /* Inherited from goBase */
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    VUMat4 m_mInitialPosition; /* Inherited from goCreature */
    VUMat4 m_mMotion; /* Inherited from goCreature */
    VUMat4 m_mPhysical; /* Inherited from goCreature */
    VUVec4 m_vPhysicalPosForCamera; /* Inherited from goCreature */
    VUVec4 m_vVelocity; /* Inherited from goCreature */
    VUVec4 m_vImpulse; /* Inherited from goCreature */
    VUVec4 m_vLastMovement; /* Inherited from goCreature */
    VUVec4 m_vLastPosition; /* Inherited from goCreature */
    tCollisionBox m_NavCollision; /* Inherited from goCreature */
    tPhysicalDamping m_PhysDamp; /* Inherited from goCreature */
    FLOAT m_fMaxSpeed; /* Inherited from goCreature */
    FLOAT m_fScale; /* Inherited from goCreature */
    FLOAT m_fTimeScale; /* Inherited from goCreature */
    UINT32 m_uMotionStateFlags; /* Inherited from goCreature */
    UINT32 m_uInfoStateFlags; /* Inherited from goCreature */
    FLOAT m_fHitPoints; /* Inherited from goCreature */
    FLOAT m_fMaxHitPoints; /* Inherited from goCreature */
    FLOAT m_fFreezeSpeed; /* Inherited from goCreature */
    FLOAT m_fRampHitPoints; /* Inherited from goCreature */
    goCreature *m_pChildCreature; /* Inherited from goCreature */
    goCreature *m_pParentCreature; /* Inherited from goCreature */
    INT32 m_iAttachedToJointID; /* Inherited from goCreature */
    UINT32 m_uAttachmentType; /* Inherited from goCreature */
    FLOAT m_fTimeSinceLastVisible; /* Inherited from goCreature */
    FLOAT m_fTimeSinceLastAttacked; /* Inherited from goCreature */
    UINT32 m_CameraTargets; /* Inherited from goCreature */
    Emitter *m_pSndEmitter; /* Inherited from goCreature */
    Emitter *m_pLoopSndEmitter; /* Inherited from goCreature */
    renModel *m_pModel; /* Inherited from goCreature */
    renShadowClient *m_pShadow; /* Inherited from goCreature */
    goCreatureController *m_pCreatureController; /* Inherited from goCreature */
    goHandle m_hMountCreature; /* Inherited from goCreature */
    goHandle m_hRiderCreature; /* Inherited from goCreature */
    wadContext *m_pGOParmWadContext; /* Inherited from goCreature */
    tMoveSystem *m_pMoveSystem; /* Inherited from goCreature */
    tFightSystem *m_pFightSystem; /* Inherited from goCreature */
    CShield *m_pShield; /* Inherited from goCreature */
    goGameObject *m_pCircleGO; /* Inherited from goCreature */
    FLOAT m_fCircleSoundDelay; /* Inherited from goCreature */
    tCreature *m_pCTweaks; /* Inherited from goCreature */
    wadContext *m_pCTweaksContext; /* Inherited from goCreature */
    VUMat4 m_mMovingPlatform; /* Inherited from goCreatureCollision */
    VUVec4 m_vMovingPlatformOffset; /* Inherited from goCreatureCollision */
    VUVec4 m_vGroundNormal; /* Inherited from goCreatureCollision */
    VUVec4 m_vWallNormal; /* Inherited from goCreatureCollision */
    FLOAT m_fWaterLevel; /* Inherited from goCreatureCollision */
    AtrValue *m_pGroundATR; /* Inherited from goCreatureCollision */
    AtrValue *m_pWallATR; /* Inherited from goCreatureCollision */
    AtrValue *m_pWaterATR; /* Inherited from goCreatureCollision */
    wadContext *m_pGroundWC; /* Inherited from goCreatureCollision */
    wadContext *m_pWallWC; /* Inherited from goCreatureCollision */
    wadContext *m_pWaterWC; /* Inherited from goCreatureCollision */
    goGameObject *m_pGroundGO; /* Inherited from goCreatureCollision */
    UINT32 m_uGroundGOJointID; /* Inherited from goCreatureCollision */
    UINT32 m_uNoCollisionType; /* Inherited from goCreatureCollision */
    UINT32 m_uIgnoreSheetBits; /* Inherited from goCreatureCollision */
    undefined field66_0x27c;
    undefined field67_0x27d;
    undefined field68_0x27e;
    undefined field69_0x27f;
    VUVec4 m_vCurrentSpeed;
    VUVec4 m_vDamageDir;
    FLOAT m_fDamagePoints;
    UINT32 m_uDamageMaterialFX;
    FLOAT m_fFreezeResistance;
    FLOAT m_fMaxFreezeResistance;
    goHandle m_RopeHandle;
    FLOAT m_fRopeRelativePos;
    FLOAT m_fRopeForce;
    INT32 m_iRopeWeightIdx;
    FLOAT m_fNoCombatTimer;
    FLOAT m_fNoClimbTimer;
    FLOAT m_fWallHangTimer;
    FLOAT m_fNoHangTargetsTimer;
    FLOAT m_fIgnoreMotionTimer;
    FLOAT m_fNoDamageTimer;
    FLOAT m_fLandTimer;
    FLOAT m_fGeneralTimer;
    FLOAT m_fTurnDampingAirFactor;
    FLOAT m_fTurnDampingAirTweenTime;
    FLOAT m_fLean;
    FLOAT m_fWorkU;
    FLOAT m_fDivingDashSpeed;
    FLOAT m_fNoPhysicsU;
    FLOAT m_fNoPhysicsV;
    FLOAT m_fNoPhysicsAddU;
    FLOAT m_fNoPhysicsAddV;
    UINT32 m_uSoldierModeFlags;
    UINT32 m_uSoldierInfoFlags;
    tSoldierNavCaps m_Caps;
    tCreatureControls m_pCreatureControls;
    tSoldier *m_pTweaks;
    tAnimSystem *m_pAnimSystem;
    tFlyingSystem *m_pFlyingSystem;
    tIOSystem *m_pIOSystem;
    tGrappleSystem *m_pGrappleSystem;
    SDecalContext *m_pDecalContext;
    tSys *m_pAttachments;
    tEffectSystem *m_pEffectSystem;
    goGameObject *m_pFrozenStatue;
    short int m_iIKJoint[2];
    float m_fIKWeight[2];
    INT16 m_iTargetingJointIdx;
    INT16 m_iHeadTrackJointIdx;
    FLOAT m_fHeadTrackAmount;
    FLOAT m_fHeadTrackTargetAmount;
    FLOAT m_fQuicksandDepth;
    FLOAT m_fDriftTimer;
    FLOAT m_fDriftingLean;
    UINT8 m_iSaveData;
    UINT8 m_iTrapBloodCounter;
    undefined field121_0x39a;
    undefined field122_0x39b;
    undefined field123_0x39c;
    undefined field124_0x39d;
    undefined field125_0x39e;
    undefined field126_0x39f;
    VUMat4 m_mLightFrameMtx;
    FLOAT m_fLightFrameSpeed;
    FLOAT m_fLightFrameForceAnimPos;
    FLOAT m_fLightFrameU;
    FLOAT m_fLightFrameV;
} goSoldier;

extern void goSoldier_HandleBalanceWalk(goSoldier *);
extern void goSoldier_BalanceGroundChecks(goSoldier *, VUVec4,float);
extern void goSoldier_SetMode_HaveAttached(goSoldier *, goCreature *,VUVec4,VUVec4,int,int);
extern void goSoldier_SetMode_OnGround_HaveAttached(goSoldier *);
extern void goSoldier_FindIOCreature(goSoldier *);
extern void goSoldier_HandleInteractiveObjects(goSoldier *, VUVec4);
extern void goSoldier_DoHaveAttachedMotion(goSoldier *, VUVec4,VUVec4,float);
extern void goSoldier_DoAttachedToMotion(goSoldier *, VUVec4,float);
extern void goSoldier_AttachToRope(goSoldier *, goHandle,float);
extern void goSoldier_DetachFromRope(goSoldier *, int);
extern void goSoldier_UpdateRope(goSoldier *);
extern void goSoldier_SetMode_OnARope(goSoldier *);
extern void goSoldier_ResolvePhysicalOrientationOnARope(goSoldier *, VUVec4,float);
extern void goSoldier_HandleJumpingOnARope(goSoldier *, VUVec4,VUVec4,float);
extern void goSoldier_HandleWalkingSlidingFalling_OnARope(goSoldier *, VUVec4,float);
extern void goSoldier_HandleHangTargets(goSoldier *, uint);
extern void goSoldier_DoOnARopeMotion(goSoldier *, VUVec4,VUVec4,VUVec4,float);
extern void goSoldier_SetMode_Climbing(goSoldier *, int);
extern void goSoldier_SetMode_WallHang(goSoldier *);
extern void goSoldier_HandleJumpingFacingAWall(goSoldier *, float);
extern void goSoldier_HandleClimbingAndWallHang(goSoldier *, VUVec4,VUVec4,float);
extern void goSoldier_ClimbingGroundChecks(goSoldier *, VUVec4,int);
extern void goSoldier_DoWallMotion(goSoldier *, VUVec4,VUVec4,VUVec4,float);
extern void goSoldier_DoWallAnimation(goSoldier *, float,float *,float *,float *,float *);
extern void goSoldier_DetachFromWall(goSoldier *);
extern void goSoldier_SetMode_Floating(goSoldier *);
extern void goSoldier_SetMode_Underwater(goSoldier *);
extern void goSoldier_SetMode_Diving(goSoldier *);
extern void goSoldier_SetMode_DiveIntoWater(goSoldier *, float);
extern void goSoldier_CheckForDiveIntoWater(goSoldier *, VUVec4,float,float);
extern void goSoldier_ResolvePhysicalOrientationInWater(goSoldier *, VUVec4,float);
extern void goSoldier_HandleSwimmingAndDiving(goSoldier *, VUVec4,float);
extern void goSoldier_InTheWaterGroundChecks(goSoldier *, VUVec4);
extern void goSoldier_DivingChecks(goSoldier *, VUVec4,float);
extern void goSoldier_DoInTheWaterMotion(goSoldier *, VUVec4,VUVec4,float);
extern void goSoldier_HandleWaterSurfaceCollisionOnly(goSoldier *, VUVec4);
extern void goSoldier_SetMode_Flying(goSoldier *);
extern void goSoldier_DebugFlying(goSoldier *);
extern void goSoldier_FlyingGroundChecks(goSoldier *, VUVec4);
extern void goSoldier_ConvertPORToGrapple(goSoldier *, VUVec4,VUVec4);
extern void goSoldier_ConvertGrappleToPOR(goSoldier *, VUVec4,VUVec4);
extern void goSoldier_DoGrappleMotion(goSoldier *, VUVec4,VUVec4,float);
extern void goSoldier_InitGrappleMotion(goSoldier *);
extern void goSoldier_ResolvePhysicalOrientationDuringGrapple(goSoldier *, VUVec4,float);
extern void goSoldier_SetMode_Grapple(goSoldier *);
extern void goSoldier_HandleJumpingDuringGrapple(goSoldier *, VUVec4,VUVec4);
extern void goSoldier_SetMode_OnGround_InQuicksand(goSoldier *);
extern void goSoldier_HandleWalkingInQuicksand(goSoldier *, VUVec4,float);
extern void goSoldier_DoQuicksandMotion(goSoldier *, VUVec4,VUVec4,VUVec4,float);
extern void goSoldier_HandleQuicksand(goSoldier *);
extern void goSoldier_SetMode_Drifting(goSoldier *);
extern void goSoldier_CancelDriftWings(goSoldier *);
extern void goSoldier_HandleDrifting(goSoldier *, float);
extern void goSoldier_DoDriftingMotion(goSoldier *, VUVec4,VUVec4,VUVec4,float);
extern void goSoldier_Allocate(goSoldier *, wadContext *);
extern void goSoldier___dl(goSoldier * *);
extern void goSoldier_SetNavCollision(goSoldier *);
extern void goSoldier_SetDynamicNavCollision(goSoldier *);
extern void goSoldier_UpdateVarsFromTweakers(goSoldier *);
extern void goSoldier_SetInstanceVariations(goSoldier *, float,float,uint);
extern void goSoldier_ResetStatue(goSoldier *);
extern void goSoldier_RunLightSoldier(goSoldier *);
extern void goSoldier_ResetLightSoldier(goSoldier *);
extern void goSoldier_Reset(goSoldier *, uint);
extern void goSoldier_RemoveWadContext(goSoldier *, wadContext *);
extern void goSoldier_Warp(goSoldier *, VUMat4 const *);
extern void goSoldier_SetAttachmentSaveData(goSoldier *, int);
extern void goSoldier_SetCircleSaveData(goSoldier *, int);
extern void goSoldier_SetSaveData(goSoldier *, uchar);
extern void goSoldier_Init(goSoldier *, tCreature const *,tEffectSystem *);
extern void goSoldier_goSoldier(goSoldier *, goClient *,tCreature const *,tEffectSystem *,int);
extern void goSoldier_DestroyFightSystem(goSoldier *);
extern void goSoldier_Disable(goSoldier *);
extern void goSoldier_Enable(goSoldier *);
extern void goSoldier_Destructor_goSoldier(goSoldier *);
extern void goSoldier_GetTargetingPos(goSoldier *, int);
extern void goSoldier_HeadTrack(goSoldier *);
extern void goSoldier_UpdateTimeScale(goSoldier *);
extern void goSoldier_CreateFrozenIncarnation(goSoldier *);
extern void goSoldier_BreakFrozenIncarnation(goSoldier *, int);
extern void goSoldier_UpdateFreezing(goSoldier *);
extern void goSoldier_UpdateImpulse(goSoldier *, float);
extern void goSoldier_SetMode_Falling(goSoldier *, uint,float);
extern void goSoldier_SetMode_OnGround(goSoldier *);
extern void goSoldier_SetMode_OnGround_Landing(goSoldier *, VUVec4);
extern void goSoldier_SetMode_OnGround_Landing(goSoldier *);
extern void goSoldier_SetMode_OnCeiling(goSoldier *);
extern void goSoldier_SetMode_Sliding(goSoldier *);
extern void goSoldier_SetMode_Jumping(goSoldier *);
extern void goSoldier_SetMode_DoubleJumping(goSoldier *);
extern void goSoldier_Do180Flip(goSoldier *);
extern void goSoldier_HandleJumping(goSoldier *, float);
extern void goSoldier_HandleCollisionOnly(goSoldier *, VUVec4,int,int,int,float);
extern void goSoldier_HandleWalkingSlidingFalling(goSoldier *, VUVec4,float);
extern void goSoldier_HandleTrapDamage(goSoldier *, float);
extern void goSoldier_DoStrafeMotion(goSoldier *, VUVec4,VUVec4,VUVec4,int *,float);
extern void goSoldier_DoNormalMotion(goSoldier *, VUVec4,VUVec4,VUVec4,int,int *,float);
extern void goSoldier_Update(goSoldier *, uint);
extern void goSoldier_PostSoldierUpdate(goSoldier *);
extern void goSoldier_UpdateDead(goSoldier *);
extern void goSoldier_InitFeetIK(goSoldier *, char const *,int);
extern void goSoldier_DoFeetIK(goSoldier *, VUVec4);
extern void goSoldier_SetDamageInfo(goSoldier *, float,VUVec4,uint,int);
extern void goSoldier_SetTweaks(goSoldier *, tCreature const *);
extern void goSoldier_GetNavBranch(goSoldier *, dc_tNavBank const *,int);
extern void goSoldier_GetNavBranch(goSoldier *, stdStack const *,int);
extern void goSoldier_GetFirstNavBankMotionP(goSoldier *);
extern void goSoldier_DefyLightning(goSoldier *);
extern void goSoldier_DerivedTweaks(goSoldier *);
extern void goSoldier_CanDoCombatMove(goSoldier *);
extern void goSoldier_GetCreatureControls(goSoldier *);
extern void goSoldier_GetAnimSystem(goSoldier *);
extern void goSoldier_GetAttachmentSystem(goSoldier *);
extern void goSoldier_GetHandleSystem(goSoldier *);
extern void goSoldier_GetEffectSystem(goSoldier *);
extern void goSoldier_GetMass(goSoldier *);
extern void goSoldier_GetHeight(goSoldier *);
extern void goSoldier_GetRadius(goSoldier *);
extern void goSoldier_GetFrozenRatio(goSoldier *);
extern void goSoldier_IsFrozen(goSoldier *);
extern void goSoldier_GetGOName(goSoldier *);
extern void goSoldier_GetRope(goSoldier *);
extern void goSoldier_SetImpulse(goSoldier *, VUVec4);
extern void goSoldier_UsingAnimDrivenMotion(goSoldier *);
extern void goSoldier_GetFreezeTimeLeft(goSoldier *, float);
extern void goSoldier_IsFreezable(goSoldier *);
extern void goSoldier_SetFreezeResistance(goSoldier *, float);

extern UINT32 goSoldier_s_wLightFrameEvenCount;
extern UINT32 goSoldier_s_wLightFrameOddCount;
extern UINT32 goSoldier_vtbl;
extern UINT32 goSoldier_sm_goSoldierMultiPool;

#endif
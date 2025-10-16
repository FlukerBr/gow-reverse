#ifndef GOSOLDIER_H
#define GOSOLDIER_H

#include "stdint.h"

#include "stdint.h"
#include "std.h"
#include "vu.h"
#include "gogameobject.h"
#include "temp.h"
#include "gocreature.h"

#define UNKNOWN_TYPE uint32_t
#define Emitter UNKNOWN_TYPE
#define renModel UNKNOWN_TYPE
#define renShadowClient UNKNOWN_TYPE
#define goCreatureController UNKNOWN_TYPE
#define goHandle UNKNOWN_TYPE
#define wadContext UNKNOWN_TYPE
#define tMoveSystem UNKNOWN_TYPE
#define tFightSystem UNKNOWN_TYPE
#define Cshield UNKNOWN_TYPE
#define tCreature UNKNOWN_TYPE
#define AtrValue UNKNOWN_TYPE
#define tSoldier UNKNOWN_TYPE
#define tAnimSystem UNKNOWN_TYPE
#define tFlyingSystem UNKNOWN_TYPE
#define tIOSystem UNKNOWN_TYPE
#define tGrapplesystem UNKNOWN_TYPE
#define SDecalContext UNKNOWN_TYPE
#define tSys UNKNOWN_TYPE
#define tEffectSystem UNKNOWN_TYPE


typedef struct _gosoldier
{
    goGameObject *m_pGameObject;
    _vtbl_ptr_type vf15330;
    VUMat4 m_mInitialPosition;
    VUMat4 m_mMotion;
    VUMat4 m_mPhysical;
    VUVec4 m_vPhysicalPosForCamera;
    VUVec4 m_vVelocity;
    VUVec4 m_vImpulse;
    VUVec4 m_vLastMovement;
    VUVec4 m_vLastPosition;
    tCollisionBox m_NavCollision;
    blank _blank[2]; // blank
    tPhysicalDamping m_PhysDamp;
    float m_fMaxSpeed;
    float m_fScale;
    float m_fTimeScale;
    uint32_t m_uMotionStateFlags;
    uint32_t m_uInfoStateFlags;
    float m_fHitPoints;
    float m_fMaxHitPoints;
    float m_fFreezeSpeed;
    float m_fRampHitPoints;
    struct _goCreature *m_pChildCreature;
    struct _goCreature *m_pParentCreature;
    int m_iAttachedToJointID;
    uint32_t m_uAttachmentType;
    float m_fTimeSinceLastVisible;
    float m_fTimeSinceLastAttacked;
    uint32_t m_CameraTargets;
    Emitter *m_pSndEmitter;
    Emitter *m_pLoopSndEmitter;
    renModel *m_pModel;
    renShadowClient *m_pShadow;
    goCreatureController *m_pCreatureController;
    goHandle m_hMountCreature;
    goHandle m_hRiderCreature;
    wadContext *m_pGOParmWadContext;
    tMoveSystem *m_pMoveSystem;
    tFightSystem *m_pFightSystem;
    Cshield *m_pShield;
    goGameObject *m_pCircleGO;
    float m_fCircleSoundDelay;
    tCreature *m_pCTweaks;
    wadContext *m_pCTweaksContext;
    // end gocreature
    VUMat4 m_mMovingPlatform;
    VUVec4 m_vMovingPlatformOffset;
    VUVec4 m_vGroundNormal;
    VUVec4 m_vWallNormal;
    float m_fWaterLevel;
    AtrValue *m_pGroundATR;
    AtrValue *m_pWallATR;
    AtrValue *m_pWaterATR;
    wadContext *m_pGroundWC;
    wadContext *m_pWallWC;
    wadContext *m_pWaterWC;
    goGameObject *m_pGroundGO;
    uint32_t m_uGroundGOJointID;
    uint32_t m_uNoCollisionType;
    uint32_t m_uIgnoreSheetBits[2];
    VUVec4 m_vCurrentSpeed;
    VUVec4 m_vDamageDir;
    float m_fDamagePoints;
    uint32_t m_uDamageMaterialFX;
    float m_fFreezeResistance;
    float m_fMaxFreezeResistance;
    goHandle m_RopeHandle;
    float m_fRopeRelativePos;
    float m_fRopeForce;
    int m_iRopeweightIdx;
    float m_fNoCombatTimer;
    float m_fNoClimbTimer;
    float m_fwallHangTimer;
    float m_fNoHangTargetsTimer;
    float m_fIgnoreMotionTimer;
    float m_fNoDamageTimer;
    float m_fLandTimer;
    float m_fGeneralTimer;
    float m_fTurnDampingAirFactor;
    float m_fTurnDampingAirTweenTime;
    float m_fLean;
    float m_fWorkU;
    float m_fDivingDashSpeed;
    float m_fNoPhysicsU;
    float m_fNoPhysicsV;
    float m_fNoPhysicsAddu;
    float m_fNoPhysicsAddv;
    uint32_t m_uSoldierModeFlags;
    uint32_t m_uSoldierInfoFlags;
    tSoldierNavCaps m_Caps;
    tCreatureControls m_pCreaturecontrols;
    blank __blank[2];
    tSoldier* m_pTweaks;
    tAnimSystem* m_pAnimSystem;
    tFlyingSystem* m_pFlyingSystem;
    tIOSystem* m_pIOSystem;
    tGrapplesystem* m_pGrapplesystem;
    SDecalContext* m_pDecalContext;
    tSys* m_pAttachments;
    tEffectSystem* m_pEffectSystem;
    goGameObject* m_pFrozenStatue;
    short int m_iIKJoint[2];
    float m_FIKWeight[2];
    int16_t m_iTargetingJointIdx;
    int16_t m_iHeadTrackJointIdx;
    float m_fHeadTrackAmount;
    float m_fHeadTrackTargetAmount;
    float m_fQuicksandDepth;
    float m_fDriftTimer;
    float m_fDriftingLean;
    uint8_t m_iSaveData;
    uint8_t m_iTrapBloodCounter;
    VUMat4 m_mLightFrameMtx;
    float m_fLightFrameSpeed;
    float m_fLightFrameForceAnimPos;
    float m_fLightFrameU;
    float m_fLightFramev;
} goSoldier; //0x3EC


extern void (*goSoldier_HandleBalanceWalk)(void);
extern void (*goSoldier_BalanceGroundChecks)(VUVec4,float);
extern void (*goSoldier_SetMode_HaveAttached)(goCreature *,VUVec4,VUVec4,int,int);
extern void (*goSoldier_SetMode_OnGround_HaveAttached)(void);
extern void (*goSoldier_FindIOCreature)(void);
extern void (*goSoldier_HandleInteractiveObjects)(VUVec4);
extern void (*goSoldier_DoHaveAttachedMotion)(VUVec4,VUVec4,float);
extern void (*goSoldier_DoAttachedToMotion)(VUVec4,float);
extern void (*goSoldier_AttachToRope)(goHandle,float);
extern void (*goSoldier_DetachFromRope)(int);
extern void (*goSoldier_UpdateRope)(void);
extern void (*goSoldier_SetMode_OnARope)(void);
extern void (*goSoldier_ResolvePhysicalOrientationOnARope)(VUVec4,float);
extern void (*goSoldier_HandleJumpingOnARope)(VUVec4,VUVec4,float);
extern void (*goSoldier_HandleWalkingSlidingFalling_OnARope)(VUVec4,float);
extern void (*goSoldier_HandleHangTargets)(uint32_t);
extern void (*goSoldier_DoOnARopeMotion)(VUVec4,VUVec4,VUVec4,float);
extern void (*goSoldier_SetMode_Climbing)(int);
extern void (*goSoldier_SetMode_WallHang)(void);
extern void (*goSoldier_HandleJumpingFacingAWall)(float);
extern void (*goSoldier_HandleClimbingAndWallHang)(VUVec4,VUVec4,float);
extern void (*goSoldier_ClimbingGroundChecks)(VUVec4,int);
extern void (*goSoldier_DoWallMotion)(VUVec4,VUVec4,VUVec4,float);
extern void (*goSoldier_DoWallAnimation)(float,float *,float *,float *,float *);
extern void (*goSoldier_DetachFromWall)(void);
extern void (*goSoldier_SetMode_Floating)(void);
extern void (*goSoldier_SetMode_Underwater)(void);
extern void (*goSoldier_SetMode_Diving)(void);
extern void (*goSoldier_SetMode_DiveIntoWater)(float);
extern void (*goSoldier_CheckForDiveIntoWater)(VUVec4,float,float);
extern void (*goSoldier_ResolvePhysicalOrientationInWater)(VUVec4,float);
extern void (*goSoldier_HandleSwimmingAndDiving)(VUVec4,float);
extern void (*goSoldier_InTheWaterGroundChecks)(VUVec4);
extern void (*goSoldier_DivingChecks)(VUVec4,float);
extern void (*goSoldier_DoInTheWaterMotion)(VUVec4,VUVec4,float);
extern void (*goSoldier_HandleWaterSurfaceCollisionOnly)(VUVec4);
extern void (*goSoldier_SetMode_Flying)(void);
extern void (*goSoldier_DebugFlying)(void);
extern void (*goSoldier_FlyingGroundChecks)(VUVec4);
extern void (*goSoldier_ConvertPORToGrapple)(VUVec4,VUVec4);
extern void (*goSoldier_ConvertGrappleToPOR)(VUVec4,VUVec4);
extern void (*goSoldier_DoGrappleMotion)(VUVec4,VUVec4,float);
extern void (*goSoldier_InitGrappleMotion)(void);
extern void (*goSoldier_ResolvePhysicalOrientationDuringGrapple)(VUVec4,float);
extern void (*goSoldier_SetMode_Grapple)(void);
extern void (*goSoldier_HandleJumpingDuringGrapple)(VUVec4,VUVec4);
extern void (*goSoldier_SetMode_OnGround_InQuicksand)(void);
extern void (*goSoldier_HandleWalkingInQuicksand)(VUVec4,float);
extern void (*goSoldier_DoQuicksandMotion)(VUVec4,VUVec4,VUVec4,float);
extern void (*goSoldier_HandleQuicksand)(void);
extern void (*goSoldier_SetMode_Drifting)(void);
extern void (*goSoldier_CancelDriftWings)(void);
extern void (*goSoldier_HandleDrifting)(float);
extern void (*goSoldier_DoDriftingMotion)(VUVec4,VUVec4,VUVec4,float);
extern void (*goSoldier_Allocate)(wadContext *);
extern void (*goSoldier___dl)(void *);
extern void (*goSoldier_SetNavCollision)(void);
extern void (*goSoldier_SetDynamicNavCollision)(void);
extern void (*goSoldier_UpdateVarsFromTweakers)(void);
extern void (*goSoldier_SetInstanceVariations)(float,float,uint32_t);
extern void (*goSoldier_ResetStatue)(void);
extern void (*goSoldier_RunLightSoldier)(void);
extern void (*goSoldier_ResetLightSoldier)(void);
extern void (*goSoldier_Reset)(uint32_t);
extern void (*goSoldier_RemoveWadContext)(wadContext *);
extern void (*goSoldier_Warp)(VUMat4 const &);
extern void (*goSoldier_SetAttachmentSaveData)(int);
extern void (*goSoldier_SetCircleSaveData)(int);
// extern void (*goSoldier_SetSaveData)(uchar);
// extern void (*goSoldier_Init)(dc_tCreature const *,tEffectSystem *);
// extern void (*goSoldier_goSoldier)(goClient *,dc_tCreature const *,tEffectSystem *,int);
extern void (*goSoldier_DestroyFightSystem)(void);
extern void (*goSoldier_Disable)(void);
extern void (*goSoldier_Enable)(void);
extern void (*goSoldier_Destructor_goSoldier)(void);
extern void (*goSoldier_GetTargetingPos)(int);
extern void (*goSoldier_HeadTrack)(void);
extern void (*goSoldier_UpdateTimeScale)(void);
extern void (*goSoldier_CreateFrozenIncarnation)(void);
extern void (*goSoldier_BreakFrozenIncarnation)(int);
extern void (*goSoldier_UpdateFreezing)(void);
extern void (*goSoldier_UpdateImpulse)(float);
extern void (*goSoldier_SetMode_Falling)(uint32_t,float);
extern void (*goSoldier_SetMode_OnGround)(void);
extern void (*goSoldier_SetMode_OnGround_Landing)(VUVec4);
extern void (*goSoldier_SetMode_OnGround_Landing)(void);
extern void (*goSoldier_SetMode_OnCeiling)(void);
extern void (*goSoldier_SetMode_Sliding)(void);
extern void (*goSoldier_SetMode_Jumping)(void);
extern void (*goSoldier_SetMode_DoubleJumping)(void);
extern void (*goSoldier_Do180Flip)(void);
extern void (*goSoldier_HandleJumping)(float);
extern void (*goSoldier_HandleCollisionOnly)(VUVec4,int,int,int,float);
extern void (*goSoldier_HandleWalkingSlidingFalling)(VUVec4,float);
extern void (*goSoldier_HandleTrapDamage)(float);
extern void (*goSoldier_DoStrafeMotion)(VUVec4,VUVec4,VUVec4,int &,float);
extern void (*goSoldier_DoNormalMotion)(VUVec4,VUVec4,VUVec4,int,int &,float);
extern void (*goSoldier_Update)(uint32_t);
extern void (*goSoldier_PostSoldierUpdate)(void);
extern void (*goSoldier_UpdateDead)(void);
extern void (*goSoldier_InitFeetIK)(char const *,int);
extern void (*goSoldier_DoFeetIK)(VUVec4);
// extern void (*goSoldier_SetDamageInfo)(float,VUVec4,uint,int);
// extern void (*goSoldier_SetTweaks)(dc_tCreature const *);
// extern void (*goSoldier_GetNavBranch)(dc_tNavBank const *,int);
// extern void (*goSoldier_GetNavBranch)(stdStack<signed char,3> const *,int);
extern void (*goSoldier_GetFirstNavBankMotionP)(void);
extern void (*goSoldier_DefyLightning)(void);
extern void (*goSoldier_DerivedTweaks)(void);
extern void (*goSoldier_CanDoCombatMove)(void);
extern void (*goSoldier_GetCreatureControls)(void);
extern void (*goSoldier_GetAnimSystem)(void);
extern void (*goSoldier_GetAttachmentSystem)(void);
extern void (*goSoldier_GetHandleSystem)(void);
extern void (*goSoldier_GetEffectSystem)(void);
extern void (*goSoldier_GetMass)(void);
extern void (*goSoldier_GetHeight)(void);
extern void (*goSoldier_GetRadius)(void);
extern void (*goSoldier_GetFrozenRatio)(void);
extern void (*goSoldier_IsFrozen)(void);
extern void (*goSoldier_GetGOName)(void);
extern void (*goSoldier_GetRope)(void);
extern void (*goSoldier_SetImpulse)(VUVec4);
extern void (*goSoldier_UsingAnimDrivenMotion)(void);
extern void (*goSoldier_GetFreezeTimeLeft)(float);
extern void (*goSoldier_IsFreezable)(void);
extern void (*goSoldier_SetFreezeResistance)(float);

#define goSoldier_s_wLightFrameEvenCount *((uint32_t*))
#define goSoldier_s_wLightFrameOddCount *((uint32_t*))
#define goSoldier_vtbl *((uint32_t*))
#define goSoldier_sm_goSoldierMultiPool *((uint32_t*))

#endif
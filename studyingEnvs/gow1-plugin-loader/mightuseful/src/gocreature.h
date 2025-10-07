#ifndef gocreature_h
#define gocreature_h

#include "stdint.h"
#include "gogameobject.h"
#include "temp.h"

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


typedef struct _goCreature
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
} goCreature; // 0x1DC

extern void (*goCreature_goCreature)(void);
// extern void (*goCreature_goCreature)(goClient *);
extern void (*goCreature_InitializeData)(void);
// extern void (*goCreature_SetGOClient)(goClient *);
extern void (*goCreature_Init)(void);
extern void (*goCreature_Reset)(uint);
extern void (*goCreature_Destructor_goCreature)(void);
extern void (*goCreature_EnableCameraTarget)(int,float,float,float);
extern void (*goCreature_DisableCameraTarget)(int,float,float,float,bool);
extern void (*goCreature_RestoreTargets)(uint);
// extern void (*goCreature_CreateSoundEmitter)(goGameObject *,sound_Emitter *);
extern void (*goCreature_PlaySound)(uint);
extern void (*goCreature_StopSound)(uint);
extern void (*goCreature_RegisterGO)(goGameObject *);
extern void (*goCreature_UnregisterGO)(void);
extern void (*goCreature_ConnectCollision)(void);
extern void (*goCreature_DisconnectCollision)(void);
extern void (*goCreature_ShowGeometry)(goGameObject *,int);
extern void (*goCreature_ShowGeometry)(void);
extern void (*goCreature_HideGeometry)(goGameObject *);
extern void (*goCreature_HideGeometry)(void);
extern void (*goCreature_SetGeometryAlpha)(goGameObject *,float);
extern void (*goCreature_SetGeometryAlpha)(float);
extern void (*goCreature_SetGeometryTint)(goGameObject *,VUVec4);
extern void (*goCreature_SetGeometryTint)(VUVec4);
extern void (*goCreature_ConnectShadow)(void);
extern void (*goCreature_DisconnectShadow)(void);
extern void (*goCreature_ApplyFriction)(VUVec4,float,float);
extern void (*goCreature_ResetPhysicalDampingSystem)(VUMat4 const );
extern void (*goCreature_Warp)(VUMat4 const);
extern void (*goCreature_ResolvePhysicalOrientation)(VUVec4,VUVec4,VUMat4,float);
extern void (*goCreature_UpdateValidityDisk)(tValidityDisk *);
extern void (*goCreature_UpdateCircle)(void);
extern void (*goCreature_EnableCircle)(int);
extern void (*goCreature_SetHitPoints)(float);
extern void (*goCreature_SubtractHitPoints)(float);
extern void (*goCreature_AddHitPoints)(float);
extern void (*goCreature_SetInFreezeBeam)(float,int);
extern void (*goCreature_SetHaveAttached)(goCreature *,int,uint32_t);
extern void (*goCreature_ClrHaveAttached)(void);
extern void (*goCreature_GetTargetingPos)(int);
extern void (*goCreature_DoNotTarget)(void);
extern void (*goCreature_SetCustomFlag)(void);
extern void (*goCreature_ClrCustomFlag)(void);
extern void (*goCreature_GetID)(void);
extern void (*goCreature_FindClosestObjectInRadius)(uint32_t,float,uint32_t);
extern void (*goCreature_GetControlNormal)(void);
extern void (*goCreature_GetRope)(void);
extern void (*goCreature_AddVarsToVFS)(char *);
extern void (*goCreature_RemoveWadContext)(wadContext *);
extern void (*goCreature_SetImpulse)(VUVec4);
extern void (*goCreature_Disable)(void);
extern void (*goCreature_Enable)(void);
extern void (*goCreature_SetCircleSaveData)(int);
extern void (*goCreature_CanDoCombatMove)(void);
extern void (*goCreature_CanAutoAim)(void);
extern void (*goCreature_IsFreezable)(void);
extern void (*goCreature_GetFreezeTimeLeft)(float);
extern void (*goCreature_GetFrozenRatio)(void);
extern void (*goCreature_IsFrozen)(void);
extern void (*goCreature_CreateFrozenIncarnation)(void);
extern void (*goCreature_GetGOName)(void);
extern void (*goCreature_PushableWeight)(void);
extern void (*goCreature_DefyLightning)(void);
extern void (*goCreature_DerivedTweaks)(void);
// extern void (*goCreature_GetNavBranch)(dc_tNavBank const *,int);
// extern void (*goCreature_GetNavBranch)(stdStack<signed char,3> const *,int);
extern void (*goCreature_GetFirstNavBankMotionP)(void);
extern void (*goCreature_sm_fUnFreezeSpeed);
// extern void (*goCreature_)vtbl;

#endif
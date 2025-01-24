#ifndef GOCREATURE_H
#define GOCREATURE_H

#include "type.h"
#include "vumat.h"
#include "dcdefinitions.h"
#include "gogameobject.h"
#include "undefinedtype.h"
#include "sound.h"
#include "tcollisionbox.h"
#include "gohandledb.h"
#include "tvaliditydisk.h"

typedef struct tPhysicalDamping_ {
    FLOAT m_fPhysicalDirDamping;
    FLOAT m_fPhysicalDirDampingMult;
    FLOAT m_fPhysicalPosDamping;
    FLOAT m_fPhysicalPosDampingMult;
    INT32 m_iFlags;
} tPhysicalDamping;

typedef UINT32 goCreature__vtable;

typedef struct goCreature {
    goGameObject *m_pGameObject;
    goCreature__vtable *__vtable;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    VUMat4 m_mInitialPosition;
    VUMat4 m_mMotion;
    VUMat4 m_mPhysical;
    VUVec4 m_vPhysicalPosForCamera;
    VUVec4 m_vVelocity;
    VUVec4 m_vImpulse;
    VUVec4 m_vLastMovement;
    VUVec4 m_vLastPosition;
    tCollisionBox m_NavCollision;
    tPhysicalDamping m_PhysDamp;
    FLOAT m_fMaxSpeed;
    FLOAT m_fScale;
    FLOAT m_fTimeScale;
    UINT32 m_uMotionStateFlags;
    UINT32 m_uInfoStateFlags;
    FLOAT m_fHitPoints;
    FLOAT m_fMaxHitPoints;
    FLOAT m_fFreezeSpeed;
    FLOAT m_fRampHitPoints;
    struct goCreature *m_pChildCreature;
    struct goCreature *m_pParentCreature;
    INT32 m_iAttachedToJointID;
    UINT32 m_uAttachmentType;
    FLOAT m_fTimeSinceLastVisible;
    FLOAT m_fTimeSinceLastAttacked;
    UINT32 m_CameraTargets;
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
    CShield *m_pShield;
    goGameObject *m_pCircleGO;
    FLOAT m_fCircleSoundDelay;
    tCreature *m_pCTweaks;
    wadContext *m_pCTweaksContext;
} goCreature;

// extern UINT32 goCreature_goCreature(goCreature *);
extern UINT32 goCreature_goCreature(goCreature *, goClient *);
extern UINT32 goCreature_InitializeData(goCreature *);
extern UINT32 goCreature_SetGOClient(goCreature *, goClient *);
extern UINT32 goCreature_Init(goCreature *);
extern UINT32 goCreature_Reset(goCreature *, uint);
extern UINT32 goCreature_Destructor_goCreature(goCreature *);
extern UINT32 goCreature_EnableCameraTarget(goCreature *, int,float,float,float);
extern UINT32 goCreature_DisableCameraTarget(goCreature *, int,float,float,float,BOOL);
extern UINT32 goCreature_RestoreTargets(goCreature *, uint);
extern UINT32 goCreature_CreateSoundEmitter(goCreature *, goGameObject *,Emitter *);
extern UINT32 goCreature_PlaySound(goCreature *, uint);
extern UINT32 goCreature_StopSound(goCreature *, uint);
extern UINT32 goCreature_RegisterGO(goCreature *, goGameObject *);
extern UINT32 goCreature_UnregisterGO(goCreature *);
extern UINT32 goCreature_ConnectCollision(goCreature *);
extern UINT32 goCreature_DisconnectCollision(goCreature *);
extern UINT32 goCreature_ShowGeometry(goCreature *, goGameObject *,int);
// extern UINT32 goCreature_ShowGeometry(goCreature *);
extern UINT32 goCreature_HideGeometry(goCreature *, goGameObject *);
// extern UINT32 goCreature_HideGeometry(goCreature *);
extern UINT32 goCreature_SetGeometryAlpha(goCreature *, goGameObject *,float);
// extern UINT32 goCreature_SetGeometryAlpha(goCreature *, float);
extern UINT32 goCreature_SetGeometryTint(goCreature *, goGameObject *,VUVec4);
// extern UINT32 goCreature_SetGeometryTint(goCreature *, VUVec4);
extern UINT32 goCreature_ConnectShadow(goCreature *);
extern UINT32 goCreature_DisconnectShadow(goCreature *);
extern UINT32 goCreature_ApplyFriction(goCreature *, VUVec4,float,float);
extern UINT32 goCreature_ResetPhysicalDampingSystem(goCreature *, VUMat4 *);
extern UINT32 goCreature_Warp(goCreature *, VUMat4 *);
extern UINT32 goCreature_ResolvePhysicalOrientation(goCreature *, VUVec4,VUVec4,VUMat4,float);
extern UINT32 goCreature_UpdateValidityDisk(goCreature *, tValidityDisk *);
extern UINT32 goCreature_UpdateCircle(goCreature *);
extern UINT32 goCreature_EnableCircle(goCreature *, int);
extern UINT32 goCreature_SetHitPoints(goCreature *, float fHP);
extern UINT32 goCreature_SubtractHitPoints(goCreature *, float);
extern UINT32 goCreature_AddHitPoints(goCreature *, float);
extern UINT32 goCreature_SetInFreezeBeam(goCreature *, float,int);
extern UINT32 goCreature_SetHaveAttached(goCreature *, goCreature *,int,uint);
extern UINT32 goCreature_ClrHaveAttached(goCreature *);
extern UINT32 goCreature_GetTargetingPos(goCreature *, int);
extern UINT32 goCreature_DoNotTarget(goCreature *);
extern UINT32 goCreature_SetCustomFlag(goCreature *);
extern UINT32 goCreature_ClrCustomFlag(goCreature *);
extern UINT32 goCreature_GetID(goCreature *);
extern UINT32 goCreature_FindClosestObjectInRadius(goCreature *, uint,float,uint);
extern UINT32 goCreature_GetControlNormal(goCreature *);
extern UINT32 goCreature_GetRope(goCreature *);
extern UINT32 goCreature_AddVarsToVFS(goCreature *, char *);
extern UINT32 goCreature_RemoveWadContext(goCreature *, wadContext *);
extern UINT32 goCreature_SetImpulse(goCreature *, VUVec4);
extern UINT32 goCreature_Disable(goCreature *);
extern UINT32 goCreature_Enable(goCreature *);
extern UINT32 goCreature_SetCircleSaveData(goCreature *, int);
extern UINT32 goCreature_CanDoCombatMove(goCreature *);
extern UINT32 goCreature_CanAutoAim(goCreature *);
extern UINT32 goCreature_IsFreezable(goCreature *);
extern UINT32 goCreature_GetFreezeTimeLeft(goCreature *, float);
extern UINT32 goCreature_GetFrozenRatio(goCreature *);
extern UINT32 goCreature_IsFrozen(goCreature *);
extern UINT32 goCreature_CreateFrozenIncarnation(goCreature *);
extern UINT32 goCreature_GetGOName(goCreature *);
extern UINT32 goCreature_PushableWeight(goCreature *);
extern UINT32 goCreature_DefyLightning(goCreature *);
extern UINT32 goCreature_DerivedTweaks(goCreature *);
extern UINT32 goCreature_GetNavBranch(tNavBank *,int);
extern UINT32 goCreature_GetNavBranch(stdStack *,int);
extern UINT32 goCreature_GetFirstNavBankMotionP(goCreature *);

extern UINT32 goCreature_sm_fUnFreezeSpeed;
extern UINT32 goCreature_vtbl;

#endif
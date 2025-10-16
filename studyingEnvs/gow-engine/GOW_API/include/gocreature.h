#ifndef GOCREATURE_H
#define GOCREATURE_H

#include "type.h"
#include "vuvec.h"
#include "tcollisionbox.h"
#include "gogameobject.h"
#include "renshadowclient.h"
#include "goclient.h"
#include "vtbl.h"
#include "tvaliditydisk.h"
#include "sound.h"
#include "dcdefinitions.h"

typedef struct tPhysicalDamping_ {
    FLOAT m_fPhysicalDirDamping;
    FLOAT m_fPhysicalDirDampingMult;
    FLOAT m_fPhysicalPosDamping;
    FLOAT m_fPhysicalPosDampingMult;
    INT32 m_iFlags;
} tPhysicalDamping;

typedef UINT32 renModel;
typedef UINT32 goCreatureController;
typedef UINT32 wadContext;
typedef UINT32 tFightSystem;
typedef UINT32 CShield;

typedef __vtbl_ptr_type goCreature__vtable;

typedef struct goCreature_ {
    struct goGameObject *m_pGameObject; /* Inherited from goBase */
    struct goCreature__vtable *__vtable; /* Inherited from goBase */
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

extern void goCreature_goCreature(goCreature *this_);
extern void goCreature_goCreature(goCreature *this_, goClient *);
extern void goCreature_InitializeData(goCreature *this_);
extern void goCreature_SetGOClient(goCreature *this_, goClient *);
extern void goCreature_Init(goCreature *this_);
extern void goCreature_Reset(goCreature *this_, uint);
extern void goCreature_Destructor_goCreature(goCreature *this_);
extern void goCreature_EnableCameraTarget(goCreature *this_, int,float,float,float);
extern void goCreature_DisableCameraTarget(goCreature *this_, int,float,float,float,BOOL);
extern void goCreature_RestoreTargets(goCreature *this_, uint);
extern void goCreature_CreateSoundEmitter(goCreature *this_, goGameObject *,Emitter *);
extern void goCreature_PlaySound(goCreature *this_, uint);
extern void goCreature_StopSound(goCreature *this_, uint);
extern void goCreature_RegisterGO(goCreature *this_, goGameObject *);
extern void goCreature_UnregisterGO(goCreature *this_);
extern void goCreature_ConnectCollision(goCreature *this_);
extern void goCreature_DisconnectCollision(goCreature *this_);
extern void goCreature_ShowGeometry(goCreature *this_, goGameObject *,int);
extern void goCreature_ShowGeometry(goCreature *this_);
extern void goCreature_HideGeometry(goCreature *this_, goGameObject *);
extern void goCreature_HideGeometry(goCreature *this_);
extern void goCreature_SetGeometryAlpha(goCreature *this_, goGameObject *,float);
extern void goCreature_SetGeometryAlpha(goCreature *this_, float);
extern void goCreature_SetGeometryTint(goCreature *this_, goGameObject *,VUVec4);
extern void goCreature_SetGeometryTint(goCreature *this_, VUVec4);
extern void goCreature_ConnectShadow(goCreature *this_);
extern void goCreature_DisconnectShadow(goCreature *this_);
extern void goCreature_ApplyFriction(goCreature *this_, VUVec4,float,float);
extern void goCreature_ResetPhysicalDampingSystem(goCreature *this_, VUMat4 *);
extern void goCreature_Warp(goCreature *this_, VUMat4 *);
extern void goCreature_ResolvePhysicalOrientation(goCreature *this_, VUVec4,VUVec4,VUMat4,float);
extern void goCreature_UpdateValidityDisk(goCreature *this_, tValidityDisk *);
extern void goCreature_UpdateCircle(goCreature *this_);
extern void goCreature_EnableCircle(goCreature *this_, int);
extern void goCreature_SetHitPoints(goCreature *this_, float);
extern void goCreature_SubtractHitPoints(goCreature *this_, float);
extern void goCreature_AddHitPoints(goCreature *this_, float);
extern void goCreature_SetInFreezeBeam(goCreature *this_, float,int);
extern void goCreature_SetHaveAttached(goCreature *this_, goCreature *,int,uint);
extern void goCreature_ClrHaveAttached(goCreature *this_);
extern void goCreature_GetTargetingPos(goCreature *this_, int);
extern void goCreature_DoNotTarget(goCreature *this_);
extern void goCreature_SetCustomFlag(goCreature *this_);
extern void goCreature_ClrCustomFlag(goCreature *this_);
extern void goCreature_GetID(goCreature *this_);
extern void goCreature_FindClosestObjectInRadius(goCreature *this_, uint,float,uint);
extern void goCreature_GetControlNormal(goCreature *this_);
extern void goCreature_GetRope(goCreature *this_);
extern void goCreature_AddVarsToVFS(goCreature *this_, char *);
extern void goCreature_RemoveWadContext(goCreature *this_, wadContext *);
extern void goCreature_SetImpulse(goCreature *this_, VUVec4);
extern void goCreature_Disable(goCreature *this_);
extern void goCreature_Enable(goCreature *this_);
extern void goCreature_SetCircleSaveData(goCreature *this_, int);
extern void goCreature_CanDoCombatMove(goCreature *this_);
extern void goCreature_CanAutoAim(goCreature *this_);
extern void goCreature_IsFreezable(goCreature *this_);
extern void goCreature_GetFreezeTimeLeft(goCreature *this_, float);
extern void goCreature_GetFrozenRatio(goCreature *this_);
extern void goCreature_IsFrozen(goCreature *this_);
extern void goCreature_CreateFrozenIncarnation(goCreature *this_);
extern void goCreature_GetGOName(goCreature *this_);
extern void goCreature_PushableWeight(goCreature *this_);
extern void goCreature_DefyLightning(goCreature *this_);
extern void goCreature_DerivedTweaks(goCreature *this_);
extern void goCreature_GetNavBranch(tNavBank *,int);
// extern void (*goCreature_GetNavBranch)(stdStack *,int);
extern void goCreature_GetFirstNavBankMotionP(goCreature *this_);

#define goCreature_sm_fUnFreezeSpeed	*((UINT32 *)0x002B21A0)
#define goCreature_vtbl	*((UINT32 *)0x002CAC98)

#endif
#ifndef GOPLAYER_H
#define GOPLAYER_H

#include "stdint.h"
#include "gocreature.h"
#include "fx.h"

#define goPlayerControls UNKNOWN_TYPE
#define tBranch UNKNOWN_TYPE
#define renMaterial UNKNOWN_TYPE
#define fxTrailClientParm UNKNOWN_TYPE
#define fxTrail UNKNOWN_TYPE


typedef struct _goplayer
{
    goCreature*	m_pCreature;
    goPlayerControls* m_pControls;
    _vtbl_ptr_type *vf15414;
    uint32_t m_uFlags;
    float m_deadTime;
    float m_fwiggleMeter;
    float m_fWiggleLastXLeft;
    float m_fWigglelastYLeft;
    float m_fwiggleLastXRight;
    float m_fwiggleLastyRight;
    int m_iHitCounter;
    int m_iHitCounterLastFrame;
    float m_fHitCounterTimer;
    tBranch* m_pCurrentFreezeMove;
    Emitter m_pLowHealthSoundEmitter;
    float m_fLowHealthTimeToTrigger;
    float m_fLowHealthDeadTimer;
    goGameObject *m_pReticle;
    bool m_bReticlevalid;
    uint32_t m_iZone;
    int m_iSavePointID;
    float m_fSavePointDist;
    renMaterial* m_pSavePointBeamMat;
    tValidityDisk m_ValidDisk;
    blank blank[2];
    fxBoneData m_BoneData;
    float m_fMeterBarTime;
    uint32_t m_uBonusPoints;
    uint32_t m_uBonusMsgIdx;
    fxTrailClientParm* m_pBodyTrailClientParm;
    fxTrail* m_pBodyTrail;
} goPlayer;

// extern void (*goPlayer_Init)(goClient *);
extern void (*goPlayer_ReInit)(void);
extern void (*goPlayer_Reset)(void);
extern void (*goPlayer_ResetShortTerm)(void);
extern void (*goPlayer_goPlayer)(void);
extern void (*goPlayer_Destructor_goPlayer)(void);
extern void (*goPlayer_RemoveWadContext)(wadContext const *);
extern void (*goPlayer_Run)(int);
extern void (*goPlayer_UpdateFlash)(void);
extern void (*goPlayer_ResetFlash)(void);
extern void (*goPlayer_UpdateOrbData)(void);
extern void (*goPlayer_AddOrbPoints)(float,float,float,float);
extern void (*goPlayer_HandleUpgrades)(void);
extern void (*goPlayer_HandlePickups)(void);
extern void (*goPlayer_SelectMagic)(int,char const *);
extern void (*goPlayer_HandlePlayerControls)(void);
extern void (*goPlayer_HandlePlayerControlVector)(void);
extern void (*goPlayer_HandleDebugPrinting)(void);
extern void (*goPlayer_HandleTargeting)(void);
extern void (*goPlayer_HandleValidityDisk)(void);
extern void (*goPlayer_HandleWiggle)(void);
extern void (*goPlayer_IncPickup)(uint32_t,uint32_t,uint32_t);
extern void (*goPlayer_DecPickup)(uint32_t,uint32_t,uint32_t);
extern void (*goPlayer_GetPickupCount)(uint32_t);
extern void (*goPlayer_MaxPickupCount)(uint32_t);
extern void (*goPlayer_GetPickupLevel)(uint32_t);
extern void (*goPlayer_IsPickupEnabled)(int *);
extern void (*goPlayer_AcquireAllPickups)(int);
extern void (*goPlayer_ProcessPickup)(uint32_t,uint32_t);
extern void (*goPlayer_IncHealthMeterLevel)(void);
extern void (*goPlayer_IncMagicMeterLevel)(void);
extern void (*goPlayer_IncSubWeaponMeterLevel)(void);
extern void (*goPlayer_FullyPoweredUp)(void);
extern void (*goPlayer_IsSphereOnScreen)(VUVec4);
extern void (*goPlayer_FindTargetCallback)(void);
extern void (*goPlayer_FindTarget)(goHandle,int,float);
extern void (*goPlayer_GetDirToTarget)(goHandle,VUVec4,VUVec4);
extern void (*goPlayer_FindTargetManualCallback)(void);
extern void (*goPlayer_FindTargetManual)(goHandle,float);
extern void (*goPlayer_FindAllTargetsCallback)(void);
extern void (*goPlayer_GetTarget)(int);
extern void (*goPlayer_FindAllTargets)(VUVec4,float,uint32_t,goCreature *);
extern void (*goPlayer_FindAllTargetsAroundPlayer)(float,uint32_t,goCreature *);
extern void (*goPlayer_FindGrappleTarget)(void);
extern void (*goPlayer_HandleGodMode)(void);
extern void (*goPlayer_HandleHermesMode)(void);
extern void (*goPlayer_AddGodMeter)(float);
extern void (*goPlayer_IncHitCounter)(int);
// extern void (*goPlayer_GiveBonus)(dc_tBonus const *);
extern void (*goPlayer_HandleHitCounter)(void);
extern void (*goPlayer_HandleLowHealthSound)(void);
extern void (*goPlayer_ForceMove)(uint32_t,int);
extern void (*goPlayer_GetDamageMultiplier)(void);
extern void (*goPlayer_SetPowerUpPoints)(int);
extern void (*goPlayer_CheckFirstTime)(goPlayer_FT_TYPE);
extern void (*goPlayer_GetStateData)(void *);
extern void (*goPlayer_SetStateData)(void const *);
extern void (*goPlayer_HandleUseWorld)(void);
extern void (*goPlayer_UpdateSavePoint)(int,VUVec4,renMaterial *);
extern void (*goPlayer_HandleBodyTrail)(void);
extern void (*goPlayer_MoveTrackData_MoveTrackData)(void);
// extern void (*goPlayer_MoveTrackData_AddMove)(dc_tMove const *);
extern void (*goPlayer_MoveTrackData_AddContext)(short);
// extern void (*goPlayer_MoveTrackData_GetMoveCount)(dc_tMove const *);
extern void (*goPlayer_MoveTrackData_GetContextCount)(short);
extern void (*goPlayer_MoveTrackData_Update)(float);
extern void (*goPlayer_SubtractMagicPoints)(float);
extern void (*goPlayer_EnoughMagicPoints)(float);
extern void (*goPlayer_ShowMeterBar)(void);
extern void (*goPlayer_RemoveCameraTarget)(void);
extern void (*goPlayer_AddCameraTarget)(void);
extern void (*goPlayer_CalcZoneTarget)(void);
extern void (*goPlayer_StateData_StateData)(void);
extern void (*goPlayer_SetFlags)(uint32_t);
extern void (*goPlayer_TstFlags)(uint32_t);
extern void (*goPlayer_ClrFlags)(uint32_t);

#define goPlayer_sm_pPlayer *((uint32_t *))
#define goPlayer_sm_pCameraTarget *((uint32_t *))
#define goPlayer_vtbl *((uint32_t *))
#define goPlayer_state *((uint32_t *))
#define goPlayer_sm_MTD *((uint32_t *))

#endif
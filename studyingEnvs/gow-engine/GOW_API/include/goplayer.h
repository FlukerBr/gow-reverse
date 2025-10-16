#ifndef GOPLAYER_H
#define GOPLAYER_H

#include "type.h"
#include "tvaliditydisk.h"
#include "sound.h"
#include "gocreature.h"
#include "goplayercontrols.h"
#include "dcdefinitions.h"
#include "fxbonedata.h"


typedef UINT32 renMaterial;
typedef UINT32 fxTrailClientParm;
typedef UINT32 fxTrail;
typedef __vtbl_ptr_type goPlayer__vtable;


typedef struct goPlayer_ {
    goCreature *m_pCreature; /* Inherited from goCreatureController */
    goPlayerControls *m_pControls; /* Inherited from goCreatureController */
    goPlayer__vtable *__vtable; /* Inherited from goCreatureController */
    UINT32 m_uFlags;
    FLOAT m_deadTime;
    FLOAT m_fWiggleMeter;
    FLOAT m_fWiggleLastXLeft;
    FLOAT m_fWiggleLastYLeft;
    FLOAT m_fWiggleLastXRight;
    FLOAT m_fWiggleLastYRight;
    INT32 m_iHitCounter;
    INT32 m_iHitCounterLastFrame;
    FLOAT m_fHitCounterTimer;
    tBranch *m_pCurrentFreezeMove;
    Emitter *m_pLowHealthSoundEmitter;
    FLOAT m_fLowHealthTimeToTrigger;
    FLOAT m_fLowHealthDeadTimer;
    struct goGameObject *m_pReticle;
    BOOL m_bReticleValid;
    UINT32 m_iZone;
    INT32 m_iSavePointID;
    FLOAT m_fSavePointDist;
    renMaterial *m_pSavePointBeamMat;
    undefined field23_0x5c;
    undefined field24_0x5d;
    undefined field25_0x5e;
    undefined field26_0x5f;
    tValidityDisk m_ValidDisk;
    fxBoneData m_BoneData;
    FLOAT m_fMeterBarTime;
    UINT32 m_uBonusPoints;
    UINT32 m_uBonusMsgIdx;
    fxTrailClientParm *m_pBodyTrailClientParm;
    fxTrail *m_pBodyTrail;
    undefined field34_0x194;
    undefined field35_0x195;
    undefined field36_0x196;
    undefined field37_0x197;
    undefined field38_0x198;
    undefined field39_0x199;
    undefined field40_0x19a;
    undefined field41_0x19b;
    undefined field42_0x19c;
    undefined field43_0x19d;
    undefined field44_0x19e;
    undefined field45_0x19f;
} goPlayer;

typedef enum FT_TYPE {
    FT_Crank=0,
    FT_MedusaHead=1,
    FT_Orb=2,
    FT_Pushable=3,
    FT_SkellyRope=4,
    FT_SkellyWall=5,
    FT_Swim=6,
    FT_MinMiniGame=7,
    FT_UseMedusaHead=8,
    FT_UseLightBolt=9,
    FT_BalanceBeam=10,
    FT_MedusaFreeze=11,
    FT_GodMeter=12,
    FT_SkellyGrab=13,
    FT_EnemyInAir=14,
    FT_EnemyEvade=15,
    FT_NotGodEnough=16,
    FT_Unused2=17,
    FT_EnoughOrbs=18,
    FT_ShieldSkelly=19,
    FT_Unused1=20,
    FT_FreezingMedusa=21
} FT_TYPE;
;





typedef struct MoveTrackData_ {
    float m_fContextTimer[4];
    short int m_iContextCount[4];
    short int m_iContext[4];
    float m_fMoveTimer[6];
    short int m_iMoveCount[6];
    struct tMove__1_5844 *m_pMove[6];
} MoveTrackData;


typedef struct StateData__1_15931_ {
    VUMat4 playerMatrix;
    UINT32 creatureFlags1;
    UINT32 creatureFlags2;
    UINT32 debugFlags;
    UINT32 nDeaths;
    UINT64 firstTime;
    unsigned char firstTimeCounter[4];
    FLOAT playTime;
    FLOAT healthMeter;
    FLOAT magicMeter;
    FLOAT subWeaponMeter;
    FLOAT godMeter;
    FLOAT rampMagicMeter;
    UINT8 healthMeterLevel;
    UINT8 magicMeterLevel;
    UINT8 subWeaponMeterLevel;
    undefined field16_0x77;
    UINT16 powerUpPoints;
    UINT16 bladesPoints;
    UINT16 earthPoints;
    UINT16 icePoints;
    UINT16 lightningPoints;
    UINT16 windPoints;
    UINT16 bonePoints;
    UINT16 hammerPoints;
    UINT16 medusaPoints;
    UINT16 olympusPoints;
    UINT8 bladesLevel;
    UINT8 earthLevel;
    UINT8 iceLevel;
    UINT8 lightningLevel;
    UINT8 windLevel;
    UINT8 boneLevel;
    UINT8 hammerLevel;
    UINT8 medusaLevel;
    UINT8 olympusLevel;
    UINT8 pickupSelected;
    UINT8 subWeaponSelected;
    UINT8 godModeSelected;
    UINT8 nHealthShardPickups;
    UINT8 nMagicShardPickups;
    UINT8 nSirenPiecePickups;
    undefined field42_0x9b;
    UINT16 hasPickupBits;
    unsigned char dummy[12];
    undefined field45_0xaa;
    undefined field46_0xab;
    undefined field47_0xac;
    undefined field48_0xad;
    undefined field49_0xae;
    undefined field50_0xaf;
} StateData__1_15931;

extern void goPlayer_Init(goPlayer *, goClient *);
extern void goPlayer_ReInit(goPlayer *);
extern void goPlayer_Reset(goPlayer *);
extern void goPlayer_ResetShortTerm(goPlayer *);
extern void goPlayer_goPlayer(goPlayer *);
extern void goPlayer_Destructor_goPlayer(goPlayer *);
extern void goPlayer_RemoveWadContext(goPlayer *, wadContext *);
extern void goPlayer_Run(goPlayer *, int);
extern void goPlayer_UpdateFlash(goPlayer *);
extern void goPlayer_ResetFlash(goPlayer *);
extern void goPlayer_UpdateOrbData(goPlayer *);
extern void goPlayer_AddOrbPoints(goPlayer *, float,float,float,float);
extern void goPlayer_HandleUpgrades(goPlayer *);
extern void goPlayer_HandlePickups(goPlayer *);
extern void goPlayer_SelectMagic(goPlayer *, int,char *);
extern void goPlayer_HandlePlayerControls(goPlayer *);
extern void goPlayer_HandlePlayerControlVector(goPlayer *);
extern void goPlayer_HandleDebugPrinting(goPlayer *);
extern void goPlayer_HandleTargeting(goPlayer *);
extern void goPlayer_HandleValidityDisk(goPlayer *);
extern void goPlayer_HandleWiggle(goPlayer *);
extern void goPlayer_IncPickup(goPlayer *, uint,uint,uint);
extern void goPlayer_DecPickup(goPlayer *, uint,uint,uint);
extern void goPlayer_GetPickupCount(goPlayer *, uint);
extern void goPlayer_MaxPickupCount(goPlayer *, uint);
extern void goPlayer_GetPickupLevel(goPlayer *, uint);
extern void goPlayer_IsPickupEnabled(goPlayer *, int *);
extern void goPlayer_AcquireAllPickups(goPlayer *, int);
extern void goPlayer_ProcessPickup(goPlayer *, uint,uint);
extern void goPlayer_IncHealthMeterLevel(goPlayer *);
extern void goPlayer_IncMagicMeterLevel(goPlayer *);
extern void goPlayer_IncSubWeaponMeterLevel(goPlayer *);
extern void goPlayer_FullyPoweredUp(goPlayer *);
extern void goPlayer_IsSphereOnScreen(goPlayer *, VUVec4);
extern void goPlayer_FindTargetCallback(goPlayer *);
extern void goPlayer_FindTarget(goPlayer *, goHandle,int,float);
extern void goPlayer_GetDirToTarget(goPlayer *, goHandle,VUVec4,VUVec4);
extern void goPlayer_FindTargetManualCallback(goPlayer *);
extern void goPlayer_FindTargetManual(goPlayer *, goHandle,float);
extern void goPlayer_FindAllTargetsCallback(goPlayer *);
extern void goPlayer_GetTarget(goPlayer *, int);
extern void goPlayer_FindAllTargets(goPlayer *, VUVec4,float,uint,goCreature *);
extern void goPlayer_FindAllTargetsAroundPlayer(goPlayer *, float,uint,goCreature *);
extern void goPlayer_FindGrappleTarget(goPlayer *);
extern void goPlayer_HandleGodMode(goPlayer *);
extern void goPlayer_HandleHermesMode(goPlayer *);
extern void goPlayer_AddGodMeter(goPlayer *, float);
extern void goPlayer_IncHitCounter(goPlayer *, int);
extern void goPlayer_GiveBonus(goPlayer *, tBonus *);
extern void goPlayer_HandleHitCounter(goPlayer *);
extern void goPlayer_HandleLowHealthSound(goPlayer *);
extern void goPlayer_ForceMove(goPlayer *, uint,int);
extern void goPlayer_GetDamageMultiplier(goPlayer *);
extern void goPlayer_SetPowerUpPoints(goPlayer *, int);
extern void goPlayer_CheckFirstTime(goPlayer *, FT_TYPE);
extern void goPlayer_GetStateData(goPlayer *, void *);
extern void goPlayer_SetStateData(goPlayer *, void *);
extern void goPlayer_HandleUseWorld(goPlayer *);
extern void goPlayer_UpdateSavePoint(goPlayer *, int,VUVec4,renMaterial *);
extern void goPlayer_HandleBodyTrail(goPlayer *);
extern void goPlayer_MoveTrackData_MoveTrackData(MoveTrackData *);
extern void goPlayer_MoveTrackData_AddMove(MoveTrackData *, tMove__1_5844 *);
extern void goPlayer_MoveTrackData_AddContext(MoveTrackData *, short);
extern void goPlayer_MoveTrackData_GetMoveCount(MoveTrackData *, tMove__1_5844*);
extern void goPlayer_MoveTrackData_GetContextCount(MoveTrackData *, short);
extern void goPlayer_MoveTrackData_Update(MoveTrackData *, float);
extern void goPlayer_SubtractMagicPoints(goPlayer *, float);
extern void goPlayer_EnoughMagicPoints(goPlayer *, float);
extern void goPlayer_ShowMeterBar(goPlayer *);
extern void goPlayer_RemoveCameraTarget(goPlayer *);
extern void goPlayer_AddCameraTarget(goPlayer *);
extern void goPlayer_CalcZoneTarget(goPlayer *);
extern void goPlayer_StateData_StateData(StateData__1_15931 *);
extern void goPlayer_SetFlags(goPlayer *, uint);
extern void goPlayer_TstFlags(goPlayer *, uint);
extern void goPlayer_ClrFlags(goPlayer *, uint);



extern goPlayer *goPlayer_sm_pPlayer;
extern UINT32  goPlayer_sm_pCameraTarget;
extern UINT32  goPlayer_vtbl;
extern StateData__1_15931  goPlayer_state;
extern MoveTrackData  goPlayer_sm_MTD;

#endif
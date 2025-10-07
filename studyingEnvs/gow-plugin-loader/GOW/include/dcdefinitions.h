#ifndef DCDEFINITIONS_H
#define DCDEFINITIONS_H

#include "type.h"
#include "dcdefinitions.h"
#include "undefinedtype.h"
#include "vuvec.h"

typedef struct tColor__1_5326 {
    FLOAT m_R;
    FLOAT m_G;
    FLOAT m_B;
    FLOAT m_A;
} tColor__1_5326;

struct tBonus {
    INT16 m_PowerUpPoints;
    INT16 m_MessageIdx;
    UINT32 m_IncStat;
};

typedef struct tImpulse {
    FLOAT16 m_Away;
    FLOAT16 m_Up;
    FLOAT16 m_Right;
} tImpulse;

typedef struct tConcussion {
    UINT32 m_GOName;
    UINT32 m_JointName;
    FLOAT *m_RadiusList;
    FLOAT *m_DurationList;
    FLOAT m_FreezeAmount;
    FLOAT m_PieAngle;
    INT8 m_Context;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    struct tCollision *m_Collision;
    UINT8 m_Type;
    UINT8 m_Flags;
    undefined field13_0x22;
    undefined field14_0x23;
} tConcussion;

typedef struct tEffectSystem__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type tEffectSystem;
    struct __vtbl_ptr_type Init;
    struct __vtbl_ptr_type Reset;
    struct __vtbl_ptr_type Update;
    struct __vtbl_ptr_type InitDead;
    struct __vtbl_ptr_type InitFadeOut;
    struct __vtbl_ptr_type UpdateS;
} tEffectSystem__vtable;

typedef struct tEffectSystem {
    UINT32 m_uLastFrameMotionStateFlags;
    UINT32 m_uLastFrameSoldierModeFlags;
    UINT32 m_uLastFrameSoldierInfoFlags;
    FLOAT m_fTimer;
    UINT32 m_uFlags;
    struct tEffectSystem__vtable *__vtable;
} tEffectSystem;

typedef struct tStage__1_6239 {
    FLOAT m_BeamDistance;
    FLOAT m_BeamConeTopRadius;
    FLOAT m_BeamConeBaseRadius;
    FLOAT m_BeamMeterDrainRate;
    FLOAT m_BeamFreezeRate;
    UINT32 m_BeamEffectName;
    FLOAT m_FlashDistance;
    FLOAT m_FlashConeTopRadius;
    FLOAT m_FlashConeBaseRadius;
    FLOAT m_FlashMeterAmount;
    FLOAT m_FlashFreezeAmount;
    UINT32 m_FlashEffectName;
    FLOAT m_NukeFreezeAmount;
    FLOAT m_NukeMeterAmount;
    struct tConcussion *m_NukeConcussion;
} tStage__1_6239;

typedef struct tStage__1_6114 {
    struct tColor__1_5326 m_TrailTint;
    FLOAT m_DamageMult;
    UINT8 m_Flags;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
    undefined field6_0x18;
    undefined field7_0x19;
    undefined field8_0x1a;
    undefined field9_0x1b;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
} tStage__1_6114;

typedef struct tStage__1_6134 {
    struct tColor__1_5326 m_TrailTint;
    struct tColor__1_5326 m_Tint;
    FLOAT m_MeterDrain;
    FLOAT m_DamageMult;
    FLOAT m_EnemyDamageMult;
    FLOAT m_OnThreshold;
    FLOAT m_OffThreshold;
    UINT32 m_LoopSound;
    UINT32 m_EndSound;
    FLOAT m_EndThreshold;
} tStage__1_6134;

typedef struct tCameraFilter {
    INT32 m_ID; /* Inherited from tEffectParm */
    INT32 m_Type; /* Inherited from tEffectParm */
    INT32 m_Script; /* Inherited from tEffectParm */
    INT32 m_WadContext; /* Inherited from tEffectParm */
    struct tColor__1_5326 m_Top;
    struct tColor__1_5326 m_Middle;
    struct tColor__1_5326 m_Bottom;
    FLOAT m_TopPoint;
    FLOAT m_MiddlePoint;
    FLOAT m_BottomPoint;
    UINT32 m_BlendMode;
} tCameraFilter;

typedef struct tStage__1_6154 {
    FLOAT m_DamageMult;
    FLOAT m_AIDamageMult;
    FLOAT m_HealthOrbMult;
    FLOAT m_MagicOrbMult;
    FLOAT m_SubWeaponOrbMult;
    FLOAT m_WeaponOrbMult;
    FLOAT m_WeaponLength;
    FLOAT m_GodModeWeaponLength;
    UINT8 m_Flags;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
} tStage__1_6154;

typedef struct tStage__1_6276 {
    struct tConcussion *m_CncCh0;
    FLOAT m_Ch1Time;
    struct tConcussion *m_CncCh1;
    FLOAT m_Ch2Time;
    struct tConcussion *m_CncCh2;
    FLOAT m_MagicAmount;
    FLOAT m_MashometerDrainRate;
    FLOAT m_MashometerMax;
    FLOAT m_RainMinAnimSpeed;
    FLOAT m_RainMaxAnimSpeed;
    FLOAT m_RainMaxTime;
    INT8 m_RainMaxRocks;
    undefined field12_0x2d;
    undefined field13_0x2e;
    undefined field14_0x2f;
    FLOAT m_RainMaxRadius;
    FLOAT m_RainMinRadius;
    FLOAT m_RainRockMaxSpawnTime;
    FLOAT m_RainRockMinSpawnTime;
    FLOAT m_RainRockMinRotVel;
    FLOAT m_RainRockMaxRotVel;
    FLOAT m_RainRockGravity;
    struct tConcussion *m_RainRockCnc;
    struct tCameraShake *m_RainRockCsh;
    struct tForceFeedback *m_RainRockFfb;
    UINT8 m_Flags;
    undefined field26_0x59;
    undefined field27_0x5a;
    undefined field28_0x5b;
} tStage__1_6276;

struct tStage__1_6350 {
    FLOAT m_GustMagicAmount;
    struct tArrowEmitter *m_GustEmitter;
    FLOAT m_GustPlaybackSpeed;
    FLOAT m_ChargeGustMagicAmount;
    struct tArrowEmitter *m_ChargeGustEmitter;
    FLOAT m_ChargeGustTime;
    FLOAT m_TornadoMagicAmount;
    FLOAT m_TornadoMaxTime;
    FLOAT m_TornadoRadius;
    FLOAT m_TornadoRadiusScale;
    FLOAT m_TornadoRadiusScaleTime;
    FLOAT m_TornadoDamage;
    FLOAT m_TornadoVel;
    FLOAT m_TornadoPosDamping;
    INT8 m_TornadoHitContext;
    undefined field15_0x39;
    struct tImpulse m_TornadoImpulse;
    FLOAT m_TempestMagicAmount;
    FLOAT m_TempestMaxTime;
    FLOAT m_TempestRadius;
    FLOAT m_TempestRadiusScale;
    FLOAT m_TempestRadiusScaleTime;
    FLOAT m_TempestDamage;
    FLOAT m_TempestVel;
    FLOAT m_TempestPosDamping;
    INT8 m_TempestHitContext;
    undefined field26_0x61;
    struct tImpulse m_TempestImpulse;
    UINT8 m_Flags;
    undefined field29_0x69;
    undefined field30_0x6a;
    undefined field31_0x6b;
};

struct tWeapon {
    struct tStage__1_6114 *m_StageList;
};

struct tCostume {
    struct tStage__1_6154 *m_StageList;
};

struct tDifficulty {
    struct tStage__1_6188 *m_StageList;
};

struct tOlympus__1_6265 {
    struct tStage__1_6205 *m_StageList;
};

struct tGodMode {
    struct tStage__1_6134 *m_StageList;
};

struct tBone__1_6212 {
    struct tStage__1_6205 *m_StageList;
};

struct tHammer__1_6229 {
    struct tStage__1_6205 *m_StageList;
};

struct tMedusa__1_6248 {
    struct tStage__1_6239 *m_StageList;
};

struct tEarth {
    struct tStage__1_6276 *m_StageList;
};

struct tWind {
    struct tStage__1_6350 *m_StageList;
};

struct tIce {
    struct tStage__1_6300 *m_StageList;
};


struct tLightning {
    UINT32 m_HitSound;
    struct tImpulse m_GroundImpulse;
    struct tImpulse m_AirImpulse;
    struct tImpulse m_DischargeImpulse;
    undefined field4_0x16;
    undefined field5_0x17;
    struct tStage__1_6326 *m_StageList;
};

struct tBonusMilestones {
    INT16 m_Threshold;
    undefined field1_0x2;
    undefined field2_0x3;
    struct tBonus **m_BonusList;
    INT16 *m_HitList;
};

typedef struct tCreatureControls {
    VUVec4 m_vWorld;
    VUVec4 m_vCamera;
    VUVec4 m_vFacing;
    INT32 m_iJumpHack;
    UINT32 m_uControlFlags;
    undefined field5_0x38;
    undefined field6_0x39;
    undefined field7_0x3a;
    undefined field8_0x3b;
    undefined field9_0x3c;
    undefined field10_0x3d;
    undefined field11_0x3e;
    undefined field12_0x3f;
} tCreatureControls;

typedef struct tMove__1_5844 {
    FLOAT16 m_PlaybackSpeed;
    FLOAT16 m_TweenTime;
    UINT8 m_Flags;
    UINT8 m_PhysicsMode;
    undefined field4_0x6;
    undefined field5_0x7;
    UINT32 m_AnimName;
    UINT32 m_MoveName;
    tBranch **m_BranchList;
    tCollision **m_CollisionList;
    tActionBase **m_ActionList;
} tMove__1_5844;

struct tCamShake {
    FLOAT m_PitchAmplitude;
    FLOAT m_PitchFrequency;
    FLOAT m_YawAmplitude;
    FLOAT m_YawFrequency;
    FLOAT m_MaxSpeedPitchAmplitude;
    FLOAT m_MaxSpeedPitchFrequency;
    FLOAT m_MaxSpeedYawAmplitude;
    FLOAT m_MaxSpeedYawFrequency;
    FLOAT m_MinSpeedPitchAmplitude;
    FLOAT m_MinSpeedPitchFrequency;
    FLOAT m_MinSpeedYawAmplitude;
    FLOAT m_MinSpeedYawFrequency;
};

struct tPegasus {
    FLOAT m_SpeedMultiplier;
    FLOAT m_SafeZoneBuffer;
    FLOAT m_MeleeSuckBackSpeed;
    FLOAT m_SafeZoneRatio;
    FLOAT m_MatchPegMotionFarDist;
    FLOAT m_MatchPegMotionNearDist;
    FLOAT m_LocalMaxSpeedX;
    FLOAT m_LocalMaxSpeedY;
    FLOAT m_LocalMaxAngleX;
    FLOAT m_LocalMaxAngleY;
    FLOAT m_ReticleDamp;
    FLOAT m_ReticleSpeed;
    FLOAT m_ReticleEdge;
    FLOAT m_ReticleInitialPosX;
    FLOAT m_ReticleInitialPosY;
    FLOAT m_ReticleSize;
    FLOAT m_ReticleDepth;
    FLOAT m_BoostRegain;
    FLOAT m_MinimumBoost;
    FLOAT m_FOVPrevailingAngle;
    FLOAT m_FOVPrevailingSpeed;
    FLOAT m_FOVMaxSpeedAngle;
    FLOAT m_FOVMaxSpeed;
    FLOAT m_FOVMinSpeedAngle;
    FLOAT m_FOVMinSpeed;
    struct tCamShake m_PegasusCamShake;
    struct tCamShake m_CSCamShake;
    struct tCamShake m_ProjCamShake;
    struct tCamShake m_MeleeCamShake;
    FLOAT m_MaxSpeedWingFlutterMult;
    FLOAT m_MinSpeedWingFlutterMult;
    FLOAT m_EffectFrameScale;
};

struct tIcarusWings {
    UINT32 m_WingsGOName;
    UINT32 m_JointName;
    UINT32 m_WingsExitAnim;
    FLOAT m_WingsExitAnimPlaybackSpeed;
    FLOAT m_Scale;
    FLOAT m_Stage1Begin;
    FLOAT m_Stage2Begin;
    FLOAT m_Stage3Begin;
    FLOAT m_Stage4Begin;
    FLOAT m_Stage5Begin;
    FLOAT m_Stage6Begin;
    FLOAT m_EffectBegin;
    FLOAT m_EffectBeginModulate;
    FLOAT m_EffectEndModulate;
    FLOAT m_EffectStageModulate;
    FLOAT m_EffectStageModulateTime;
    FLOAT m_NoBankAngle;
    FLOAT m_MaxBankAngle;
    FLOAT m_BlendSetDamping;
};

struct tHermesShoes {
    FLOAT m_TimeScale;
    FLOAT m_SubWeaponDrainRate;
    FLOAT m_FadeInTime;
    FLOAT m_FadeOutTime;
    UINT32 m_StartSound;
    UINT32 m_LoopSound;
    UINT32 m_EndSound;
};

struct tBloodSplats {
    FLOAT m_Offset;
    FLOAT m_Cone;
    FLOAT m_Impulse;
    FLOAT m_Gravity;
    FLOAT m_NominalDistance;
    FLOAT m_NominalParticles;
    FLOAT m_NominalSize;
    FLOAT m_FallTime;
    FLOAT m_EmitTime;
    FLOAT m_ClampSpreadSize;
    FLOAT m_ClampParticleSize;
    INT16 m_ClampNumParticles;
    undefined field12_0x2e;
    undefined field13_0x2f;
    UINT32 m_ParticleGOName;
};

struct tWadSizeTable {
    UINT32 *m_WadNameList;
    INT32 *m_HeapSizeList;
};

typedef struct tGlobal {
    INT16 *m_MaxHitPointsList;
    INT16 *m_MaxMagicList;
    INT16 *m_MaxSubWeaponList;
    FLOAT m_TargetingRange;
    FLOAT m_ManualTargetingRange;
    INT8 m_DeathsBeforeEasyOffer;
    INT8 m_ShardsPerLevel;
    undefined field7_0x16;
    undefined field8_0x17;
    FLOAT m_DeathMenuTime;
    FLOAT m_HitCounterResetTime;
    FLOAT m_MeterBarHoldTime;
    FLOAT m_WiggleMeterDrain;
    FLOAT m_FrozenInvulnerableTime;
    FLOAT m_StatueVerticalBreakSpeed;
    FLOAT m_LowHealthThreshold;
    FLOAT m_LowHealthMinFreq;
    FLOAT m_LowHealthMinVolume;
    FLOAT m_LowHealthMaxFreq;
    FLOAT m_LowHealthDeathFreq;
    FLOAT m_LowHealthDeathTimer;
    undefined field21_0x48;
    undefined field22_0x49;
    undefined field23_0x4a;
    undefined field24_0x4b;
    undefined field25_0x4c;
    undefined field26_0x4d;
    undefined field27_0x4e;
    undefined field28_0x4f;
    struct tColor__1_5326 m_ReticleValidTint;
    struct tColor__1_5326 m_ReticleInvalidTint;
    FLOAT m_BladeDamping;
    FLOAT m_BladeScaleOnBack;
    FLOAT m_BladeScaleInHand;
    FLOAT m_BladeScaleOutHand;
    FLOAT m_BladeCollisionTolerance;
    FLOAT m_ChainMaxLength;
    FLOAT m_ChainSegmentLength;
    FLOAT m_ChainLinkDiameter;
    FLOAT m_ChainGlowDiameter;
    FLOAT m_ChainShadowDiameter;
    FLOAT m_ControlTweenSafety;
    FLOAT m_ControlTweenSpeed;
    FLOAT m_ControlTweenThreshold;
    struct tWeapon m_Weapon;
    struct tCostume m_Costume;
    struct tGodMode m_GodMode;
    struct tBonusMilestones m_BonusMilestones;
    struct tDifficulty m_Difficulty;
    struct tBone__1_6212 m_Bone;
    struct tHammer__1_6229 m_Hammer;
    struct tMedusa__1_6248 m_Medusa;
    struct tOlympus__1_6265 m_Olympus;
    struct tIce m_Ice;
    struct tLightning m_Lightning;
    struct tWind m_Wind;
    struct tEarth m_Earth;
    struct tPegasus m_Pegasus;
    struct tIcarusWings m_IcarusWings;
    struct tHermesShoes m_HermesShoes;
    struct tBloodSplats m_BloodSplats;
    struct tDecalInfo *m_DecalList;
    struct tWadSizeTable m_WadSizeTable;
    INT32 m_HeroIOP;
    INT32 m_HeroSPU;
    INT32 m_UpgradeIOP;
    INT32 m_UpgradeSPU;
    char *m_FirstLevel;
    undefined field68_0x2e4;
    undefined field69_0x2e5;
    undefined field70_0x2e6;
    undefined field71_0x2e7;
    undefined field72_0x2e8;
    undefined field73_0x2e9;
    undefined field74_0x2ea;
    undefined field75_0x2eb;
    undefined field76_0x2ec;
    undefined field77_0x2ed;
    undefined field78_0x2ee;
    undefined field79_0x2ef;
    struct tColor__1_5326 m_FlashMsg1Color;
    struct tColor__1_5326 m_FlashMsg2Color;
    FLOAT m_FlashMsg1Slant;
    FLOAT m_FlashMsg2Slant;
    FLOAT m_FlashMsgRate;
    undefined field85_0x31c;
    undefined field86_0x31d;
    undefined field87_0x31e;
    undefined field88_0x31f;
} tGlobal;
#endif
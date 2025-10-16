#ifndef DCDEFINITIONS_H
#define DCDEFINITIONS_H

#include "type.h"
#include "gohandledb.h"
#include "tmovesystem.h"
#include "tmove.h"

typedef UINT32 anmPlayer;

typedef struct tStage__1_6300_ {
    FLOAT m_BlastConeTopRadius;
    FLOAT m_BlastConeBaseRadius;
    FLOAT m_BlastReach;
    FLOAT m_BlastMagicAmount;
    FLOAT m_BlastDamage;
    INT8 m_BlastHitContext;
    undefined field6_0x15;
    struct tImpulse_ m_BlastImpulse;
    FLOAT m_ShieldMaxTime;
    FLOAT m_ShieldMaxDamage;
    INT8 m_ShieldMaxShards;
    INT8 m_ShieldMinShards;
    undefined field12_0x26;
    undefined field13_0x27;
    FLOAT m_ShieldShardVelocity;
    FLOAT m_ShieldDamagePerSecond;
    FLOAT m_ShieldDamageFreq;
    struct tCameraShake_ *m_ShieldCsh;
    struct tForceFeedback *m_ShieldFfb;
    FLOAT m_ShieldRadius;
    FLOAT m_ShieldMagicAmount;
    INT8 m_ShieldHitContext;
    undefined field22_0x45;
    struct tImpulse_ m_ShieldImpulse;
    UINT32 m_ShieldSound;
    FLOAT m_CrushMagicAmount;
    FLOAT m_CrushCncAnimPos;
    FLOAT m_CrushCncForwardOffset;
    struct tConcussion_ *m_CrushCnc;
    UINT8 m_Flags;
    undefined field30_0x61;
    undefined field31_0x62;
    undefined field32_0x63;
} tStage__1_6300;

typedef struct tCameraShake_ {
    FLOAT m_Duration;
    FLOAT m_AngleAmplitude;
    FLOAT m_PosAmplitude;
    FLOAT m_Frequency;
} tCameraShake;

typedef struct tModifiers_ {
    FLOAT m_Bias;
    FLOAT m_Scale;
    UINT8 m_ParameterMask;
    UINT8 m_Operator;
    INT8 m_Input;
    undefined field5_0xb;
} tModifiers;

typedef struct FLOAT16_ {
    UINT16 _value;
} FLOAT16;

typedef struct tVector3__1_5333_ {
    struct FLOAT16_ m_X;
    struct FLOAT16_ m_Y;
    struct FLOAT16_ m_Z;
} tVector3__1_5333;

typedef struct tIce_ {
    tStage__1_6300 *m_StageList;
} tIce;

typedef struct tBonus_ {
    INT16 m_PowerUpPoints;
    INT16 m_MessageIdx;
    UINT32 m_IncStat;
} tBonus;

typedef struct tStage__1_6205_ {
    FLOAT m_DamageMult;
} tStage__1_6205;

typedef struct tColor__1_5326_ {
    FLOAT m_R;
    FLOAT m_G;
    FLOAT m_B;
    FLOAT m_A;
} tColor__1_5326;

typedef struct tStage__1_6326_ {
    FLOAT m_DamagePerSecond;
    FLOAT m_MagicAmount;
    FLOAT m_Duration;
    FLOAT m_Reach;
    UINT8 m_Flags;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    struct tColor__1_5326_ m_Tint;
    INT8 m_HitContext;
    INT8 m_DamageFreq;
    undefined field23_0x32;
    undefined field24_0x33;
    FLOAT m_MashDamageScale;
    FLOAT m_MashDamageFreqScale;
    FLOAT m_MashDischargeDamageScale;
    FLOAT m_MashReachScale;
    FLOAT m_MashCoilVelocityScale;
    FLOAT m_MashMaxSpin;
    FLOAT m_MashometerDrainRate;
    FLOAT m_MashometerMax;
    FLOAT m_CoilDamagePerHit;
    FLOAT m_CoilVelocity;
    FLOAT m_CoilHomingAmount;
    INT8 m_CoilHitContext;
    undefined field37_0x61;
    undefined field38_0x62;
    undefined field39_0x63;
    FLOAT m_DischargeDamage;
    INT8 m_DischargeHitContext;
    undefined field42_0x69;
    undefined field43_0x6a;
    undefined field44_0x6b;
    undefined field45_0x6c;
    undefined field46_0x6d;
    undefined field47_0x6e;
    undefined field48_0x6f;
} tStage__1_6326;

typedef struct tDecalInfo_ {
    UINT32 m_ParticleName;
    FLOAT m_ScaleX;
    FLOAT m_ScaleY;
    UINT8 m_Shape;
    UINT8 m_Texture;
    undefined field5_0xe;
    undefined field6_0xf;
} tDecalInfo;

typedef struct tIcarusWings_ {
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
} tIcarusWings;

typedef struct tConcussion_ {
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
    struct tCollision_ *m_Collision;
    UINT8 m_Type;
    UINT8 m_Flags;
    undefined field13_0x22;
    undefined field14_0x23;
} tConcussion;

typedef struct tImpulse_ {
    FLOAT16 m_Away;
    FLOAT16 m_Up;
    FLOAT16 m_Right;
} tImpulse;

typedef struct tMaterialFX_ {
    struct tMaterialFX_ *m_UnderwaterAlt;
    struct tCameraShake *m_HitCameraShake;
    UINT32 m_HitEffect;
    UINT32 m_JumpLandEffect;
    UINT32 m_RunDustEffect;
    UINT32 m_SliceHitEffect;
    UINT32 m_SliceHitSound;
    UINT32 m_FootSound;
    tVector3__1_5333 m_Movement;
    INT8 m_ArrowSoundIdx;
    UINT8 m_Flags;
} tMaterialFX;

typedef struct tStage__1_6188_ {
    FLOAT m_DamageMult;
    FLOAT m_AIDamageMult;
    FLOAT m_AIRecoveryTimeMult;
} tStage__1_6188;

typedef struct tArrow_ {
    FLOAT m_LifeSpan;
    FLOAT m_StuckTime;
    FLOAT m_Impulse;
    FLOAT m_Velocity;
    FLOAT m_HomingAmount;
    FLOAT m_Gravity;
    char *m_ArrowGOName;
    char *m_TrailGOName;
    char *m_UWTrailGOName;
    char *m_HitEffectGOName;
    char *m_HitSheetEffectGOName;
    char *m_BlockSound;
    char **m_HitSoundList;
    struct tCameraFilter *m_BrightCameraFilter;
    struct tCameraFilter *m_DarkCameraFilter;
    INT16 m_FogTemplate;
    INT8 m_FlashFreq;
    undefined field17_0x3f;
    FLOAT m_FogAndFlashDuration;
    INT8 m_Context;
    undefined field20_0x45;
    undefined field21_0x46;
    undefined field22_0x47;
    struct tConcussion *m_Concussion;
    FLOAT m_Damage;
    struct tMaterialFX *m_MFXTemplate;
    struct tImpulse_ m_GroundImpulse;
    struct tImpulse_ m_AirImpulse;
    struct tImpulse_ m_BlockImpulse;
    UINT8 m_Flags;
    undefined field30_0x67;
} tArrow;

typedef struct tHammer__1_6229_ {
    struct tStage__1_6205 *m_StageList;
} tHammer__1_6229;

typedef struct tArrowEmitter_ {
    UINT8 m_Flags;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct tArrow *m_Arrow;
    INT8 m_Count;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    FLOAT m_AccuracyRadius;
    FLOAT m_SpreadAngle;
    FLOAT m_MuzzleRadius;
    char *m_AimJoint;
    tVector3__1_5333 m_AimJointDir;
    undefined field14_0x22;
    undefined field15_0x23;
} tArrowEmitter;

typedef struct tLightning_ {
    UINT32 m_HitSound;
    struct tImpulse_ m_GroundImpulse;
    struct tImpulse_ m_AirImpulse;
    struct tImpulse_ m_DischargeImpulse;
    undefined field4_0x16;
    undefined field5_0x17;
    struct tStage__1_6326_ *m_StageList;
} tLightning;

typedef struct tHermesShoes_ {
    FLOAT m_TimeScale;
    FLOAT m_SubWeaponDrainRate;
    FLOAT m_FadeInTime;
    FLOAT m_FadeOutTime;
    UINT32 m_StartSound;
    UINT32 m_LoopSound;
    UINT32 m_EndSound;
} tHermesShoes;

typedef struct tWeapon_ {
    struct tStage__1_6114_ *m_StageList;
} tWeapon;

typedef struct tCostume_ {
    struct tStage__1_6154_ *m_StageList;
} tCostume;

typedef struct tDifficulty_ {
    struct tStage__1_6188_ *m_StageList;
} tDifficulty;

typedef struct tOlympus__1_6265_ {
    struct tStage__1_6205_ *m_StageList;
} tOlympus__1_6265;

typedef struct tWadSizeTable_ {
    UINT32 *m_WadNameList;
    INT32 *m_HeapSizeList;
} tWadSizeTable;

typedef struct tCamShake_ {
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
} tCamShake;

typedef struct tPegasus_ {
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
    tCamShake m_PegasusCamShake;
    tCamShake m_CSCamShake;
    tCamShake m_ProjCamShake;
    tCamShake m_MeleeCamShake;
    FLOAT m_MaxSpeedWingFlutterMult;
    FLOAT m_MinSpeedWingFlutterMult;
    FLOAT m_EffectFrameScale;
} tPegasus;

typedef struct tStage__1_6239_ {
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

typedef struct tMedusa__1_6248_ {
    tStage__1_6239 *m_StageList;
} tMedusa__1_6248;

typedef struct tEarth_ {
    tStage__1_6276 *m_StageList;
} tEarth;

typedef struct tStage__1_6350_ {
    FLOAT m_GustMagicAmount;
    struct tArrowEmitter_ *m_GustEmitter;
    FLOAT m_GustPlaybackSpeed;
    FLOAT m_ChargeGustMagicAmount;
    struct tArrowEmitter_ *m_ChargeGustEmitter;
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
    tImpulse m_TornadoImpulse;
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
    tImpulse m_TempestImpulse;
    UINT8 m_Flags;
    undefined field29_0x69;
    undefined field30_0x6a;
    undefined field31_0x6b;
} tStage__1_6350;

typedef struct tWind_ {
    tStage__1_6350 *m_StageList;
} tWind;

typedef struct tBloodSplats_ {
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
} tBloodSplats;

typedef struct tStage__1_6134_ {
    tColor__1_5326 m_TrailTint;
    tColor__1_5326 m_Tint;
    FLOAT m_MeterDrain;
    FLOAT m_DamageMult;
    FLOAT m_EnemyDamageMult;
    FLOAT m_OnThreshold;
    FLOAT m_OffThreshold;
    UINT32 m_LoopSound;
    UINT32 m_EndSound;
    FLOAT m_EndThreshold;
} tStage__1_6134;

typedef struct tGodMode_ {
    tStage__1_6134 *m_StageList;
} tGodMode;

typedef struct tBone__1_6212_ {
    tStage__1_6205 *m_StageList;
} tBone__1_6212;

typedef struct tBonusMilestones_ {
    INT16 m_Threshold;
    undefined field1_0x2;
    undefined field2_0x3;
    tBonus **m_BonusList;
    INT16 *m_HitList;
} tBonusMilestones;

typedef struct tGlobal_ {
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
    tColor__1_5326 m_ReticleValidTint;
    tColor__1_5326 m_ReticleInvalidTint;
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
    tWeapon m_Weapon;
    tCostume m_Costume;
    tGodMode m_GodMode;
    tBonusMilestones m_BonusMilestones;
    tDifficulty m_Difficulty;
    tBone__1_6212 m_Bone;
    tHammer__1_6229 m_Hammer;
    tMedusa__1_6248 m_Medusa;
    tOlympus__1_6265 m_Olympus;
    tIce m_Ice;
    tLightning m_Lightning;
    tWind m_Wind;
    tEarth m_Earth;
    tPegasus m_Pegasus;
    tIcarusWings m_IcarusWings;
    tHermesShoes m_HermesShoes;
    tBloodSplats m_BloodSplats;
    tDecalInfo *m_DecalList;
    tWadSizeTable m_WadSizeTable;
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
    tColor__1_5326 m_FlashMsg1Color;
    tColor__1_5326 m_FlashMsg2Color;
    FLOAT m_FlashMsg1Slant;
    FLOAT m_FlashMsg2Slant;
    FLOAT m_FlashMsgRate;
    undefined field85_0x31c;
    undefined field86_0x31d;
    undefined field87_0x31e;
    undefined field88_0x31f;
} tGlobal;

typedef struct tCollision_ {
    FLOAT16 m_On;
    FLOAT16 m_Off;
    tImpulse m_GroundImpulse;
    tImpulse m_AirImpulse;
    tImpulse m_BlockImpulse;
    FLOAT16 m_Damage;
    UINT8 m_Part;
    UINT8 m_Flags;
    INT8 m_Partitions;
    undefined field9_0x1b;
} tCollision;

typedef struct tStage__1_6114_ {
    tColor__1_5326 m_TrailTint;
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

typedef struct tCameraFilter_ {
    INT32 m_ID; /* Inherited from tEffectParm */
    INT32 m_Type; /* Inherited from tEffectParm */
    INT32 m_Script; /* Inherited from tEffectParm */
    INT32 m_WadContext; /* Inherited from tEffectParm */
    tColor__1_5326 m_Top;
    tColor__1_5326 m_Middle;
    tColor__1_5326 m_Bottom;
    FLOAT m_TopPoint;
    FLOAT m_MiddlePoint;
    FLOAT m_BottomPoint;
    UINT32 m_BlendMode;
} tCameraFilter;

typedef struct tStage__1_6154_ {
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

typedef struct tStage__1_6276_ {
    struct tConcussion_ *m_CncCh0;
    FLOAT m_Ch1Time;
    struct tConcussion_ *m_CncCh1;
    FLOAT m_Ch2Time;
    struct tConcussion_ *m_CncCh2;
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
    struct tConcussion_ *m_RainRockCnc;
    struct tCameraShake_ *m_RainRockCsh;
    struct tForceFeedback_ *m_RainRockFfb;
    UINT8 m_Flags;
    undefined field26_0x59;
    undefined field27_0x5a;
    undefined field28_0x5b;
} tStage__1_6276;

typedef struct tForceFeedback_ {
    FLOAT m_Duration;
    FLOAT m_SMFrequency;
    FLOAT m_SMAmplitude;
    FLOAT m_SMPhase;
    FLOAT m_SMBias;
    UINT8 m_SMWaveform;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
    FLOAT m_LMFrequency;
    FLOAT m_LMAmplitude;
    FLOAT m_LMPhase;
    FLOAT m_LMBias;
    UINT8 m_LMWaveform;
    undefined field14_0x29;
    undefined field15_0x2a;
    undefined field16_0x2b;
    FLOAT m_Attack;
    FLOAT m_Decay;
    FLOAT m_Sustain;
    FLOAT m_Release;
    struct tModifiers *m_ModifierList;
} tForceFeedback;

typedef struct tBranch_ {
    struct tMove__1_5844_ *m_Move;
    struct tMaterialFX_ *m_MaterialFX;
    UINT16 m_Flags;
    undefined field3_0xa;
    undefined field4_0xb;
    UINT32 m_IgnoreFlags;
    FLOAT16 m_On;
    FLOAT16 m_Off;
    FLOAT16 m_StartPos;
    INT16 m_TargetHealthMin;
    INT16 m_TargetHealthMax;
    INT16 m_HealthMin;
    INT16 m_HealthMax;
    INT8 m_EnemyID;
    INT8 m_EnemyContext;
    UINT8 m_Event;
    UINT8 m_EventMod;
    UINT8 m_Joystick;
    UINT8 m_Item;
    INT8 m_WeaponLevelMin;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
} tBranch;

typedef struct tActionBase_ {
    UINT8 m_Type;
    UINT8 m_Flags;
    UINT8 m_Condition;
    INT8 m_WeaponLevelMin;
    FLOAT16 m_On;
    FLOAT16 m_Off;
} tActionBase;

typedef struct tCombat_ {
    FLOAT m_HitPoints;
    FLOAT m_MaxHitPoints;
    FLOAT m_DamageMultiplier;
    INT8 m_ID;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    char  *m_TargetJoint;
    FLOAT m_TargetWeight;
    FLOAT m_ReticleScale;
    FLOAT m_ReticleYOffset;
    FLOAT *m_CircleThresholdList;
    FLOAT m_CircleScale;
    FLOAT m_CircleXOffset;
    FLOAT m_CircleYOffset;
    FLOAT m_CircleZOffset;
    FLOAT m_ImpulseAwayScale;
    FLOAT m_ImpulseUpScale;
    FLOAT m_ImpulseRightScale;
    FLOAT m_AutoAimDampingFast;
    FLOAT m_AutoAimDampingMedium;
    FLOAT m_AutoAimDampingSlow;
    FLOAT m_SynchDampingFast;
    FLOAT m_SynchDampingMedium;
    FLOAT m_SynchDampingSlow;
    UINT32 m_Flags;
} tCombat;

typedef struct tSynchBranch_ {
    struct tMove__1_5844_ *m_Move;
    struct tMaterialFX_ *m_MaterialFX;
    UINT16 m_Flags;
    undefined field3_0xa;
    undefined field4_0xb;
    UINT32 m_IgnoreFlags;
    struct FLOAT16_ m_On;
    struct FLOAT16_ m_Off;
    struct FLOAT16_ m_StartPos;
    INT16 m_TargetHealthMin;
    INT16 m_TargetHealthMax;
    INT16 m_HealthMin;
    INT16 m_HealthMax;
    INT8 m_EnemyID;
    INT8 m_EnemyContext;
    UINT8 m_Event;
    UINT8 m_EventMod;
    UINT8 m_Joystick;
    UINT8 m_Item;
    INT8 m_WeaponLevelMin;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
} tSynchBranch;

typedef struct tBranchQueEntry_ {
    tBranch *m_pBranch;
    FLOAT m_fMustComplete;
} tBranchQueEntry;

typedef struct tBranchQue_
{
    struct tBranchQueEntry_ *_pQue;
    UINT8 _uSize;
    UINT8 _uReadIdx;
    UINT8 _uWriteIdx;
    UINT8 _bMemAllocated;
} tBranchQue;

typedef struct tCollisionInfo_ {
    goHandle m_hHandle;
    tCollision *m_pColl;
    INT32 m_iPartition;
} tCollisionInfo;

typedef struct tFlags_
{
    uchar m_uBits[16];
} tFlags;

typedef struct tActionHitPause_ {
    UINT8 m_Type;
    UINT8 m_Flags;
    UINT8 m_Condition;
    INT8 m_WeaponLevelMin;
    FLOAT16 m_On;
    FLOAT16 m_Off;
    FLOAT16 m_Duration;
} tActionHitPause;

typedef struct tMove__1_16070_ {
    tMoveSystem *m_pMoveSystem;
    anmPlayer *m_pAnmPlayer;
    tActionHitPause *m_pHitPause;
    INT32 m_iCurrentContext;
    tFlags m_ButtonHoldFlags;
    tFlags m_ActionFlags;
    stdCList m_ActionScriptList;
    UINT32 m_uLastUpdateActionsFrame;
    INT8 m_iNumKills;
    INT8 m_iNumHits;
    INT8 m_iNumBlocks;
    INT8 m_iNumCollisions;
    UINT32 m_uLastKillFrame;
    UINT32 m_uLastHitFrame;
    UINT32 m_uLastBlockedFrame;
    FLOAT m_fOverrideDamage;
    tBranch *m_pBranch;
    struct tMove__1_5844_ *m_pMove;
    tCollisionInfo m_aCollisions[32];
    UINT32 m_uFlags;
    tBranchQue m_BranchQue;
    tBranchQueEntry m_aBranchQueMem[8];
} tMove__1_16070;

typedef struct tNavBank_ {
    tMotionP *m_MotionP;
    tBranch *m_Stand;
    tBranch *m_Walk;
    tBranch *m_Jump;
    tBranch *m_VJump;
    tBranch *m_Fall;
    tBranch *m_FallLoop;
    tBranch *m_HighFall;
    tBranch *m_HighFallLoop;
    tBranch *m_VFall;
    tBranch *m_VFallLoop;
    tBranch *m_Land;
    tBranch *m_HighLand;
    tBranch *m_VLand;
    tBranch *m_TurnOnSpot;
    tBranch *m_Strafe;
    tBranch *m_StrafeIdle;
    tBranch *m_FlyH;
    tBranch *m_FlyF;
    tBranch *m_FlyR;
    tBranch *m_FlyB;
    tBranch *m_FlyL;
    tBranch *m_WallHang;
    tBranch *m_WallHangCatch;
    tBranch *m_WallHangR;
    tBranch *m_WallHangL;
    tBranch *m_WJump;
    tBranch *m_DblJump;
    tBranch *m_VDblJump;
    tBranch *m_DblFall;
    tBranch *m_VDblFall;
    tBranch *m_Climb;
    tBranch *m_ClimbIdle;
    tBranch *m_ClimbAL;
    tBranch *m_ClimbAR;
    tBranch *m_ClimbALIdle;
    tBranch *m_ClimbARIdle;
    tBranch *m_ClimbAU;
    tBranch *m_ClimbAD;
    tBranch *m_ClimbAUIdle;
    tBranch *m_ClimbADIdle;
    tBranch *m_ClimbALJump;
    tBranch *m_ClimbARJump;
    tBranch *m_ClimbAUJump;
    tBranch *m_ClimbADJump;
    tBranch *m_Slide;
    tBranch *m_Swim;
    tBranch *m_SwimIdle;
    tBranch *m_Tread;
    tBranch *m_TreadSwim;
    tBranch *m_DiveDashC;
    tBranch *m_DiveDashCI;
    tBranch *m_DiveDash;
    tBranch *m_Dive1;
    tBranch *m_Dive2;
    tBranch *m_BalanceWalk;
    tBranch *m_BalanceCatch;
    tBranch *m_BalancePullUpL;
    tBranch *m_BalancePullUpR;
    tBranch *m_WallPullUp;
    tBranch *m_WallFront;
    tBranch *m_WallFrontR;
    tBranch *m_WallFrontL;
    tBranch *m_WallBack;
    tBranch *m_WallBackR;
    tBranch *m_WallBackL;
    tBranch *m_WallBackDrop;
    tBranch *m_WallFrontDrop;
    tBranch *m_Rope;
    tBranch *m_RopeU;
    tBranch *m_RopeD;
    tBranch *m_RSlide;
    tBranch *m_BRope;
    tBranch *m_BRopeF;
    tBranch *m_ZipLine;
    tBranch *m_Ladder;
    tBranch *m_LadderU;
    tBranch *m_LadderD;
    tBranch *m_LadderJumpU;
    tBranch *m_LDis1;
    tBranch *m_LDis2;
    tBranch *m_LSlide;
    tBranch *m_PushI;
    tBranch *m_PushL;
    tBranch *m_PushR;
    tBranch *m_PushF;
    tBranch *m_PushB;
    tBranch *m_StartKickBox;
    tBranch *m_KickBoxIdle;
    tBranch *m_KickBox;
    tBranch *m_CrankIdle;
    tBranch *m_CrankPush;
    tBranch *m_CrankPull;
    tBranch *m_CrankPushL;
    tBranch *m_CrankPullL;
    tBranch *m_CrankPushR;
    tBranch *m_CrankPullR;
    tBranch *m_Lever;
    tBranch *m_UWLever;
    tBranch *m_IcarusEnter;
    tBranch *m_IcarusDrift;
    tBranch *m_IcarusPlummet;
    tBranch *m_IcarusPlummetLoop;
    tBranch *m_IcarusPlummetLand;
    tBranch *m_IcarusLand;
    tBranch *m_CeilingStand;
    tBranch *m_CeilingWalk;
    tBranch *m_CeilingLand;
    tBranch *m_CeilingJump;
    tBranch *m_PegasusIdle;
    tBranch *m_BCtoWH;
    tBranch *m_GrappleEnter;
    tBranch *m_GrappleU;
    tBranch *m_GrappleD;
    tBranch *m_GrappleJumpF;
    tBranch *m_GrappleJumpB;
    tBranch *m_GrappleSWStart;
    tBranch *m_GrappleSWIdle;
    tBranch *m_GrappleSW1;
    tBranch *m_GrappleSW2;
    tBranch *m_GrappleSW3;
    tBranch *m_GrappleSW4;
    tBranch *m_GrappleCircle;
    tBranch *m_CeilingToClimb;
    tBranch *m_ClimbToCeiling;
    tBranch *m_UnderhangToClimb;
    tBranch *m_ClimbToUnderhang;
    tBranch *m_QSStand;
    tBranch *m_QSWalk;
    tBranch *m_QSPullUp;
    tBranch *m_QSEnter;
} tNavBank;

typedef struct tMotionP_ {
    FLOAT m_RunMinSpeed;
    FLOAT m_RunMaxSpeed;
    FLOAT m_RunAcc;
    FLOAT m_RunDec;
    FLOAT m_GroundTurnDamping;
    FLOAT m_LeanTurnDamping;
    FLOAT m_StrafeAcc;
    FLOAT m_StrafeDec;
    FLOAT m_StrafeRunMinSpeed;
    FLOAT m_StrafeRunMaxSpeed;
} tMotionP;

typedef struct tSoldierBase_ {
    char *m_GOName;
    FLOAT m_PlaybackSpeedScale;
    FLOAT m_TweenTimeScale;
    UINT8 m_SoldierType;
    undefined field4_0xd;
    UINT16 m_Flags;
    struct tAttachments **m_AttachmentList;
    struct tCameraTarget *m_Targets;
    FLOAT m_Scale;
    FLOAT m_Mass;
    FLOAT m_Friction;
    FLOAT m_Radius;
    FLOAT m_Height;
    FLOAT m_Buoyancy;
    FLOAT m_StepHeight;
    FLOAT m_TerminalVel;
    FLOAT m_HighFallVel;
    FLOAT m_InAirAcc;
    FLOAT m_DeathFadeToBlackTime;
    FLOAT m_DeathFadeBlackToGoneTime;
    char *m_DeathEffect;
    FLOAT m_FreezeResistance;
    struct tBranch *m_FreezeMove;
    char *m_FrozenGOName;
    char *m_FrozenFXName;
} tSoldierBase;

typedef struct tAIBase_ {
    UINT8 m_Type;
    undefined field1_0x1;
    UINT16 m_Flags;
} tAIBase;


typedef struct tShard_ {
    UINT8 m_Flags;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    UINT32 m_GOName;
    UINT32 m_FXHide;
    UINT32 m_FXShow;
    INT32 m_ContextFilter;
    INT32 m_Context;
    FLOAT m_HitResistance;
    FLOAT m_Size;
    FLOAT m_Speed;
    FLOAT m_Precision;
    FLOAT m_Inertia;
    FLOAT m_InertiaRetainHi;
    FLOAT m_HoveringSpeed;
    FLOAT m_HoveringSpeedRange;
    FLOAT m_HoveringInertia;
} tShard;

typedef struct tShield_ {
    UINT16 m_Flags;
    undefined field1_0x2;
    undefined field2_0x3;
    FLOAT m_Duration;
    FLOAT m_Radius;
    FLOAT m_HitResistance;
    INT32 m_ContextFilter;
    UINT32 m_GOAuraName;
    UINT32 m_Sound;
    INT8 m_NbShards;
    INT8 m_NbMinShards;
    INT8 m_NbFreedShardsOnHit;
    undefined field12_0x1f;
    FLOAT m_ReleasedShardRadius;
    FLOAT m_ShardTargetingRadius;
    tShard m_ShardInfo;
} tShield;

typedef struct tCreature_ {
    tSoldierBase *m_Soldier;
    tAIBase *m_AI;
    tCombat *m_Combat;
    tShield *m_Shield;
    struct tMove__1_5844_ **m_MoveList;
    tBranch **m_BranchList;
    tNavBank **m_NavBankList;
} tCreature;

#endif
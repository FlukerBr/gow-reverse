#ifndef GLOBAL_H
#define GLOBAL_H

#include "stdint.h"
#include "temp.h"

typedef struct _tGlobal
{
    int16_t *m_MaxHitPointsList;
    int16_t *m_MaxMagicList;
    int16_t *MaxSubWeaponList;
    float m_TargetingRange;
    float m_ManualTargetingRange;
    int8_t m_DeathsBeforeEasyOffer;
    int8_t m_ShardsPerLevel;
    float m_DeathMenuTime;
    float m_HitCounterResetTime;
    float m_MeterBarHoldTime;
    float m_WiggleMeterDrain;
    float m_FrozenInvulnerableTime;
    float m_StatueVerticalBreakSpeed;
    float m_LowHealthThreshold;
    float m_LowHealthMinFreq;
    float m_LowHealthMinVolume;
    float m_LowHealthMaxFreq;
    float m_LowHealthDeathFreq;
    float m_LowHealthDeathTimer;
    tColor m_ReticleValidTint;
    tColor m_ReticleInvalidTint;
    float m_BladeDamping;
    float m_BladeScaleOnBack;
    float m_BladeScaleInHand;
    float m_BladeScaleOutHand;
    float m_BladeCollisionTolerance;
    float m_ChainMaxLength;
    float m_ChainSegmentLength;
    float m_ChainLinkDiameter;
    float m_ChainGlowDiameter;
    float m_ChainShadowDiameter;
    float m_ControlTweenSafety;
    float m_ControlTweenSpeed;
    float m_ControlTweenThreshold;
    tWeapon m_Weapon;
    tCostume m_Costume;
    tGodMode m_GodMode;
    tBonusMilestones m_BonusMilestones;
    tDifficulty m_Difficulty;
    tBone m_Bone;
    tHammer m_Hammer;
    tMedusa m_Medusa;
    tOlympus m_Olympus;
    tIce m_Ice;
    tLightning m_Lightning;
    tWind m_Wind;
    tEarth m_Earth;
    tPegasus m_Pegasus;
    tIcaruswings m_Icaruswings;
    tHermesShoes m_HermesShoes;
    tBloodSplats m_BloodSplats;
    tDecalInfo* m_DecalList;
    tWadSizeTable m_WadSizeTable;
    int32_t m_HeroIOP;
    int32_t m_HeroSPU;
    int32_t m_UpgradeIOP;
    int32_t m_UpgradeSPU;
    char *m_FirstLevel;
    tColor m_FlashMsg1Color;
    tColor m_FlashMsg2Color;
    float m_FlashMsg1Slant;
    float m_FlashMsg2S1ant;
    float m_FlashMsgRate;
} tGlobal;


#endif
#ifndef GLOBAL_H
#define GLOBAL_H

#include "structs.h"


uint Global_GetWadContextFromHeapID(int,wadContext *);
uint Global_GetWadGroup(int);
uint Global_GetWadTableIndex(char const *,uint *);
uint Global_SetStateData(void const *);
uint Global_GetStateData(void *);
uint Global_MonthName(int);
uint Global_InitLocalizedStrings(void);
uint Global_InitLocalizedVersion(void);
uint Global_SetLocalizedVersion(int);
uint Global_LocalizationSuffix(int);
uint Global_SetWorldIdleState(uchar);
uint Global_GetWorldIdleState(void);
uint Global_ClearWorldIdle(void);
uint Global_SetWorldIdle(int,int);
uint Global_sm_aMonthNameString;
uint Global_sm_bIdleStack;
uint Global_sm_uAIDamage;
uint Global_sm_uWallHangTimer;
uint Global_sm_uCharPartType;
uint Global_sm_uBitfield3;
uint Global_sm_uBitfield2;
uint Global_sm_uBitfield0;
uint Global_sm_uMaterialFX;
uint Global_sm_uDamage;
uint Global_sm_uBitfield1;
uint Global_sm_pGlobalTweaks;
uint Global_sm_pDifficultyStrings;
uint Global_sm_pEmptyString;
uint Global_sm_iLocalizedVersion;
uint Global_sm_uPlayTime;
uint Global_sm_bWorldIdle;
uint Global_sm_iDifficulty;
uint Global_sm_bVid480P;
uint Global_sm_bWideScreen;
uint Global_sm_fCosWalkableSlopeAngle;
uint Global_sm_fWalkableSlopeAngle;
uint Global_sm_fWaterViscosity;
uint Global_sm_fGravity;
uint Global_sm_bLoadSavedState;
uint Global_sm_bSecondPlayThru;
uint Global_sm_bAllowHitCounterResetTimeMult;
uint Global_sm_bAllowWeaponOrbMult;
uint Global_sm_bAllowLightning;
uint Global_sm_bAllowMedusaBlades;
uint Global_sm_bInfiniteGodMode;
uint Global_sm_bInfiniteMagic;
uint Global_sm_bInvulnerableMode;
uint Global_sm_bFreeCombat;
uint Global_sm_bChallengeMode;


#endif
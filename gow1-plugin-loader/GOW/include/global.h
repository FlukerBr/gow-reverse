#ifndef GLOBAL_H
#define GLOBAL_H

#include "type.h"
#include "dcdefinitions.h"

extern void Global_SetWorldIdle(int, int);
extern void Global_ClearWorldIdle(void);
extern void Global_GetWorldIdleState(void);
extern void Global_SetWorldIdleState(uchar);
extern void Global_LocalizationSuffix(int);
extern void Global_SetLocalizedVersion(int);
extern void Global_InitLocalizedVersion(void);
extern void Global_InitLocalizedStrings(void);
extern void Global_MonthName(int);
extern void Global_GetStateData(void *);
extern void Global_SetStateData(void const *);

extern UINT32 Global_sm_bAllowDebugMovementMode;
extern UINT32 Global_sm_bInvulnerableMode;
extern UINT32 Global_sm_bEasyKillMode;
extern UINT32 Global_sm_bHideHUDMeters;
extern UINT32 Global_sm_bShowCoords;
extern UINT32 Global_sm_iDefaultGOCap;
extern UINT32 Global_sm_fGravity;
extern UINT32 Global_sm_fWalkableSlopeAngle;
extern UINT32 Global_sm_fCosWalkableSlopeAngle;
extern UINT32 Global_sm_fCircleSoundDelay;
extern UINT32 Global_sm_bWideScreen;
extern UINT32 Global_sm_bVid480P;
extern UINT32 Global_sm_bDeFlicker;
extern UINT32 Global_sm_iDifficulty;
extern UINT32 Global_sm_bWorldIdle;
extern UINT32 Global_sm_iLocalizedVersion;
extern UINT32 Global_sm_pEmptyString;
extern UINT32 Global_sm_pDifficultyStrings;
extern tGlobal Global_sm_pGlobalTweaks;
extern UINT32 Global_sm_uDamage;
extern UINT32 Global_sm_uBitfield1;
extern UINT32 Global_sm_uBitfield0;
extern UINT32 Global_sm_uBitfield2;
extern UINT32 Global_sm_uBitfield3;
extern UINT32 Global_sm_uMaterialFX;
extern UINT32 Global_sm_uCharPartType;
extern UINT32 Global_sm_uWallHangTimer;
extern UINT32 Global_sm_uAIDamage;
extern UINT32 Global_sm_bIdleStack;
extern UINT32 Global_sm_aMonthNameString;

#endif
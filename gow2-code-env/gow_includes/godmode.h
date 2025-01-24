#ifndef GODMODE_H
#define GODMODE_H

#include "structs.h"


uint GodMode_SCR_GodModeComboBlast(goScript *);
uint GodMode_TriggerBranch(goScript *,int);
uint GodMode_GetComboBlastLevel(dc_tGlobal_tGodMode_tStage const *,int,int *);
uint GodMode_SCR_GodModeComboBlastDestructor(goScript *);
uint GodMode_Reset(void);
uint GodMode_Enable(int);
uint GodMode_AttachParts(void);
uint GodMode_FreeResources(void);
uint GodMode_InitResources(void);
uint GodMode_GetGodModeContext(void);
uint GodMode_sm_aJointIdx;
uint GodMode_sm_aParts;
uint GodMode_sm_fReactivateDelay;
uint GodMode_sm_pComboBlastGO;
uint GodMode_sm_pComboBlastTweaks;
uint GodMode_sm_fComboBlastTimeUntilDamage;
uint GodMode_sm_fComboBlastTimer;
uint GodMode_sm_iComboBlastRefCnt;
uint GodMode_sm_bUnloadPending;


#endif
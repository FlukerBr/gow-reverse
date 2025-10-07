#ifndef HAMMER_H
#define HAMMER_H

#include "structs.h"


uint Hammer_SCR_HammerSouls(goScript *);
uint Hammer_TriggerSouls(int,int);
uint Hammer_CreateSouls(dc_tGlobal_tHammer_tStage_tSoul const *,int);
uint Hammer_SCR_HammerSoulsUpdate(goScript *);
uint Hammer_SCR_HammerSoulsUpdateDestructor(goScript *);
uint Hammer_SetUnloadPending(int);
uint Hammer_Update(void);
uint Hammer_Enable(int,int);
uint Hammer_GetHammerContext(void);
uint Hammer_sm_aSouls;
uint Hammer_sm_bPrevJoystickExtreme;
uint Hammer_sm_fTimeSinceLastSoulSpawned;
uint Hammer_sm_pUpdateScript;
uint Hammer_sm_bUnloadPending;


#endif
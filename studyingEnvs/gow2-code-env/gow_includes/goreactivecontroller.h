#ifndef GOREACTIVECONTROLLER_H
#define GOREACTIVECONTROLLER_H

#include "structs.h"


uint goReactiveController_IsBreakable(void);
uint goReactiveController_IsFreezable(void);
uint goReactiveController_IsDead(void);
uint goReactiveController_IsCreatureDead(void);
uint goReactiveController_GetControlSystem(void);
uint goReactiveController_GetStartBranch(void);
uint goReactiveController_RemoveState(void);
uint goReactiveController_RestoreState(void);
uint goReactiveController_GrabState(void);
uint goReactiveController_CSaveState_Set(goReactiveController const *);
uint goReactiveController_GetDamageMultiplier(int);
uint goReactiveController_CancelMoveByName(uint);
uint goReactiveController_ForceMoveByName(uint,int);
uint goReactiveController_ExitState(goReactiveController_eState);
uint goReactiveController_EnterState(goReactiveController_eState,void const *);
uint goReactiveController_IsStateTerminating(goReactiveController_eState);
uint goReactiveController_SwitchToState(goReactiveController_eState,void const *);
uint goReactiveController_UpdateTarget(void);
uint goReactiveController_RunStartBranch(dc_tBranch const *);
uint goReactiveController_ProcessStartBranch(dc_tBranch const *);
uint goReactiveController_DelayAppearance(void);
uint goReactiveController_RemoveWadContext(wadContext *);
uint goReactiveController_Free(goReactiveController *);
uint goReactiveController_Pause(int);
uint goReactiveController_Update(uint);
uint goReactiveController_Create(uint);
uint goReactiveController_Destructor_goReactiveController(void);
uint goReactiveController_goReactiveController(void);
uint goReactiveController_SetTweaks(dc_tCreature const *);
uint goReactiveController_s_TmpSavedState;
uint goReactiveController_s_ReactiveList;
uint goReactiveController_vtbl;


#endif
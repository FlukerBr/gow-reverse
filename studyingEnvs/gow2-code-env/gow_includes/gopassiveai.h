#ifndef GOPASSIVEAI_H
#define GOPASSIVEAI_H

#include "structs.h"


uint goPassiveAI_PassiveAITweaks(void);
uint goPassiveAI_IsBreakable(void);
uint goPassiveAI_IsFreezable(void);
uint goPassiveAI_IsDead(void);
uint goPassiveAI_GetSaveData(void);
uint goPassiveAI_SetSaveData(uchar);
uint goPassiveAI_GetStartBranch(void);
uint goPassiveAI_Destructor_goPassiveAI(void);
uint goPassiveAI_ExitStateI(goReactiveController_eState,int *);
uint goPassiveAI_EnterStateI(goReactiveController_eState,int *,void const *);
uint goPassiveAI_IsStateTerminatingI(goReactiveController_eState,int *);
uint goPassiveAI_Destroy(void);
uint goPassiveAI_UpdateI(uint);
uint goPassiveAI_Init(goClient *,short,short);
uint goPassiveAI_goPassiveAI(void);
uint goPassiveAI_ResetTweaks(void);
uint goPassiveAI___dl(void *);
uint goPassiveAI_Allocate(wadContext *);
uint goPassiveAI_sm_goPassiveAIMultiPool;
uint goPassiveAI_vtbl;


#endif
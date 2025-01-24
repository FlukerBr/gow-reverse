#ifndef GOGRIDAI_H
#define GOGRIDAI_H

#include "structs.h"


uint goGridAI_IsFreezable(void);
uint goGridAI_IsDead(void);
uint goGridAI_GetSaveData(void);
uint goGridAI_SetSaveData(uchar);
uint goGridAI_Destructor_goGridAI(void);
uint goGridAI_ExitStateI(goReactiveController_eState,int *);
uint goGridAI_EnterStateI(goReactiveController_eState,int *,void const *);
uint goGridAI_IsStateTerminatingI(goReactiveController_eState,int *);
uint goGridAI_AllowNewEval(int,float);
uint goGridAI_ActivatePartition(int);
uint goGridAI_ResetTweaks(void);
uint goGridAI_ScriptInterface(goScript *);
uint goGridAI_Destroy(void);
uint goGridAI_UpdateI(uint);
uint goGridAI_Init(goClient *,short,short);
uint goGridAI_goGridAI(void);
uint goGridAI___dl(void *);
uint goGridAI_Allocate(wadContext *);
uint goGridAI_sm_goGridAIMultiPool;
uint goGridAI_vtbl;


#endif
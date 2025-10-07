#ifndef RENFXSCRIPTBASE_H
#define RENFXSCRIPTBASE_H

#include "structs.h"


uint renFXScriptBase_Destructor_renFXScriptBase(void);
uint renFXScriptBase_ManagedPrim_ManagedPrim(void);
uint renFXScriptBase_ProcessManagedPrims(void);
uint renFXScriptBase_StopManagedPrim(dc_tEffectParm *,renFXScriptPrim_PrimPriority,float,float,float);
uint renFXScriptBase_StartManagedPrim(dc_tEffectParm *,renFXScriptPrim_PrimPriority,float,float,float);
uint renFXScriptBase_FindEffectParm_(uint,wadContext *);
uint renFXScriptBase_FindEffectParm(char const *,wadContext *);
uint renFXScriptBase_AddPrim(renFXScriptPrim_PrimPriority,dc_tEffectParm const *,float);
uint renFXScriptBase_renFXScriptBase(uint);
uint renFXScriptBase_RegisterFXScript(renFXScriptBase *,uint);
uint renFXScriptBase_Loader(goScriptParm *);
uint renFXScriptBase_ClearPrims(void);
uint renFXScriptBase_renFXScriptParm_InitParm(void);
uint renFXScriptBase_vtbl;
uint renFXScriptBase_gManagedPrimPool;
uint renFXScriptBase_gPrimPool;
uint renFXScriptBase_gScripts;


#endif
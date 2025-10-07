#ifndef SC_MODULATE_H
#define SC_MODULATE_H

#include "structs.h"


uint SC_Modulate_ScriptInterface(goScript *);
uint SC_Modulate_DestroyScript(goScript *);
uint SC_Modulate_RunScript(goScript *);
uint SC_Modulate_Update(goCreature *,float);
uint SC_Modulate_Initialize(dc_tActionModulate const *);
uint SC_Modulate___dl(void *);
uint SC_Modulate_Allocate(wadContext *);
uint SC_Modulate_sm_SC_ModulateMultiPool;


#endif
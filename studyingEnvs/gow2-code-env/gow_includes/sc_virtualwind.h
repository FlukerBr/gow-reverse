#ifndef SC_VIRTUALWIND_H
#define SC_VIRTUALWIND_H

#include "structs.h"


uint SC_VirtualWind_ScriptInterface(goScript *);
uint SC_VirtualWind_DestroyScript(goScript *);
uint SC_VirtualWind_RunScript(goScript *);
uint SC_VirtualWind_UpdateVirtualZone(goCreature *);
uint SC_VirtualWind_Update(goCreature *);
uint SC_VirtualWind_ProcessAction(goCreature *,dc_tActionVirtualWind const *);
uint SC_VirtualWind_Destructor_SC_VirtualWind(void);
uint SC_VirtualWind_SC_VirtualWind(void);
uint SC_VirtualWind___dl(void *);
uint SC_VirtualWind_Allocate(wadContext *);
uint SC_VirtualWind_sm_SC_VirtualWindMultiPool;


#endif
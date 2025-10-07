#ifndef ENT_GLOBALDATA_H
#define ENT_GLOBALDATA_H

#include "structs.h"


uint Ent_GlobalData_Ent_GlobalData(void);
uint Ent_GlobalData_Constructor(void);
uint Ent_GlobalData_Destructor_Ent_GlobalData(void);
uint Ent_GlobalData_Activate(goGameObject *,MarkerListItem *);
uint Ent_GlobalData_HandleEvent(MarkerListItem *);
uint Ent_GlobalData_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_GlobalData_InitParms(ushort const *,ushort);
uint Ent_GlobalData_vtbl;


#endif
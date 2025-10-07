#ifndef ENT_VISCONTROLLER_H
#define ENT_VISCONTROLLER_H

#include "structs.h"


uint Ent_VisController_Ent_VisController(void);
uint Ent_VisController_Constructor(void);
uint Ent_VisController_Destructor_Ent_VisController(void);
uint Ent_VisController_Activate(goGameObject *,MarkerListItem *);
uint Ent_VisController_HandleEvent(MarkerListItem *);
uint Ent_VisController_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_VisController_InitParms(ushort const *,ushort);
uint Ent_VisController_vtbl;


#endif
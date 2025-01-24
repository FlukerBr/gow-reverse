#ifndef ENT_ENTRYSENSOR_H
#define ENT_ENTRYSENSOR_H

#include "structs.h"


uint Ent_EntrySensor_Ent_EntrySensor(void);
uint Ent_EntrySensor_Constructor(void);
uint Ent_EntrySensor_Destructor_Ent_EntrySensor(void);
uint Ent_EntrySensor_Activate(goGameObject *,MarkerListItem *);
uint Ent_EntrySensor_HandleEvent(MarkerListItem *);
uint Ent_EntrySensor_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_EntrySensor_InitParms(ushort const *,ushort);
uint Ent_EntrySensor_vtbl;


#endif
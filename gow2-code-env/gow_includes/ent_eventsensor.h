#ifndef ENT_EVENTSENSOR_H
#define ENT_EVENTSENSOR_H

#include "structs.h"


uint Ent_EventSensor_Ent_EventSensor(void);
uint Ent_EventSensor_Constructor(void);
uint Ent_EventSensor_Destructor_Ent_EventSensor(void);
uint Ent_EventSensor_Activate(goGameObject *,MarkerListItem *);
uint Ent_EventSensor_HandleEvent(MarkerListItem *);
uint Ent_EventSensor_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_EventSensor_InitParms(ushort const *,ushort);
uint Ent_EventSensor_vtbl;


#endif
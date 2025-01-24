#ifndef ENT_CREATIONSENSOR_H
#define ENT_CREATIONSENSOR_H

#include "structs.h"


uint Ent_CreationSensor_Ent_CreationSensor(void);
uint Ent_CreationSensor_Constructor(void);
uint Ent_CreationSensor_Destructor_Ent_CreationSensor(void);
uint Ent_CreationSensor_Activate(goGameObject *,MarkerListItem *);
uint Ent_CreationSensor_HandleEvent(MarkerListItem *);
uint Ent_CreationSensor_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_CreationSensor_InitParms(ushort const *,ushort);
uint Ent_CreationSensor_vtbl;


#endif
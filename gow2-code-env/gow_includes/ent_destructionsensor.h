#ifndef ENT_DESTRUCTIONSENSOR_H
#define ENT_DESTRUCTIONSENSOR_H

#include "structs.h"


uint Ent_DestructionSensor_Ent_DestructionSensor(void);
uint Ent_DestructionSensor_Constructor(void);
uint Ent_DestructionSensor_Destructor_Ent_DestructionSensor(void);
uint Ent_DestructionSensor_Activate(goGameObject *,MarkerListItem *);
uint Ent_DestructionSensor_HandleEvent(MarkerListItem *);
uint Ent_DestructionSensor_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_DestructionSensor_InitParms(ushort const *,ushort);
uint Ent_DestructionSensor_vtbl;


#endif
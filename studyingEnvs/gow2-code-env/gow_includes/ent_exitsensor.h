#ifndef ENT_EXITSENSOR_H
#define ENT_EXITSENSOR_H

#include "structs.h"


uint Ent_ExitSensor_Ent_ExitSensor(void);
uint Ent_ExitSensor_Constructor(void);
uint Ent_ExitSensor_Destructor_Ent_ExitSensor(void);
uint Ent_ExitSensor_Activate(goGameObject *,MarkerListItem *);
uint Ent_ExitSensor_HandleEvent(MarkerListItem *);
uint Ent_ExitSensor_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_ExitSensor_InitParms(ushort const *,ushort);
uint Ent_ExitSensor_vtbl;


#endif
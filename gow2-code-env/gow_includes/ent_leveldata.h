#ifndef ENT_LEVELDATA_H
#define ENT_LEVELDATA_H

#include "structs.h"


uint Ent_LevelData_Ent_LevelData(void);
uint Ent_LevelData_Constructor(void);
uint Ent_LevelData_Destructor_Ent_LevelData(void);
uint Ent_LevelData_Activate(goGameObject *,MarkerListItem *);
uint Ent_LevelData_HandleEvent(MarkerListItem *);
uint Ent_LevelData_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_LevelData_InitParms(ushort const *,ushort);
uint Ent_LevelData_vtbl;


#endif
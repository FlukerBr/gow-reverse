#ifndef ENT_ENEMYCREATOR_H
#define ENT_ENEMYCREATOR_H

#include "structs.h"


uint Ent_EnemyCreator_Ent_EnemyCreator(void);
uint Ent_EnemyCreator_Constructor(void);
uint Ent_EnemyCreator_Destructor_Ent_EnemyCreator(void);
uint Ent_EnemyCreator_Activate(goGameObject *,MarkerListItem *);
uint Ent_EnemyCreator_HandleEvent(MarkerListItem *);
uint Ent_EnemyCreator_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_EnemyCreator_Enabled(void);
uint Ent_EnemyCreator_InitParms(ushort const *,ushort);
uint Ent_EnemyCreator_vtbl;


#endif
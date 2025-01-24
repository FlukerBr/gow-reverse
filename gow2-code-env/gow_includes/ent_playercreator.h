#ifndef ENT_PLAYERCREATOR_H
#define ENT_PLAYERCREATOR_H

#include "structs.h"


uint Ent_PlayerCreator_Ent_PlayerCreator(void);
uint Ent_PlayerCreator_Constructor(void);
uint Ent_PlayerCreator_Destructor_Ent_PlayerCreator(void);
uint Ent_PlayerCreator_Activate(goGameObject *,MarkerListItem *);
uint Ent_PlayerCreator_HandleEvent(MarkerListItem *);
uint Ent_PlayerCreator_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_PlayerCreator_InitParms(ushort const *,ushort);
uint Ent_PlayerCreator_vtbl;


#endif
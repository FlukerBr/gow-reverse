#ifndef ENT_OBJECTCREATOR_H
#define ENT_OBJECTCREATOR_H

#include "structs.h"


uint Ent_ObjectCreator_Ent_ObjectCreator(void);
uint Ent_ObjectCreator_Constructor(void);
uint Ent_ObjectCreator_Destructor_Ent_ObjectCreator(void);
uint Ent_ObjectCreator_Activate(goGameObject *,MarkerListItem *);
uint Ent_ObjectCreator_HandleEvent(MarkerListItem *);
uint Ent_ObjectCreator_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_ObjectCreator_InitParms(ushort const *,ushort);
uint Ent_ObjectCreator_vtbl;


#endif
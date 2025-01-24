#ifndef ENT_ANIMATOR_H
#define ENT_ANIMATOR_H

#include "structs.h"


uint Ent_Animator_Ent_Animator(void);
uint Ent_Animator_Constructor(void);
uint Ent_Animator_Destructor_Ent_Animator(void);
uint Ent_Animator_Activate(goGameObject *,MarkerListItem *);
uint Ent_Animator_HandleEvent(MarkerListItem *);
uint Ent_Animator_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_Animator_InitParms(ushort const *,ushort);
uint Ent_Animator_vtbl;


#endif
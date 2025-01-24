#ifndef ENT_SOUNDCONTROLLER_H
#define ENT_SOUNDCONTROLLER_H

#include "structs.h"


uint Ent_SoundController_Ent_SoundController(void);
uint Ent_SoundController_Constructor(void);
uint Ent_SoundController_Destructor_Ent_SoundController(void);
uint Ent_SoundController_Activate(goGameObject *,MarkerListItem *);
uint Ent_SoundController_HandleEvent(MarkerListItem *);
uint Ent_SoundController_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_SoundController_InitParms(ushort const *,ushort);
uint Ent_SoundController_vtbl;


#endif
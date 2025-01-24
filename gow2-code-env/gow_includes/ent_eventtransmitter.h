#ifndef ENT_EVENTTRANSMITTER_H
#define ENT_EVENTTRANSMITTER_H

#include "structs.h"


uint Ent_EventTransmitter_Ent_EventTransmitter(void);
uint Ent_EventTransmitter_Constructor(void);
uint Ent_EventTransmitter_Destructor_Ent_EventTransmitter(void);
uint Ent_EventTransmitter_Activate(goGameObject *,MarkerListItem *);
uint Ent_EventTransmitter_HandleEvent(MarkerListItem *);
uint Ent_EventTransmitter_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_EventTransmitter_InitParms(ushort const *,ushort);
uint Ent_EventTransmitter_vtbl;


#endif
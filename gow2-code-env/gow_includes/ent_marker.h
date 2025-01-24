#ifndef ENT_MARKER_H
#define ENT_MARKER_H

#include "structs.h"


uint Ent_Marker_Ent_Marker(void);
uint Ent_Marker_Constructor(void);
uint Ent_Marker_Destructor_Ent_Marker(void);
uint Ent_Marker_Activate(goGameObject *,MarkerListItem *);
uint Ent_Marker_HandleEvent(MarkerListItem *);
uint Ent_Marker_StateNotify(MarkerListItem *,Entity_StateID);
uint Ent_Marker_InitParms(ushort const *,ushort);
uint Ent_Marker_vtbl;


#endif
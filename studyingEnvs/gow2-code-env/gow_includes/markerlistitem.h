#ifndef MARKERLISTITEM_H
#define MARKERLISTITEM_H

#include "structs.h"


uint MarkerListItem___dl(void *);
uint MarkerListItem___nw(uint);
uint MarkerListItem_Unload(void);
uint MarkerListItem_Disconnect(void);
uint MarkerListItem_Connect(wadContext *);
uint MarkerListItem_GetWorldPos(void);
uint MarkerListItem_Inside(Entity *);
uint MarkerListItem_RemoveWadContext(wadContext const *);
uint MarkerListItem_CheckExit(goGameObject **,short *,uint,int);
uint MarkerListItem_CheckEntry(goGameObject *,short,uint);
uint MarkerListItem_Remove(int);
uint MarkerListItem_Destructor_MarkerListItem(void);
uint MarkerListItem_MarkerListItem__(SaveListItem *);
uint MarkerListItem_MarkerListItem_(goGameObject *,Entity *);
uint MarkerListItem_MarkerListItem(goGameObject *,VUVec4,ushort,ushort,Entity *);


#endif
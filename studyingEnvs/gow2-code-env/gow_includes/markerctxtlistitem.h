#ifndef MARKERCTXTLISTITEM_H
#define MARKERCTXTLISTITEM_H

#include "structs.h"


uint MarkerCtxtListItem___dl(void *);
uint MarkerCtxtListItem___nw(uint);
uint MarkerCtxtListItem_Clear(stdList *,wadContext *);
uint MarkerCtxtListItem_Reload(goServerContext *);
uint MarkerCtxtListItem_Relink(goServerContext *);
uint MarkerCtxtListItem_Unload(void);
uint MarkerCtxtListItem_Disconnect(void);
uint MarkerCtxtListItem_Connect(void);
uint MarkerCtxtListItem_Remove_(goGameObject *);
uint MarkerCtxtListItem_Remove(MarkerListItem *);
uint MarkerCtxtListItem_RemoveWadContext(wadContext const *);
uint MarkerCtxtListItem_FindMarker_(ushort,ushort);
uint MarkerCtxtListItem_FindMarker(goGameObject *,stdList **);
uint MarkerCtxtListItem_Add(MarkerListItem *);
uint MarkerCtxtListItem_MarkerCtxtListItem_(uint);
uint MarkerCtxtListItem_MarkerCtxtListItem(goServerContext *);


#endif
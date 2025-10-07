#ifndef SAVELISTITEM_H
#define SAVELISTITEM_H

#include "structs.h"


uint SaveListItem_Destructor_SaveListItem(void);
uint SaveListItem_LoadData(void);
uint SaveListItem_SaveData(void);
uint SaveListItem_Restore(Entity *,ushort *,ushort *);
uint SaveListItem_FindCreator(wadContext *);
uint SaveListItem_SaveListItem(void);
uint SaveListItem_vtbl;


#endif
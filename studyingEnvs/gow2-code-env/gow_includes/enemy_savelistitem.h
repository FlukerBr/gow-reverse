#ifndef ENEMY_SAVELISTITEM_H
#define ENEMY_SAVELISTITEM_H

#include "structs.h"


uint Enemy_SaveListItem_PayloadSize(void);
uint Enemy_SaveListItem_PayloadOffset(void);
uint Enemy_SaveListItem_CodeByte(void);
uint Enemy_SaveListItem_Destructor_Enemy_SaveListItem(void);
uint Enemy_SaveListItem___dl(void *);
uint Enemy_SaveListItem___nw(uint);
uint Enemy_SaveListItem_Restore(Entity *,ushort *,ushort *);
uint Enemy_SaveListItem_FindCreator(wadContext *);
uint Enemy_SaveListItem_Enemy_SaveListItem(ushort,VUMat4 const *,Enemy_ParamData const *,ushort);
uint Enemy_SaveListItem_vtbl;


#endif
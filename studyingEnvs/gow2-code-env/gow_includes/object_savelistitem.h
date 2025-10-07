#ifndef OBJECT_SAVELISTITEM_H
#define OBJECT_SAVELISTITEM_H

#include "structs.h"


uint Object_SaveListItem_PayloadSize(void);
uint Object_SaveListItem_PayloadOffset(void);
uint Object_SaveListItem_CodeByte(void);
uint Object_SaveListItem_Destructor_Object_SaveListItem(void);
uint Object_SaveListItem___dl(void *);
uint Object_SaveListItem___nw(uint);
uint Object_SaveListItem_Restore(Entity *,ushort *,ushort *);
uint Object_SaveListItem_FindCreator(wadContext *);
uint Object_SaveListItem_GetTypeFromTweakName(char const *);
uint Object_SaveListItem_Object_SaveListItem(ushort,VUMat4 const *,char const *,short,float,float,uint,int,ushort,uint,int,short);
uint Object_SaveListItem_vtbl;


#endif
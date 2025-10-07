#ifndef IO_CSM_SAVELISTITEM_H
#define IO_CSM_SAVELISTITEM_H

#include "structs.h"


uint IO_CSM_SaveListItem_PayloadSize(void);
uint IO_CSM_SaveListItem_PayloadOffset(void);
uint IO_CSM_SaveListItem_CodeByte(void);
uint IO_CSM_SaveListItem_Destructor_IO_CSM_SaveListItem(void);
uint IO_CSM_SaveListItem___dl(void *);
uint IO_CSM_SaveListItem___nw(uint);
uint IO_CSM_SaveListItem_LoadData(void);
uint IO_CSM_SaveListItem_Match(goGameObject *);
uint IO_CSM_SaveListItem_IO_CSM_SaveListItem(goGameObject *);
uint IO_CSM_SaveListItem_vtbl;


#endif
#ifndef IO_SAVELISTITEM_H
#define IO_SAVELISTITEM_H

#include "structs.h"


uint IO_SaveListItem_PayloadSize(void);
uint IO_SaveListItem_PayloadOffset(void);
uint IO_SaveListItem_CodeByte(void);
uint IO_SaveListItem_Destructor_IO_SaveListItem(void);
uint IO_SaveListItem___dl(void *);
uint IO_SaveListItem___nw(uint);
uint IO_SaveListItem_LoadData(void);
uint IO_SaveListItem_vtbl;


#endif
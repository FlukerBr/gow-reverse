#ifndef IO_TANDF_SAVELISTITEM_H
#define IO_TANDF_SAVELISTITEM_H

#include "structs.h"


uint IO_TandF_SaveListItem_PayloadSize(void);
uint IO_TandF_SaveListItem_PayloadOffset(void);
uint IO_TandF_SaveListItem_CodeByte(void);
uint IO_TandF_SaveListItem_Destructor_IO_TandF_SaveListItem(void);
uint IO_TandF_SaveListItem___dl(void *);
uint IO_TandF_SaveListItem___nw(uint);
uint IO_TandF_SaveListItem_LoadData(void);
uint IO_TandF_SaveListItem_vtbl;


#endif
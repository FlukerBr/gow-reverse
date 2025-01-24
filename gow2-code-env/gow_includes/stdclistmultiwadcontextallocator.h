#ifndef STDCLISTMULTIWADCONTEXTALLOCATOR_H
#define STDCLISTMULTIWADCONTEXTALLOCATOR_H

#include "structs.h"


uint stdCListMultiWadContextAllocator_SetPool(Pool *);
uint stdCListMultiWadContextAllocator_GetPool(void);
uint stdCListMultiWadContextAllocator_Deallocate(stdCListNodeBase *);
uint stdCListMultiWadContextAllocator_Allocate(void);
uint stdCListMultiWadContextAllocator_AllocPool(uint,uint);
uint stdCListMultiWadContextAllocator_InitAllocator(uint,uint);
uint stdCListMultiWadContextAllocator__CurrentPool;
uint stdCListMultiWadContextAllocator__RootPool;


#endif
#ifndef WADCONTEXTPARM_H
#define WADCONTEXTPARM_H

#include "structs.h"


uint wadContextParm_PopHeapInfo(void);
uint wadContextParm_AllocateHeap(uint,uint,char const *);
uint wadContextParm__heapinfoStack;


#endif
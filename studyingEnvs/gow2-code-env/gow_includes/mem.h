#ifndef MEM_H
#define MEM_H

#include "structs.h"


uint Mem_FreeBytes(HeapZone *,uint *);
uint Mem_GetLargestFreeBlockSize(HeapZone *,uint);
uint Mem_PtrZone(void const *,bool *);
uint Mem_GetPtrSize(char *);
uint Mem_PopCurrentHeapZone(void);
uint Mem_PushCurrentHeapZone(HeapZone *);
uint Mem_SetCurrentHeapZone(HeapZone *);
uint Mem_GetCurrentHeapZone(void);
uint Mem_NewPtrHigh(HeapZone *,uint,uint);
uint Mem_NewPtr(HeapZone *,uint,uint);
uint Mem_FreePtr(void *);
uint Mem_FreePool(Pool *);
uint Mem_ShrinkPool(Pool *);
uint Mem_ShrinkablePoolFreePtr(Pool *,void *);
uint Mem_ShrinkablePoolNewPtr(Pool *,bool,uint);
uint Mem_PoolFreePtr(Pool *,void *);
uint Mem_PoolNewPtr(Pool *);
uint Mem_NewPool(HeapZone *,uint,uint,uint,uint);
uint Mem_FreeHeapZone(HeapZone *);
uint Mem_NewHeapZone(char *,uint,char const *,char *,uint);
uint Mem_Start(void);
uint Mem__pRootHeap;
uint Mem_uSmallMemAllocWarningSize;
uint Mem_bSmallMemAllocWarning;


#endif
#ifndef STDMULTIPOOL_H
#define STDMULTIPOOL_H

#include "structs.h"


uint stdMultiPool_Destructor_stdMultiPool(void);
uint stdMultiPool_CreateFromPoolCounts(HeapZone *);
uint stdMultiPool_CreateFromPoolCountRecurse(stdRBTreeNode *,HeapZone *);
uint stdMultiPool_CreatePoolFromCount(HeapZone *);
uint stdMultiPool_ClearPoolCounts(HeapZone *);
uint stdMultiPool_ClearPoolCountRecurse(stdRBTreeNode *,HeapZone *);
uint stdMultiPool_RemoveCount(HeapZone *);
uint stdMultiPool_AddPoolCount(uint,HeapZone *,uint);
uint stdMultiPool_RemovePools(HeapZone *);
uint stdMultiPool_AddPool_(uint,HeapZone *,uint,uint);
uint stdMultiPool_AddPool(HeapZone *,uint,uint);
uint stdMultiPool_Init(void);
uint stdMultiPool_RemovePool(HeapZone *);
uint stdMultiPool_GetPool(HeapZone *);
uint stdMultiPool_stdMultiPool(uint,uint,uint);
uint stdMultiPool_sm_InitPoolArray;
uint stdMultiPool_sm_MPRBTree;
uint stdMultiPool_sm_iInitPoolCount;


#endif
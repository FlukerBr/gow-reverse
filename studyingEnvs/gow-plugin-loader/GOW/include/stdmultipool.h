#ifndef STDMULTIPOOL_H
#define STDMULTIPOOL_H

#include "type.h"
#include "stdrbtree.h"

typedef struct stdMultiPool {
    UINT32 m_iHash;
    UINT32 m_iSize;
    UINT32 m_iAlignment;
    struct stdRBTree m_PoolRBTree;
    struct stdRBTree m_CountRBTree;
} stdMultiPool;

#endif
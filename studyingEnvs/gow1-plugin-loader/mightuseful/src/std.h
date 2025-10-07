#ifndef STD_H
#define STD_H

#include "stdint.h"

typedef struct __stdSLListNode
{
    struct __stdSLListNode *_pNextItem;
} stdSLListNode;

typedef struct __stdListNode
{
    struct __stdListNode *_pNextItem;
    struct __stdListNode *_pPrevItem;
} stdListNode;

typedef struct
{
    stdListNode _header;
} stdCList;

#endif
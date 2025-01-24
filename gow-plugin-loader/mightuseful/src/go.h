#ifndef GO_H
#define GO_H

#include "stdint.h"
#include "std.h"

typedef struct _goServerContainerType
{
    stdListNode* _pNextItem;
    stdListNode* _pPrevItem;
} goServerContainerType;

typedef struct
{
    stdSLListNode _header;
} goResourceList;

#endif

#ifndef GOHANDLEDB_H
#define GOHANDLEDB_H

#include "type.h"
typedef struct goHandle__unnamed__unnamed_1_ {
    UINT32 m_uDummyType:3;
    UINT32 m_uTimeStamp:20;
    UINT32 m_uIndex:9;
} goHandle__unnamed__unnamed_1;

typedef struct goHandle__unnamed__unnamed_0_ {
    UINT32 m_uType:3;
    INT32 m_iNextAvailableIdx:29;
} goHandle__unnamed__unnamed_0;

union goHandle__unnamed_0 {
    UINT32 m_uAll;
    goHandle__unnamed__unnamed_0 field1;
    goHandle__unnamed__unnamed_1 field2;
};

typedef struct goHandle_ {
    union goHandle__unnamed_0 field0_0x0;
} goHandle;

#endif
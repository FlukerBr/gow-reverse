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

typedef struct goHandle {
    union goHandle__unnamed_0 field0_0x0;
} goHandle;

struct HandleData__goHandle__unnamed__unnamed_0 {
    UINT32 m_uType:3;
    INT32 m_iNextAvailableIdx:29;
};

struct HandleData__goHandle__unnamed__unnamed_0_ {
    UINT32 m_uDummyType:3;
    UINT32 m_uTimeStamp:20;
    UINT32 m_uIndex:9;
};

union HandleData__goHandle__unnamed_0 {
    UINT32 m_uAll;
    struct HandleData__goHandle__unnamed__unnamed_0 field1;
    struct HandleData__goHandle__unnamed__unnamed_0_ field2;
};

typedef struct HandleData {
    union HandleData__goHandle__unnamed_0 field0_0x0; /* Inherited from goHandle */
    struct goGameObject *m_pGO;
    void *m_pData;
} HandleData;

typedef struct goHandleDB {
    UINT32 m_uTimeStamp:20;
    undefined field1_0x3;
    INT32 m_iNextAvailableIdx;
    struct HandleData m_aHandleData[512];
} goHandleDB;

#endif
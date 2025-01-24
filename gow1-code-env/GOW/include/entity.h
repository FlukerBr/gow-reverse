#ifndef ENTITY_H
#define ENTITY_H

#include "type.h"
#include "vumat.h"
#include "gogameobject.h"

struct sliCode {
    UINT8 *codeStart;
};

union DynExpr__u {
    FLOAT f;
    INT32 i;
    BOOL b;
    char *s;
    void *v;
};

struct DynExpr {
    int sliOffset;
    union DynExpr__u u;
};

typedef struct Entity {
    struct VUMat4 matrix;
    UINT16 jointID;
    UINT16 id;
    INT16 volumeID;
    UINT16 policy;
    INT16 wiID;
    UINT16 nTargets;
    UINT16 *targetArray;
    char *name;
    struct goGameObject *go;
    struct sliCode sli;
    unsigned int lastEventField[3];
    FLOAT lastTriggerTime;
    struct DynExpr m_Enabled;
    struct DynExpr m_RefractoryPeriod;
    struct DynExpr m_ResponseDelay;
    struct DynExpr m_DelayedEnable;
    struct DynExpr m_Execute;
    struct DynExpr m_DebugString;
    struct DynExpr m_MarkerID;
    struct Entity__vtable *__vtable;
    undefined field21_0xa8;
    undefined field22_0xa9;
    undefined field23_0xaa;
    undefined field24_0xab;
    undefined field25_0xac;
    undefined field26_0xad;
    undefined field27_0xae;
    undefined field28_0xaf;
} Entity;

#endif
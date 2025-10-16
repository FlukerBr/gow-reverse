#ifndef COLLISIONOUTPUT_H
#define COLLISIONOUTPUT_H

#include "type.h"
#include "vuvec.h"

typedef UINT32 AtrValue;

typedef struct collisionOutput_ {
    VUVec4 vPos;
    VUVec4 vNormal;
    FLOAT fT;
    struct collisionClient *pCC;
    AtrValue *pATR;
    AtrValue *pMyATR;
    UINT16 uJointID;
    UINT16 uMyJointID;
    undefined field8_0x34;
    undefined field9_0x35;
    undefined field10_0x36;
    undefined field11_0x37;
    undefined field12_0x38;
    undefined field13_0x39;
    undefined field14_0x3a;
    undefined field15_0x3b;
    undefined field16_0x3c;
    undefined field17_0x3d;
    undefined field18_0x3e;
    undefined field19_0x3f;
} collisionOutput;

#endif





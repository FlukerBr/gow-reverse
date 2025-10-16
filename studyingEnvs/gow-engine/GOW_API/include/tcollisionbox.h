#ifndef TCOLLISION_H
#define TCOLLISION_H

#include "type.h"
#include "vuvec.h"

typedef struct tCollisionBox_ {
    VUVec4 m_vSize;
    VUVec4 m_vOffset;
    FLOAT m_fTopOffsetY;
    undefined field3_0x24;
    undefined field4_0x25;
    undefined field5_0x26;
    undefined field6_0x27;
    undefined field7_0x28;
    undefined field8_0x29;
    undefined field9_0x2a;
    undefined field10_0x2b;
    undefined field11_0x2c;
    undefined field12_0x2d;
    undefined field13_0x2e;
    undefined field14_0x2f;
} tCollisionBox;

#endif
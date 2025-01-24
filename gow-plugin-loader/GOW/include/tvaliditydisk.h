#ifndef TVALIDITYDISK_H
#define TVALIDITYDISK_H

#include "type.h"
#include "vumat.h"

typedef UINT32 tValidityDisk__vtable;

typedef struct tValidityDisk_ {
    VUMat4 m_mLWMatrix;
    unsigned int m_iDiskOccupiedBits[4];
    unsigned int m_iDiskInvalidBits[4];
    unsigned int m_iDiskPropInvalidBits[4];
    UINT32 m_iLastFullUpdateFrame;
    tValidityDisk__vtable *__vtable;
    undefined field6_0x78;
    undefined field7_0x79;
    undefined field8_0x7a;
    undefined field9_0x7b;
    undefined field10_0x7c;
    undefined field11_0x7d;
    undefined field12_0x7e;
    undefined field13_0x7f;
} tValidityDisk;

#endif
#ifndef VUCORE_H
#define VUCORE_H

#include "stdint.h"

typedef struct _VUVec4
{
    uint64_t v[2];
} VUVec4;


typedef struct _VUMat4
{
    VUVec4 r0;
    VUVec4 r1;
    VUVec4 r2;
    VUVec4 r3;
} VUMat4;

#endif
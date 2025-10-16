#ifndef VUVEC_H
#define VUVEC_H

#include "type.h"

typedef struct VUVec4_
{
    UINT64 v[2];
} VUVec4;


typedef struct VUMat4_
{
    VUVec4 r0;
    VUVec4 r1;
    VUVec4 r2;
    VUVec4 r3;
} VUMat4;


#endif
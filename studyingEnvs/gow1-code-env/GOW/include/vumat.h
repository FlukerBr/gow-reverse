#ifndef VUMAT_H
#define VUMAT_H

#include "type.h"
#include "vuvec.h"

typedef struct VUMat4
{
    VUVec4 r0;
    VUVec4 r1;
    VUVec4 r2;
    VUVec4 r3;
} VUMat4;

#endif
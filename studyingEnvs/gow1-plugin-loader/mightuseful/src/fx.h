#ifndef FX_H
#define FX_H

#include "stdint.h"

typedef struct _fxBoneData
{
    float m_fProb[32];
    uint8_t m_iIdx[32];
} fxBoneData;

#endif
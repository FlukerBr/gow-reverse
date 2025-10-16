#ifndef FXBONEDATA_H
#define FXBONEDATA_H

#include "type.h"

typedef struct fxBoneData_ {
    float m_fProb[32];
    unsigned char m_iIdx[32];
} fxBoneData;

#endif
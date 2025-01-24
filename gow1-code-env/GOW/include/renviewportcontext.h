#ifndef RENVIEWPORTCONTEXT_H
#define RENVIEWPORTCONTEXT_H

#include "vumat.h"

typedef struct renViewportContext {
    struct VUVec4 _vViewportVectors[5];
    long unsigned int _VC[2];
    unsigned int _DMABuff[24];
    unsigned int _DMAStandAloneBuff[32];
    UINT32 *_pDMA[2];
    UINT32 *_pDMAStandAlone[2];
} renViewportContext;

#endif
#ifndef RENFRUSTUM_H
#define RENFRUSTUM_H

#include "type.h"

typedef struct renFrustum {
    FLOAT FOVH;
    FLOAT FOVV;
    FLOAT Near;
    FLOAT Far;
} renFrustum;

#endif
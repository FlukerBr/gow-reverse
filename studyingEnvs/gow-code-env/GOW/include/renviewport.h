#ifndef RENVIEWPORT_H
#define RENVIEWPORT_H

#include "type.h"

typedef struct renViewport {
    FLOAT Top;
    FLOAT Bottom;
    FLOAT Left;
    FLOAT Right;
    FLOAT StretchH;
    FLOAT StretchV;
} renViewport;

#endif
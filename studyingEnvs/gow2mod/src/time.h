#ifndef TIME_H
#define TIME_H

#include "stdint.h"

static uint32_t *g_Timer = ((uint32_t *)0x2DDA38);

bool hasTimePassed(float sec, uint32_t start_time);

#endif
#include "time.h"
#include "stdio.h"

bool hasTimePassed(float sec, uint32_t start_time)
{
    return (*g_Timer - start_time) / 10 >= sec;
}
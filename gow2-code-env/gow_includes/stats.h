#ifndef STATS_H
#define STATS_H

#include "structs.h"


uint Stats_SetStateData(void const *);
uint Stats_GetStateData(void *);
uint Stats_Max(int,uint);
uint Stats_Inc(int,int);
uint Stats_Init(void);
uint Stats_count;


#endif
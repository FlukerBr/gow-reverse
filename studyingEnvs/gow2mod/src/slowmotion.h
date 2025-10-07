#ifndef SLOWMOTION_H
#define SLOWMOTION_H

#include "stdint.h"

#define green_filter *((float *)0x2D827C)
#define game_world_speed *((float *)0x2D8264)

extern bool enable_slowmotion;
extern uint32_t slowmotion_start_time;

void handleSlowmotionActivity();
void slowmotionPatches();

#endif
#ifndef GOPLAYER_H
#define GOPLAYER_H

#include "stdint.h"

#define goPlayer_goPlayer ((uint32_t(*)(uint32_t *))0x20CC68)
#define goPlayer_vtbl ((uint8_t *)0x2F13F8)

extern uint32_t *goPlayer_sm_pPlayer;
#endif
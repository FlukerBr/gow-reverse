#ifndef FLASHINTERFACE_H
#define FLASHINTERFACE_H

#include "stdint.h"

#define FlashInterface_SimKeyEvent ((uint32_t (*)(uint32_t))0x1E5A90)
#define FlashInterface_DoMsgPage ((void (*)(uint32_t *, uint32_t, const char *))0x1E6848)
#define FlashInterface_DoMsg ((void (*)(uint32_t *, uint32_t))0x1D66A0)
#define FlashInterface_PlaySound ((void(*)(uint32_t *, uint32_t, char *))0x1E5308)
#define flashInterface (uint32_t *)(*((uint32_t *)0x2D85E4))

#endif
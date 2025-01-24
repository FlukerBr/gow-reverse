#ifndef SAVEGAME_H
#define SAVEGAME_H

#include "stdint.h"

static void (*SaveGame_LoadCheckPoint)(void) = ((void (*)(void))0x26BC40);
static void (*SaveGame_SaveCheckPoint)(void) = ((void (*)(void))0x26BB80);

#endif
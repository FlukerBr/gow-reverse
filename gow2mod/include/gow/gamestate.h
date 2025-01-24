#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "stdint.h"

static void (*GameState_GoToFailedMenu)(uint32_t) = ((void (*)(uint32_t))0x25A7F0);
static void (*GameState_GoToDeadMenu)(uint32_t) = ((void (*)(uint32_t))0x25A748);
static uint32_t (*GameState_GoToSaveMenu)(uint32_t) = ((uint32_t (*)(uint32_t))0x25AA00);
static uint32_t (*GameState_Restart)(void) = ((uint32_t (*)(void))0x25B6D8);
static uint32_t (*GameState_Quit)(void) = ((uint32_t (*)(void))0x25B7E0);
static void (*GameState_DoMsg)(uint32_t) = ((void(*)(uint32_t))0x25AB10);
static void (*GameState_ShowLoadScreen)(uint32_t) = ((void(*)(uint32_t))0x25B820);
static void (*GameState_Update)(void) = ((void (*)(void))0x25AD58);
static void (*GameState_CleanUpForMenu)(void) = ((void(*)(void))0x25EC68);

static uint32_t *GameState_curState = ((uint32_t *)0x2D8EC0);
#define GameState_padOrDiscReinserted *((uint32_t *)0x2D8F34)
#define GameState_CheckPause ((void(*)(uint32_t))0x25B4F8)
#define GameState_CheckPad ((uint32_t(*)(void))0x25B298)
#define GameState_CheckDisc ((uint32_t(*)(void))0x25AF88)
#define GameState_GoToLoadingLevel ((uint32_t(*)(uint32_t, uint32_t))0x25CAA0)


#define sub_25BDF8 ((uint32_t(*)(void))0x25BDF8)
#define sub_25BFC8 ((uint32_t(*)(void))0x25BFC8)
#define sub_25C178 ((uint32_t(*)(void))0x25C178)
#define sub_25C200 ((uint32_t(*)(void))0x25C200)
#define sub_25C5C0 ((uint32_t(*)(void))0x25C5C0)
#define GameState_ShellLoadGame ((uint32_t(*)(void))0x25C780)
#define sub_25C878 ((uint32_t(*)(void))0x25C878)
#define GameState_ShellLoadCancelled ((uint32_t(*)(void))0x25C7D8)
#define sub_25C9A8 ((uint32_t(*)(void))0x25C9A8)
#define sub_25CB90 ((uint32_t(*)(void))0x25CB90)
#define sub_25CE10 ((uint32_t(*)(void))0x25CE10)
#define GameState_Playing ((uint32_t(*)(void))0x25CEC8)
#define GameState_PauseMenu ((uint32_t(*)(void))0x25D218)
#define GameState_PSMMenu ((uint32_t(*)(void))0x25D370)
#define GameState_FailedOrDeadMenu ((uint32_t(*)(void))0x25D3F8)
#define sub_25E338 ((uint32_t(*)(void))0x25E338)
#define sub_25E660 ((uint32_t(*)(void))0x25E660)
#define sub_25E938 ((uint32_t(*)(void))0x25E938)
#define sub_25EA80 ((uint32_t(*)(void))0x25EA80)
#define sub_25EBA8 ((uint32_t(*)(void))0x25EBA8)


#endif
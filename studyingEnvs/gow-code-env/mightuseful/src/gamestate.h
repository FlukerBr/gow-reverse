#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "stdint.h"

typedef enum
{
    GAME_INIT,
    GAME_LOADING_SHELL,
    GAME_SHELL_BOOT_SCREEN,
    GAME_SHELL,
    GAME_SHELL_NEW_GAME,
    GAME_SHELL_LOAD_GAME,
    GAME_SHELL_LOAD_DONE,
    GAME_SHELL_LOAD_CANCELLED,
    GAME_LOADING_HERO,
    GAME_LOADING_LEVEL,
    GAME_LOAD_CHECKING,
    GAME_PLAYING,
    GAME_PAUSE_MENU,
    GAME_PSM_MENU,
    GAME_FAILED_OR_DEAD_MENU,
    GAME_SAVE_MENU,
    GAME_SAVE_LOCKED_STATUS,
    GAME_SAVE_MEM_CARD,
    GAME_SAVE_MENU_DONE,
    GAME_LOAD_MEM_CARD
} GAME_STATE;

typedef enum
{
    PT_FALSE,
    PT_TRUE,
    PT_TRUE_MUSIC,
    PT_LOADING,
} PAUSE_TYPE;

static void (*GameState_GoToFailedMenu)(uint32_t) = ((void (*)(uint32_t))0x25A7F0);
static void (*GameState_GoToDeadMenu)(uint32_t) = ((void (*)(uint32_t))0x25A748);
static uint32_t (*GameState_GoToSaveMenu)(uint32_t) = ((uint32_t (*)(uint32_t))0x25AA00);
static uint32_t (*GameState_Restart)(uint32_t *) = ((uint32_t (*)(uint32_t *))0x25B6D8);
static uint32_t (*GameState_Quit)(void) = ((uint32_t (*)(void))0x25B7E0);
static void (*GameState_DoMsg)(uint32_t) = ((void(*)(uint32_t))0x25AB10);
static void (*GameState_ShowLoadScreen)(bool load) = ((void(*)(bool))0x25B820);
static void (*GameState_Update)(void) = ((void (*)(void))0x25AD58);
static void (*GameState_CleanUpForMenu)(void) = ((void(*)(void))0x25EC68);
static void (*GameState_CheckPause)(PAUSE_TYPE pause) = ((void(*)(PAUSE_TYPE))0x25B4F8);
static uint32_t (*GameState_CheckPad)(void) = ((uint32_t(*)(void))0x25B298);
static uint32_t (*GameState_CheckDisc)(void) = ((uint32_t(*)(void))0x25AF88);
static uint32_t (*GameState_GoToLoadingLevel)(uint32_t, uint32_t) = ((uint32_t(*)(uint32_t, uint32_t))0x25CAA0);



#define GameState_curState *((GAME_STATE *)0x2D8EC0)
#define GameState_padOrDiscReinserted *((bool *)0x2D8F34)
#define GameState_oldEnableButtons *((uint32_t *)0x2D8EF8)                   
#define GameState_oldMenuChoice *((uint32_t *)0x2D8EFC)

#endif
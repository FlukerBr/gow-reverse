#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "type.h"

typedef enum GAME_STATE {
    GAME_INIT=0,
    GAME_LOADING_SHELL=1,
    GAME_SHELL_BOOT_SCREEN=2,
    GAME_SHELL=3,
    GAME_SHELL_NEW_GAME=4,
    GAME_SHELL_LOAD_GAME=5,
    GAME_SHELL_LOAD_DONE=6,
    GAME_SHELL_LOAD_CANCELLED=7,
    GAME_LOADING_HERO=8,
    GAME_LOADING_LEVEL=9,
    GAME_LOAD_CHECKING=10,
    GAME_PLAYING=11,
    GAME_PAUSE_MENU=12,
    GAME_PSM_MENU=13,
    GAME_FAILED_OR_DEAD_MENU=14,
    GAME_SAVE_MENU=15,
    GAME_SAVE_LOCKED_STATUS=16,
    GAME_SAVE_MEM_CARD=17,
    GAME_SAVE_MENU_DONE=18,
    GAME_LOAD_MEM_CARD=19
} GAME_STATE;

typedef enum PAUSE_TYPE {
    PT_FALSE=0,
    PT_TRUE=1,
    PT_TRUE_MUSIC=2,
    PT_LOADING=3
} PAUSE_TYPE;

typedef struct Pending {
    int msgID;
    int menuID;
    int pickupID;
    FLOAT seconds;
    int msgMeterBarGrow;
    int healthMeterValue;
    int magicMeterValue;
} Pending;

extern void GameState_GoToDeadMenu(void);
extern void GameState_GoToFailedMenu(void);
extern void GameState_GoToSaveMenu(int);
extern void GameState_GoToLoadChecking(void);
extern void GameState_Pause(int);
extern UINT32 GameState_DoMsg(int,float,int);
extern void GameState_DoMenu(int);
extern void GameState_DoPickUpInfo(int,int,int,int,int);
extern void GameState_PromptButton(int,int);
extern void GameState_ClearPromptButton(void);
extern void GameState_GetStateData(void *);
extern void GameState_SetStateData(void *);
extern void GameState_Update(void);
extern void GameState_CheckDisc(void);
extern void GameState_CheckPad(void);
extern void GameState_CheckPause(PAUSE_TYPE);
extern void GameState_Restart(void);
extern void GameState_Quit(void);
extern void GameState_ShowLoadScreen(int);
extern void GameState_DoPending(void);
extern void GameState_ClearPending(void);
extern void GameState_AddPending(Pending*);
extern void GameState_NextPending(Pending);
extern void GameState_DoPromptButton(void);
extern void GameState_ShellStuff_Init(void);
extern void GameState_ShellStuff_NewGame_Begin(void);
extern void GameState_ShellStuff_NewGame_Update(void);
extern void GameState_ShellStuff_LoadGame_Begin(void);
extern void GameState_ShellStuff_LoadGame_Update(int);
extern void GameState_TreasureBeginEnd(void);
extern void GameState_TreasureUpdate(void);
extern void GameState_Init(void);
extern UINT32 GameState_GoToShell(UINT32);
extern void GameState_LoadingShell(void);
extern void GameState_ShellBootScreen(void);
extern void GameState_Shell(void);
extern void GameState_ShellNewGame(void);
extern void GameState_ShellLoadGame(void);
extern void GameState_ShellLoadCancelled(void);
extern void GameState_GoToShellLoadDone(void);
extern void GameState_ShellLoadDone(void);
extern void GameState_GoToLoadingHero(int);
extern void GameState_LoadingHero(void);
extern void GameState_GoToLoadingLevel(int,int);
extern void GameState_LoadingLevel(void);
extern void GameState_LoadChecking(void);
extern void GameState_PrepareForPauseOrPSM(void);
extern void GameState_Playing(void);
extern void GameState_PauseMenu(void);
extern void GameState_PSMMenu(void);
extern void GameState_FailedOrDeadMenu(void);
extern void GameState_SaveMenu(void);
extern void GameState_SaveMemCard(void);
extern void GameState_SaveMenuDone(void);
extern void GameState_CleanUpForMenu(void);
extern void GameState_DeathEffectBegin(void);
extern void GameState_DeathEffectEnd(void);
extern void GameState_DeathEffect(void);
extern void GameState_DeathEffectTimeExpired(void);
extern void GameState_StateData_Destructor_StateData(void);



extern GAME_STATE GameState_curState;
extern UINT32 GameState_discRemoved;
extern UINT32 GameState_discWrong;
extern UINT32 GameState_padRemoved;
extern UINT32 GameState_padWrong;
extern UINT32 GameState_nowLoading;
extern UINT32 GameState_waitingForPlayer;
extern UINT32 GameState_loadingSaveGame;
extern UINT32 GameState_loadingFirstLevel;
extern UINT32 GameState_heroJustLoaded;
extern UINT32 GameState_levelJustLoaded;
extern UINT32 GameState_afterHeroLoadingScreen;
extern UINT32 GameState_saveCheckPointOnLoad;
extern UINT32 GameState_pauseRequested;
extern UINT32 GameState_oldEnableButtons;
extern UINT32 GameState_oldMenuChoice;
extern UINT32 GameState_fallingFrames;
extern UINT32 GameState_waitFrames;
extern UINT32 GameState_deathEffectTime;
extern UINT32 GameState_deathEffectDuration;
extern UINT32 GameState_saveGameStart;
extern UINT32 GameState_saveGameOver;
extern UINT32 GameState_saveMenuID;
extern UINT32 GameState_fadeTime;
extern UINT32 GameState_restartInEasyMode;
extern UINT32 GameState_treasuresOn;
extern UINT32 GameState_treasureBeginEndCalled;
extern UINT32 GameState_bonusLevel;
extern UINT32 GameState_padOrDiscReinserted;
extern UINT32 GameState_weaponWadHijacked;
extern UINT32 GameState_sd;

#endif
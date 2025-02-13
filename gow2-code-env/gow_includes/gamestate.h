#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "structs.h"


uint GameState_StateData_Destructor_StateData(void);
uint GameState_DeathEffectTimeExpired(void);
uint GameState_DeathEffect(void);
uint GameState_DeathEffectEnd(void);
uint GameState_DeathEffectBegin(void);
uint GameState_CleanUpForMenu(void);
uint GameState_SaveMenuDone(void);
uint GameState_SaveMemCard(void);
uint GameState_SaveMenu(void);
uint GameState_FreeCombatMenu(void);
uint GameState_RandomizeChallengeArena(char const *);
uint GameState_ChallengeMenu(void);
uint GameState_ChallengeReset(void);
uint GameState_GradeName(int);
uint GameState_ComputePlayerGrade(void);
uint GameState_FailedOrDeadMenu(void);
uint GameState_PSMMenu(void);
uint GameState_PauseMenu(void);
uint GameState_Playing(void);
uint GameState_PrepareForPauseOrPSM(void);
uint GameState_LoadChecking(void);
uint GameState_LoadingLevel(void);
uint GameState_GoToLoadingLevel(int,int);
uint GameState_LoadingHero(void);
uint GameState_GoToLoadingHero(int);
uint GameState_ShellLoadDone(void);
uint GameState_GoToShellLoadDone(void);
uint GameState_ShellLoadCancelled(void);
uint GameState_ShellLoadGame(void);
uint GameState_ShellNewGame(void);
uint GameState_Shell(void);
uint GameState_ShellBootScreen(void);
uint GameState_LoadingShell(void);
uint GameState_GoToShell(void);
uint GameState_Init(void);
uint GameState_PALInit(void);
uint GameState_TreasureBeginEnd(void);
uint GameState_DoPromptButton(void);
uint GameState_NextPending(Pending *);
uint GameState_AddPending(Pending const *);
uint GameState_ClearPending(void);
uint GameState_DoPending(void);
uint GameState_ClrRenderWorld(void);
uint GameState_SetRenderWorld(void);
uint GameState_RenderWorld(void);
uint GameState_ShowLoadScreen(int);
uint GameState_Quit(void);
uint GameState_Restart(void);
// uint GameState_CheckPause(GameState_PAUSE_TYPE);
uint GameState_CheckPad(void);
uint GameState_CheckDisc(void);
uint GameState_Update(void);
uint GameState_ResetPlayTime(void);
uint GameState_IncPlayTime(float);
uint GameState_SetStateData(void const *);
uint GameState_GetStateData(void *);
uint GameState_ClearPromptButton(void);
uint GameState_PromptButton(int,uint);
uint GameState_DoPickUpInfo(int,int,int,int,int);
uint GameState_DoMenu(int,int);
uint GameState_DoMsg(int,float,int);
uint GameState_Pause(int);
uint GameState_GoToLoadChecking(void);
uint GameState_GoToSaveMenu(int);
uint GameState_GoToFreeCombatMenu(void);
uint GameState_GoToChallengeMenu(int);
uint GameState_GoToFailedMenu(void);
uint GameState_GoToDeadMenu(void);
uint GameState_CreateWorldView(void);
uint GameState_sd;
uint GameState_worldView;
uint GameState_bDDDDust;
uint GameState_weaponWadHijacked;
uint GameState_padOrDiscReinserted;
uint GameState_bonusLevel;
uint GameState_treasureBeginEndCalled;
uint GameState_treasuresOn;
uint GameState_restartInEasyMode;
uint GameState_fracSecond;
uint GameState_fadeTime;
uint GameState_saveMenuID;
uint GameState_saveGameOver;
uint GameState_saveGameStart;
uint GameState_deathEffectDuration;
uint GameState_deathEffectTime;
uint GameState_waitFrames;
uint GameState_fallingFrames;
uint GameState_oldMenuChoice;
uint GameState_oldEnableButtons;
uint GameState_pauseRequested;
uint GameState_resetPlayTime;
uint GameState_saveCheckPointOnLoad;
uint GameState_levelJustLoaded;
uint GameState_heroJustLoaded;
uint GameState_loadingFirstLevel;
uint GameState_loadingSaveGame;
uint GameState_waitingForPlayer;
uint GameState_nowLoading;
uint GameState_padWrong;
uint GameState_padRemoved;
uint GameState_discWrong;
uint GameState_discRemoved;
GAME_STATE GameState_curState;


#endif
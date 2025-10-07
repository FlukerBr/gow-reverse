#ifndef MEMCARD_H
#define MEMCARD_H

#include "structs.h"


uint MemCard_SaveGameUpdate(void);
uint MemCard_TakeDownSaveMenu(void);
uint MemCard_LoadGameUpdate(void);
uint MemCard_CheckSumOK(void);
uint MemCard_AddCheckSum(void);
uint MemCard_SetOptionBits(uint);
uint MemCard_SetGlobalBits(uint);
uint MemCard_HighestDifficultyCompleted(void);
uint MemCard_BootScreenUpdate(void);
uint MemCard_GetLockedUpdate(void);
uint MemCard_CreateSetup(int);
uint MemCard_CheckSetup(int);
uint MemCard_WriteFile(int,char const *,void *,int);
uint MemCard_ReadFile(int,char const *,void *,int);
uint MemCard_DeleteFile(int,char const *);
uint MemCard_CreateFile(int,char const *);
uint MemCard_MkDir(int);
uint MemCard_GetDir(int);
uint MemCard_Format(int);
uint MemCard_GetCardInfo(int);
uint MemCard_CheckAsync(int);
uint MemCard_SetEOGPS(int);
uint MemCard_GetEOGPS(int);
uint MemCard_FlashSelect(int);
uint MemCard_GetSaveTime(int,int);
uint MemCard_ChooseSaveGame(int,int);
uint MemCard_ParseMasterFile(int);
uint MemCard_DateTimeString(SceMc2DirParam const *);
uint MemCard_dataFileName;
uint MemCard_fileNameBuf;
uint MemCard_cardInfo;
uint MemCard_masterFileDateTime;
uint MemCard_getDirFileTable;
uint MemCard_latestFileDateTime;
uint MemCard_cardSwapped;
uint MemCard_cardSetup;
uint MemCard_cardPresent;
uint MemCard_cardState;
uint MemCard_availableFile;
uint MemCard_unformattedRetries;
uint MemCard_insuffSpaceOnStart;
uint MemCard_optionBits;
uint MemCard_globalBits;
uint MemCard_createIdx;
uint MemCard_saveMenuUp;
uint MemCard_saveCheckpoint;
uint MemCard_saveMenuID;
uint MemCard_createState;
uint MemCard_checkState;
uint MemCard_mainState;
uint MemCard_selectedACard;
uint MemCard_chosenGame;
uint MemCard_chosenCard;
uint MemCard_lockStatusCard;
uint MemCard_getDirFileCount;
uint MemCard_mcData;
uint MemCard_waitTime;
uint MemCard_flashResponse;
uint MemCard_nBytesWritten;
uint MemCard_nBytesRead;
uint MemCard_curResult;
uint MemCard_curFunction;
uint MemCard_cardSocket;


#endif
#ifndef CHALLENGE_H
#define CHALLENGE_H

#include "structs.h"


uint Challenge_SetStateData(void const *);
uint Challenge_GetStateData(void *);
uint Challenge_FlashSetup(void);
uint Challenge_TimeString(int);
uint Challenge_MsgDone(void);
uint Challenge_Grade(int,Challenge_Category);
uint Challenge_Count(int,Challenge_Category);
uint Challenge_RestoreStageCounts(int);
uint Challenge_BackupStageCounts(int);
uint Challenge_GetCount(int,Challenge_Category);
uint Challenge_SetCount(int,Challenge_Category,int);
uint Challenge_SetStageCounts(void);
uint Challenge_backupCounts;
uint Challenge_sd;
uint Challenge_newStageTotal;
uint Challenge_oldStageTotal;
uint Challenge_bonus;


#endif
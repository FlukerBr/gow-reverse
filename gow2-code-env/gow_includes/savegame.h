#ifndef SAVEGAME_H
#define SAVEGAME_H

#include "structs.h"


uint SaveGame_EndUnpacking(SaveGame_PackInfo *);
uint SaveGame_BeginUnpacking(SaveGame_PackInfo *);
uint SaveGame_ReadPacked(SaveGame_PackInfo *,uint);
uint SaveGame_EndPacking(SaveGame_PackInfo *);
uint SaveGame_BeginPacking(SaveGame_PackInfo *);
uint SaveGame_RemovePackInfo(SaveGame_PackInfo *);
uint SaveGame_WritePacked(SaveGame_PackInfo *);
uint SaveGame_ResetPackInfo(void);
uint SaveGame_FlushBuf(void);
uint SaveGame_FillBuf(void);
uint SaveGame_ReadBuf(void *,int);
uint SaveGame_WriteBuf(void const *,int);
uint SaveGame_InitBuf(void);
uint SaveGame_FinalizeLoad(void);
uint SaveGame_LoadGlobalData(void);
uint SaveGame_SaveGlobalData(void);
uint SaveGame_LoadData(int);
uint SaveGame_SaveData(void);
uint SaveGame_LoadFromMemBuf(char *,int,int);
uint SaveGame_SaveToMemBuf(char *,int);
uint SaveGame_DoLoad(char const *,int);
uint SaveGame_LoadCheckPoint(void);
uint SaveGame_SaveCheckPoint(void);
uint SaveGame_SaveToMemCard(int);
uint SaveGame_Init(void);
uint SaveGame_packBuf;
uint SaveGame_buffer;
uint SaveGame_checkBuf;
uint SaveGame_version;
uint SaveGame_curPackInfo;
uint SaveGame_nPackBytes;
uint SaveGame_loadPass;
uint SaveGame_savePointID;
uint SaveGame_checkPointPlayTime;
uint SaveGame_status;
uint SaveGame_tPrev;
uint SaveGame_totalBytes;
uint SaveGame_mBlkCur;
uint SaveGame_mBlkEnd;
uint SaveGame_mBlkStart;
uint SaveGame_pend;
uint SaveGame_pbuf;


#endif
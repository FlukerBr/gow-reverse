#ifndef ANMPLAYLIST_H
#define ANMPLAYLIST_H

#include "structs.h"


uint anmPlayList___dl(void *);
uint anmPlayList_Destructor_anmPlayList(void);
uint anmPlayList_PoolFreePlayer(anmPlayer *);
uint anmPlayList_PoolAllocPlayer(void);
uint anmPlayList_CanRemove(void);
uint anmPlayList_RemoveNonAdditivePlayers(void);
uint anmPlayList_SetWeightScaleDeltaPerSecond(float);
uint anmPlayList_UndoTerminate(void);
uint anmPlayList_SetTerminateTime(float);
uint anmPlayList_Process(void);
uint anmPlayList_RemovePlayer(anmPlayer *);
uint anmPlayList_AddPlayer_(anmFileHeader const *,uint);
uint anmPlayList_AddPlayer(anmFileHeader const *,uint,int);
uint anmPlayList_Blend2DAnim(float,float);
uint anmPlayList_vtbl;


#endif
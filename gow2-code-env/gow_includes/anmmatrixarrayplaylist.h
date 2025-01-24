#ifndef ANMMATRIXARRAYPLAYLIST_H
#define ANMMATRIXARRAYPLAYLIST_H

#include "structs.h"


uint anmMatrixArrayPlayList_Destructor_anmMatrixArrayPlayList(void);
uint anmMatrixArrayPlayList_Process(anmCheckSum *);
uint anmMatrixArrayPlayList_anmMatrixArrayPlayList(uint,anmMatrixArray *);
uint anmMatrixArrayPlayList_AllocatePlayer(anmFileHeader const *,uint);
uint anmMatrixArrayPlayList_vtbl;


#endif
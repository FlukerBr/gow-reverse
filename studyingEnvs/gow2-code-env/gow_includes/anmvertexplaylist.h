#ifndef ANMVERTEXPLAYLIST_H
#define ANMVERTEXPLAYLIST_H

#include "structs.h"


uint anmVertexPlayList_AllocatePlayer(anmFileHeader const *,uint);
uint anmVertexPlayList_Destructor_anmVertexPlayList(void);
uint anmVertexPlayList_Process(void);
uint anmVertexPlayList_vtbl;


#endif
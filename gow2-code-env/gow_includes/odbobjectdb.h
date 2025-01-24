#ifndef ODBOBJECTDB_H
#define ODBOBJECTDB_H

#include "structs.h"


uint odbObjectDB_RemoveAll(int);
uint odbObjectDB_RemoveWadContext(wadContext *);
uint odbObjectDB_InitWadContext(wadContext *);
uint odbObjectDB_Update(void);
uint odbObjectDB_Add(odbObject *);
uint odbObjectDB_Init(void);
uint odbObjectDB_sm_pContextList;


#endif
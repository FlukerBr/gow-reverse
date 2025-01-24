#ifndef GOHANDLEDB_H
#define GOHANDLEDB_H

#include "structs.h"


uint goHandleDB_InitHandleDB(void);
uint goHandleDB_Unregister(goHandle);
uint goHandleDB_Register(goGameObject *,void *,uint);
uint goHandleDB_goHandleDB(void);
uint goHandleDB_sm_pHandleDB;


#endif
#ifndef WYPSERVER_H
#define WYPSERVER_H

#include "structs.h"


uint wypServer_CreateMasterContext(void);
uint wypServer_Destructor_wypServer(void);
uint wypServer_wypServer(svrParm const *);
uint wypServer_vtbl;


#endif
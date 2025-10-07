#ifndef RENMODELSERVER_H
#define RENMODELSERVER_H

#include "structs.h"


uint renModelServer_CreateMasterContext(void);
uint renModelServer_Destructor_renModelServer(void);
uint renModelServer_ProcessServer(void);
uint renModelServer_renModelServer(svrParm const *);
uint renModelServer_vtbl;


#endif
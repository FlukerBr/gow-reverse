#ifndef RENEEPRIMMASTERSERVER_H
#define RENEEPRIMMASTERSERVER_H

#include "structs.h"


uint renEEPrimMasterServer_Destructor_renEEPrimMasterServer(void);
uint renEEPrimMasterServer_FreeClient(svrClient *);
uint renEEPrimMasterServer_AllocateClient(svrClientParm const *);
uint renEEPrimMasterServer_vtbl;


#endif
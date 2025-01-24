#ifndef RENLIGHTSERVER_H
#define RENLIGHTSERVER_H

#include "structs.h"


uint renLightServer_CreateMasterContext(void);
uint renLightServer_Destructor_renLightServer(void);
uint renLightServer_vtbl;
uint renLightServer_sm_pMasterContext;


#endif
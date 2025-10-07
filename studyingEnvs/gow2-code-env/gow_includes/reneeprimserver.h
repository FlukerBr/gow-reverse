#ifndef RENEEPRIMSERVER_H
#define RENEEPRIMSERVER_H

#include "structs.h"


uint renEEPrimServer_Destructor_renEEPrimServer(void);
uint renEEPrimServer_CreateMasterContext(void);
uint renEEPrimServer_renEEPrimServer(svrParm const *);
uint renEEPrimServer_vtbl;


#endif
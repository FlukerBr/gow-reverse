#ifndef FXSERVER_H
#define FXSERVER_H

#include "structs.h"


uint fxServer_ProcessServer(void);
uint fxServer_CreateMasterContext(void);
uint fxServer_Destructor_fxServer(void);
uint fxServer_fxServer(svrParm const *);
uint fxServer_gClientFactories;
uint fxServer_vtbl;


#endif
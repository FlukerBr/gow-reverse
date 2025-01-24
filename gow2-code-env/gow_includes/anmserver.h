#ifndef ANMSERVER_H
#define ANMSERVER_H

#include "structs.h"


uint anmServer_CreateMasterContext(void);
uint anmServer_Destructor_anmServer(void);
uint anmServer_ProcessVisibleClients(void);
uint anmServer_ProcessServer(void);
uint anmServer_vtbl;


#endif
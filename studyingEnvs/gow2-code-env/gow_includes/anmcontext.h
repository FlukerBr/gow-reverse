#ifndef ANMCONTEXT_H
#define ANMCONTEXT_H

#include "structs.h"


uint anmContext_FreeClient(svrClient *);
uint anmContext_AllocateClient(svrClientParm const *);
uint anmContext_ProcessServer(void);
uint anmContext_Destructor_anmContext(void);
uint anmContext_CreatePools(void);
uint anmContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint anmContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint anmContext_vtbl;


#endif
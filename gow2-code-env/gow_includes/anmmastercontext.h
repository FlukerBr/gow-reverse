#ifndef ANMMASTERCONTEXT_H
#define ANMMASTERCONTEXT_H

#include "structs.h"


uint anmMasterContext_FreeClient(svrClient *);
uint anmMasterContext_AllocateClient(svrClientParm const *);
uint anmMasterContext_Destructor_anmMasterContext(void);
uint anmMasterContext_vtbl;


#endif
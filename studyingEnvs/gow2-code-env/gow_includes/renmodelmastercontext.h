#ifndef RENMODELMASTERCONTEXT_H
#define RENMODELMASTERCONTEXT_H

#include "structs.h"


uint renModelMasterContext_FreeClient(svrClient *);
uint renModelMasterContext_AllocateClient(svrClientParm const *);
uint renModelMasterContext_Destructor_renModelMasterContext(void);
uint renModelMasterContext_vtbl;


#endif
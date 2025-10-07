#ifndef FXSERVERMASTERCONTEXT_H
#define FXSERVERMASTERCONTEXT_H

#include "structs.h"


uint fxServerMasterContext_Destructor_fxServerMasterContext(void);
uint fxServerMasterContext_FreeClient(svrClient *);
uint fxServerMasterContext_AllocateClient(svrClientParm const *);
uint fxServerMasterContext_vtbl;


#endif
#ifndef WYPSERVERMASTERCONTEXT_H
#define WYPSERVERMASTERCONTEXT_H

#include "structs.h"


uint wypServerMasterContext_Destructor_wypServerMasterContext(void);
uint wypServerMasterContext_FreeClient(svrClient *);
uint wypServerMasterContext_AllocateClient(svrClientParm const *);
uint wypServerMasterContext_ProcessServer(void);
uint wypServerMasterContext_vtbl;


#endif
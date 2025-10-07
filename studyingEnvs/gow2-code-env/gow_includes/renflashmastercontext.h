#ifndef RENFLASHMASTERCONTEXT_H
#define RENFLASHMASTERCONTEXT_H

#include "structs.h"


uint renFlashMasterContext_FreeClient(svrClient *);
uint renFlashMasterContext_AllocateClient(svrClientParm const *);
uint renFlashMasterContext_Destructor_renFlashMasterContext(void);
uint renFlashMasterContext_renFlashMasterContext(svrClientParm const *);
uint renFlashMasterContext_vtbl;


#endif
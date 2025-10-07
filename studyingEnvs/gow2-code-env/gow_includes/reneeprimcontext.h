#ifndef RENEEPRIMCONTEXT_H
#define RENEEPRIMCONTEXT_H

#include "structs.h"


uint renEEPrimContext_Destructor_renEEPrimContext(void);
uint renEEPrimContext_FreeClient(svrClient *);
uint renEEPrimContext_AllocateClient(svrClientParm const *);
uint renEEPrimContext_ProcessServer(void);
uint renEEPrimContext_Prep(void);
uint renEEPrimContext_vtbl;


#endif
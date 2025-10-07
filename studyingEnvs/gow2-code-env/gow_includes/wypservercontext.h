#ifndef WYPSERVERCONTEXT_H
#define WYPSERVERCONTEXT_H

#include "structs.h"


uint wypServerContext_FreeClient(svrClient *);
uint wypServerContext_AllocateClient(svrClientParm const *);
uint wypServerContext_Destructor_wypServerContext(void);
uint wypServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint wypServerContext_vtbl;


#endif
#ifndef RENGROBSERVERCONTEXT_H
#define RENGROBSERVERCONTEXT_H

#include "structs.h"


uint renGROBServerContext_CleanUp(void);
uint renGROBServerContext_Prep(void);
uint renGROBServerContext_CreateDefaultParm(int);
uint renGROBServerContext_Destructor_renGROBServerContext(void);
uint renGROBServerContext_ProcessServer(void);
uint renGROBServerContext_renGROBServerContext(svrParm const *);
uint renGROBServerContext_vtbl;


#endif
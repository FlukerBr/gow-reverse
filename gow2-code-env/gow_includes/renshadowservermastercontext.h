#ifndef RENSHADOWSERVERMASTERCONTEXT_H
#define RENSHADOWSERVERMASTERCONTEXT_H

#include "structs.h"


uint renShadowServerMasterContext_FreeClient(svrClient *);
uint renShadowServerMasterContext_AllocateClient(svrClientParm const *);
uint renShadowServerMasterContext_Destructor_renShadowServerMasterContext(void);
uint renShadowServerMasterContext_vtbl;


#endif
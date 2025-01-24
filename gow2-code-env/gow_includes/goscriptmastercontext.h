#ifndef GOSCRIPTMASTERCONTEXT_H
#define GOSCRIPTMASTERCONTEXT_H

#include "structs.h"


uint goScriptMasterContext_FreeClient(svrClient *);
uint goScriptMasterContext_AllocateClient(svrClientParm const *);
uint goScriptMasterContext_Destructor_goScriptMasterContext(void);
uint goScriptMasterContext_NotifyClientDisconnect(svrClient *);
uint goScriptMasterContext_NotifyClientConnect(svrClient *);
uint goScriptMasterContext_ProcessServer(void);
uint goScriptMasterContext_vtbl;


#endif
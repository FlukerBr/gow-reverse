#ifndef GOSCRIPTCONTEXT_H
#define GOSCRIPTCONTEXT_H

#include "structs.h"


uint goScriptContext_CreateDefaultParm(int);
uint goScriptContext_Destructor_goScriptContext(void);
uint goScriptContext_CallAllDisconnectCodes(void);
uint goScriptContext_CallAllConnectCodes(void);
uint goScriptContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint goScriptContext_ProcessServer(void);
uint goScriptContext_NotifyClientDisconnect(svrClient *);
uint goScriptContext_NotifyClientConnect(svrClient *);
uint goScriptContext_FreeClient(svrClient *);
uint goScriptContext_AllocateClient(svrClientParm const *);
uint goScriptContext_vtbl;


#endif
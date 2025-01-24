#ifndef GOSERVERCONTEXT_H
#define GOSERVERCONTEXT_H

#include "structs.h"


uint goServerContext_Destructor_goServerContext(void);
uint goServerContext_UnParentGameObjects(void);
uint goServerContext_ParentGameObjects(void);
uint goServerContext_FindGO(wadContext *,ushort);
uint goServerContext_CallCallback(goEvent const *);
uint goServerContext_SetCallback(void (*)(goServerContext *,goEvent const *,void *),void *);
uint goServerContext_ProcessServer(void);
uint goServerContext_EndClient(svrClient *);
uint goServerContext_StartClient(svrClient *,svrClientParm const *);
uint goServerContext_NotifyClientDisconnect(svrClient *);
uint goServerContext_NotifyClientConnect(svrClient *);
uint goServerContext_CreateDefaultParm(int);
uint goServerContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint goServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint goServerContext_FreeClient(svrClient *);
uint goServerContext_AllocateClient(svrClientParm const *);
uint goServerContext_goServerContext(svrParm const *);
uint goServerContext_vtbl;


#endif
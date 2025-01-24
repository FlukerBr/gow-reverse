#ifndef BHVRMASTERCONTEXT_H
#define BHVRMASTERCONTEXT_H

#include "structs.h"


uint bhvrMasterContext_FreeClient(svrClient *);
uint bhvrMasterContext_AllocateClient(svrClientParm const *);
uint bhvrMasterContext_Destructor_bhvrMasterContext(void);
uint bhvrMasterContext_ProcessServer(void);
uint bhvrMasterContext_SendEvent(goEvent const *);
uint bhvrMasterContext_NotifyClientDisconnect(svrClient *);
uint bhvrMasterContext_vtbl;


#endif
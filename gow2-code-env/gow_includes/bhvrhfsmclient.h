#ifndef BHVRHFSMCLIENT_H
#define BHVRHFSMCLIENT_H

#include "structs.h"


uint bhvrHFSMClient_RunExitCodes(void);
uint bhvrHFSMClient_SetStateVar(ushort,int);
uint bhvrHFSMClient_GetStateVar(ushort);
uint bhvrHFSMClient_Process(void);
uint bhvrHFSMClient_ProcessEvent(goEvent const *);
uint bhvrHFSMClient_Destructor_bhvrHFSMClient(void);
uint bhvrHFSMClient_Reset(int);
uint bhvrHFSMClient_bhvrHFSMClient(svrClientParm const *);
uint bhvrHFSMClient_vtbl;


#endif
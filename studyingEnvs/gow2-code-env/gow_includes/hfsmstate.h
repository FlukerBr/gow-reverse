#ifndef HFSMSTATE_H
#define HFSMSTATE_H

#include "structs.h"


uint hfsmState_hfsmState(void);
uint hfsmState_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint hfsmState_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint hfsmState_vtbl;


#endif
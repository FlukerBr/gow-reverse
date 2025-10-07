#ifndef HFSMMANAGER_H
#define HFSMMANAGER_H

#include "structs.h"


uint hfsmManager_GetHFSM(signed char);
uint hfsmManager_GetHFSMName(signed char);
uint hfsmManager_GetDataSize(signed char);
uint hfsmManager_GetHFSMID(char const *);
uint hfsmManager_RegisterHFSMCreator(HFSMCreatorBase *);
uint hfsmManager_ms_hfsmRegistry;
uint hfsmManager_ms_NumHFSM;


#endif
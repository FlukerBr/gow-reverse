#ifndef HFSM_DEFAULT_H
#define HFSM_DEFAULT_H

#include "structs.h"


uint HFSM_Default_hfsmDefault_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Default_hfsmDefault_Destructor_hfsmDefault(void);
uint HFSM_Default_hfsmDefault_hfsmDefault(void);
uint HFSM_Default_HFSMCreator_GetDependantClass(int);
uint HFSM_Default_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Default_HFSMCreator_GetDataSize(void);
uint HFSM_Default_HFSMCreator_GetName(void);
uint HFSM_Default_HFSMCreator_Create(void);
uint HFSM_Default_HFSMCreator_HFSMCreator(void);
uint HFSM_Default_CreatorInstance;
uint HFSM_Default_hfsmDefault_vtbl;
uint HFSM_Default_HFSMCreator_vtbl;


#endif
#ifndef HFSM_PEGASUS_H
#define HFSM_PEGASUS_H

#include "structs.h"


uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStart_EntryCode(bhvrHFSMClient *,goPegasus *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStart_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStart_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStorage_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStorage_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStart_SStart(HFSM_Pegasus_hfsmPegasus_SPegasus *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStorage_SStorage(HFSM_Pegasus_hfsmPegasus_SPegasus *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_SPegasus_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_hfsmPegasus_hfsmPegasus(void);
uint HFSM_Pegasus_HFSMCreator_GetDataSize(void);
uint HFSM_Pegasus_hfsmPegasus_Destructor_hfsmPegasus(void);
uint HFSM_Pegasus_HFSMCreator_HFSMCreator(void);
uint HFSM_Pegasus_hfsmPegasus___dl(void *);
uint HFSM_Pegasus_hfsmPegasus_Allocate(wadContext *);
uint HFSM_Pegasus_hfsmPegasus_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Pegasus_HFSMCreator_GetDependantClass(int);
uint HFSM_Pegasus_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Pegasus_HFSMCreator_GetName(void);
uint HFSM_Pegasus_HFSMCreator_Create(void);
uint HFSM_Pegasus_GetParam(bhvrHFSMClient *);
uint HFSM_Pegasus_hfsmPegasus_sm_hfsmPegasusMultiPool;
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStorage_vtbl;
uint HFSM_Pegasus_hfsmPegasus_SPegasus_SStart_vtbl;
uint HFSM_Pegasus_hfsmPegasus_SPegasus_vtbl;
uint HFSM_Pegasus_HFSMCreator_vtbl;
uint HFSM_Pegasus_hfsmPegasus_vtbl;


#endif
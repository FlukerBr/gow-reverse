#ifndef HFSM_IO_CSM_H
#define HFSM_IO_CSM_H

#include "structs.h"


uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SDone_EntryCode(bhvrHFSMClient *,IO_CSM_Inter *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SDone_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SDone_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SDone_SDone(HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SInitial_SInitial(HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_hfsmIO_CSM_hfsmIO_CSM(void);
uint HFSM_IO_CSM_HFSMCreator_GetDataSize(void);
uint HFSM_IO_CSM_hfsmIO_CSM_Destructor_hfsmIO_CSM(void);
uint HFSM_IO_CSM_HFSMCreator_HFSMCreator(void);
uint HFSM_IO_CSM_hfsmIO_CSM___dl(void *);
uint HFSM_IO_CSM_hfsmIO_CSM_Allocate(wadContext *);
uint HFSM_IO_CSM_hfsmIO_CSM_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_CSM_HFSMCreator_GetDependantClass(int);
uint HFSM_IO_CSM_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_IO_CSM_HFSMCreator_GetName(void);
uint HFSM_IO_CSM_HFSMCreator_Create(void);
uint HFSM_IO_CSM_GetParam(bhvrHFSMClient *);
uint HFSM_IO_CSM_hfsmIO_CSM_sm_hfsmIO_CSMMultiPool;
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SInitial_vtbl;
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_SDone_vtbl;
uint HFSM_IO_CSM_hfsmIO_CSM_SIO_CSM_vtbl;
uint HFSM_IO_CSM_HFSMCreator_vtbl;
uint HFSM_IO_CSM_hfsmIO_CSM_vtbl;


#endif
#ifndef HFSM_IO_TANDF_H
#define HFSM_IO_TANDF_H

#include "structs.h"


uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SDone_EntryCode(bhvrHFSMClient *,IO_TandF_Inter *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SDone_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SDone_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SDone_SDone(HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SInitial_SInitial(HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_hfsmIO_TandF_hfsmIO_TandF(void);
uint HFSM_IO_TandF_HFSMCreator_GetDataSize(void);
uint HFSM_IO_TandF_hfsmIO_TandF_Destructor_hfsmIO_TandF(void);
uint HFSM_IO_TandF_HFSMCreator_HFSMCreator(void);
uint HFSM_IO_TandF_hfsmIO_TandF___dl(void *);
uint HFSM_IO_TandF_hfsmIO_TandF_Allocate(wadContext *);
uint HFSM_IO_TandF_hfsmIO_TandF_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_TandF_HFSMCreator_GetDependantClass(int);
uint HFSM_IO_TandF_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_IO_TandF_HFSMCreator_GetName(void);
uint HFSM_IO_TandF_HFSMCreator_Create(void);
uint HFSM_IO_TandF_GetParam(bhvrHFSMClient *);
uint HFSM_IO_TandF_hfsmIO_TandF_sm_hfsmIO_TandFMultiPool;
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SInitial_vtbl;
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_SDone_vtbl;
uint HFSM_IO_TandF_hfsmIO_TandF_SIO_TandF_vtbl;
uint HFSM_IO_TandF_HFSMCreator_vtbl;
uint HFSM_IO_TandF_hfsmIO_TandF_vtbl;


#endif
#ifndef HFSM_IO_MISC_H
#define HFSM_IO_MISC_H

#include "structs.h"


uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SDone_EntryCode(bhvrHFSMClient *,IOInter *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SDone_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SDone_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SDone_SDone(HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SInitial_SInitial(HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_hfsmIO_Misc_hfsmIO_Misc(void);
uint HFSM_IO_Misc_HFSMCreator_GetDataSize(void);
uint HFSM_IO_Misc_hfsmIO_Misc_Destructor_hfsmIO_Misc(void);
uint HFSM_IO_Misc_HFSMCreator_HFSMCreator(void);
uint HFSM_IO_Misc_hfsmIO_Misc___dl(void *);
uint HFSM_IO_Misc_hfsmIO_Misc_Allocate(wadContext *);
uint HFSM_IO_Misc_hfsmIO_Misc_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_IO_Misc_HFSMCreator_GetDependantClass(int);
uint HFSM_IO_Misc_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_IO_Misc_HFSMCreator_GetName(void);
uint HFSM_IO_Misc_HFSMCreator_Create(void);
uint HFSM_IO_Misc_GetParam(bhvrHFSMClient *);
uint HFSM_IO_Misc_hfsmIO_Misc_sm_hfsmIO_MiscMultiPool;
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SInitial_vtbl;
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_SDone_vtbl;
uint HFSM_IO_Misc_hfsmIO_Misc_SIO_Misc_vtbl;
uint HFSM_IO_Misc_HFSMCreator_vtbl;
uint HFSM_IO_Misc_hfsmIO_Misc_vtbl;


#endif
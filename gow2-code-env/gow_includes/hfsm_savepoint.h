#ifndef HFSM_SAVEPOINT_H
#define HFSM_SAVEPOINT_H

#include "structs.h"


uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_SInitial_SInitial(HFSM_SavePoint_hfsmSavePoint_SSavePoint *);
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_SavePoint_hfsmSavePoint_hfsmSavePoint(void);
uint HFSM_SavePoint_HFSMCreator_GetDataSize(void);
uint HFSM_SavePoint_hfsmSavePoint_Destructor_hfsmSavePoint(void);
uint HFSM_SavePoint_HFSMCreator_HFSMCreator(void);
uint HFSM_SavePoint_hfsmSavePoint___dl(void *);
uint HFSM_SavePoint_hfsmSavePoint_Allocate(wadContext *);
uint HFSM_SavePoint_hfsmSavePoint_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_SavePoint_HFSMCreator_GetDependantClass(int);
uint HFSM_SavePoint_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_SavePoint_HFSMCreator_GetName(void);
uint HFSM_SavePoint_HFSMCreator_Create(void);
uint HFSM_SavePoint_GetParam(bhvrHFSMClient *);
uint HFSM_SavePoint_hfsmSavePoint_sm_hfsmSavePointMultiPool;
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_SInitial_vtbl;
uint HFSM_SavePoint_hfsmSavePoint_SSavePoint_vtbl;
uint HFSM_SavePoint_HFSMCreator_vtbl;
uint HFSM_SavePoint_hfsmSavePoint_vtbl;


#endif
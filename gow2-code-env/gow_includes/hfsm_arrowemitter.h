#ifndef HFSM_ARROWEMITTER_H
#define HFSM_ARROWEMITTER_H

#include "structs.h"


uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_SInitial_SInitial(HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_hfsmArrowEmitter(void);
uint HFSM_ArrowEmitter_HFSMCreator_GetDataSize(void);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_Destructor_hfsmArrowEmitter(void);
uint HFSM_ArrowEmitter_HFSMCreator_HFSMCreator(void);
uint HFSM_ArrowEmitter_hfsmArrowEmitter___dl(void *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_Allocate(wadContext *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_ArrowEmitter_HFSMCreator_GetDependantClass(int);
uint HFSM_ArrowEmitter_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_ArrowEmitter_HFSMCreator_GetName(void);
uint HFSM_ArrowEmitter_HFSMCreator_Create(void);
uint HFSM_ArrowEmitter_GetParam(bhvrHFSMClient *);
uint HFSM_ArrowEmitter_hfsmArrowEmitter_sm_hfsmArrowEmitterMultiPool;
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_SInitial_vtbl;
uint HFSM_ArrowEmitter_hfsmArrowEmitter_SArrowEmitter_vtbl;
uint HFSM_ArrowEmitter_HFSMCreator_vtbl;
uint HFSM_ArrowEmitter_hfsmArrowEmitter_vtbl;


#endif
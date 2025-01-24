#ifndef HFSM_REACTIVE_H
#define HFSM_REACTIVE_H

#include "structs.h"


uint HFSM_Reactive_hfsmReactive_SReactive_SDestroy_EntryCode(bhvrHFSMClient *,CReactivePtr *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDying_EntryCode(bhvrHFSMClient *,CReactivePtr *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDestroy_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDestroy_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDying_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDying_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SFrozen_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SFrozen_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SIdle_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SIdle_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SInitialize_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SInitialize_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDestroy_SDestroy(HFSM_Reactive_hfsmReactive_SReactive *);
uint HFSM_Reactive_hfsmReactive_SReactive_SDying_SDying(HFSM_Reactive_hfsmReactive_SReactive *);
uint HFSM_Reactive_hfsmReactive_SReactive_SFrozen_SFrozen(HFSM_Reactive_hfsmReactive_SReactive *);
uint HFSM_Reactive_hfsmReactive_SReactive_SIdle_SIdle(HFSM_Reactive_hfsmReactive_SReactive *);
uint HFSM_Reactive_hfsmReactive_SReactive_SInitialize_SInitialize(HFSM_Reactive_hfsmReactive_SReactive *);
uint HFSM_Reactive_hfsmReactive_SReactive_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_SReactive_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_hfsmReactive_hfsmReactive(void);
uint HFSM_Reactive_HFSMCreator_GetDataSize(void);
uint HFSM_Reactive_hfsmReactive_Destructor_hfsmReactive(void);
uint HFSM_Reactive_HFSMCreator_HFSMCreator(void);
uint HFSM_Reactive_hfsmReactive___dl(void *);
uint HFSM_Reactive_hfsmReactive_Allocate(wadContext *);
uint HFSM_Reactive_hfsmReactive_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Reactive_HFSMCreator_GetDependantClass(int);
uint HFSM_Reactive_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Reactive_HFSMCreator_GetName(void);
uint HFSM_Reactive_HFSMCreator_Create(void);
uint HFSM_Reactive_GetParam(bhvrHFSMClient *);
uint HFSM_Reactive_hfsmReactive_sm_hfsmReactiveMultiPool;
uint HFSM_Reactive_hfsmReactive_SReactive_SInitialize_vtbl;
uint HFSM_Reactive_hfsmReactive_SReactive_SIdle_vtbl;
uint HFSM_Reactive_hfsmReactive_SReactive_SFrozen_vtbl;
uint HFSM_Reactive_hfsmReactive_SReactive_SDying_vtbl;
uint HFSM_Reactive_hfsmReactive_SReactive_SDestroy_vtbl;
uint HFSM_Reactive_hfsmReactive_SReactive_vtbl;
uint HFSM_Reactive_HFSMCreator_vtbl;
uint HFSM_Reactive_hfsmReactive_vtbl;


#endif
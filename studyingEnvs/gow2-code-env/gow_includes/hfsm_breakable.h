#ifndef HFSM_BREAKABLE_H
#define HFSM_BREAKABLE_H

#include "structs.h"


uint HFSM_Breakable_hfsmBreakable_SBreakable_SDone_EntryCode(bhvrHFSMClient *,goBreakable *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSmash_EntryCode(bhvrHFSMClient *,goBreakable *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SInitial_EntryCode(bhvrHFSMClient *,goBreakable *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SDone_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SDone_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSmash_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSmash_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SIdle_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SIdle_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSTART_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSTART_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SDone_SDone(HFSM_Breakable_hfsmBreakable_SBreakable *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSmash_SSmash(HFSM_Breakable_hfsmBreakable_SBreakable *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SIdle_SIdle(HFSM_Breakable_hfsmBreakable_SBreakable *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SInitial_SInitial(HFSM_Breakable_hfsmBreakable_SBreakable *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSTART_SSTART(HFSM_Breakable_hfsmBreakable_SBreakable *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_SBreakable_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_hfsmBreakable_hfsmBreakable(void);
uint HFSM_Breakable_HFSMCreator_GetDataSize(void);
uint HFSM_Breakable_hfsmBreakable_Destructor_hfsmBreakable(void);
uint HFSM_Breakable_HFSMCreator_HFSMCreator(void);
uint HFSM_Breakable_hfsmBreakable___dl(void *);
uint HFSM_Breakable_hfsmBreakable_Allocate(wadContext *);
uint HFSM_Breakable_hfsmBreakable_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Breakable_HFSMCreator_GetDependantClass(int);
uint HFSM_Breakable_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Breakable_HFSMCreator_GetName(void);
uint HFSM_Breakable_HFSMCreator_Create(void);
uint HFSM_Breakable_GetParam(bhvrHFSMClient *);
uint HFSM_Breakable_hfsmBreakable_sm_hfsmBreakableMultiPool;
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSTART_vtbl;
uint HFSM_Breakable_hfsmBreakable_SBreakable_SInitial_vtbl;
uint HFSM_Breakable_hfsmBreakable_SBreakable_SIdle_vtbl;
uint HFSM_Breakable_hfsmBreakable_SBreakable_SSmash_vtbl;
uint HFSM_Breakable_hfsmBreakable_SBreakable_SDone_vtbl;
uint HFSM_Breakable_hfsmBreakable_SBreakable_vtbl;
uint HFSM_Breakable_HFSMCreator_vtbl;
uint HFSM_Breakable_hfsmBreakable_vtbl;


#endif
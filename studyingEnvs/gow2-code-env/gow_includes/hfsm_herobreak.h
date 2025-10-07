#ifndef HFSM_HEROBREAK_H
#define HFSM_HEROBREAK_H

#include "structs.h"


uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SDone_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SDone_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SInitial_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SInitial_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SDone_SDone(HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SInitial_SInitial(HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_hfsmHeroBreak_hfsmHeroBreak(void);
uint HFSM_HeroBreak_HFSMCreator_GetDataSize(void);
uint HFSM_HeroBreak_hfsmHeroBreak_Destructor_hfsmHeroBreak(void);
uint HFSM_HeroBreak_HFSMCreator_HFSMCreator(void);
uint HFSM_HeroBreak_hfsmHeroBreak___dl(void *);
uint HFSM_HeroBreak_hfsmHeroBreak_Allocate(wadContext *);
uint HFSM_HeroBreak_hfsmHeroBreak_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_HeroBreak_HFSMCreator_GetDependantClass(int);
uint HFSM_HeroBreak_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_HeroBreak_HFSMCreator_GetName(void);
uint HFSM_HeroBreak_HFSMCreator_Create(void);
uint HFSM_HeroBreak_hfsmHeroBreak_sm_hfsmHeroBreakMultiPool;
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SInitial_vtbl;
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_SDone_vtbl;
uint HFSM_HeroBreak_hfsmHeroBreak_SHeroBreak_vtbl;
uint HFSM_HeroBreak_HFSMCreator_vtbl;
uint HFSM_HeroBreak_hfsmHeroBreak_vtbl;


#endif
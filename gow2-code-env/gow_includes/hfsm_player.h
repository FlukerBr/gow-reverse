#ifndef HFSM_PLAYER_H
#define HFSM_PLAYER_H

#include "structs.h"


uint HFSM_Player_hfsmPlayer_SPlayer_SDead_EntryCode(bhvrHFSMClient *,goPlayer *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SFROZEN_EntryCode(bhvrHFSMClient *,goPlayer *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SStart_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SStart_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SStart_EntryCode(bhvrHFSMClient *,goPlayer *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SDead_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SDead_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SFROZEN_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SFROZEN_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SStart_SStart(HFSM_Player_hfsmPlayer_SPlayer_SRunning *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_SDead_SDead(HFSM_Player_hfsmPlayer_SPlayer *);
uint HFSM_Player_hfsmPlayer_SPlayer_SFROZEN_SFROZEN(HFSM_Player_hfsmPlayer_SPlayer *);
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SRunning(HFSM_Player_hfsmPlayer_SPlayer *);
uint HFSM_Player_hfsmPlayer_SPlayer_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_SPlayer_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_hfsmPlayer_hfsmPlayer(void);
uint HFSM_Player_HFSMCreator_GetDataSize(void);
uint HFSM_Player_hfsmPlayer_Destructor_hfsmPlayer(void);
uint HFSM_Player_HFSMCreator_HFSMCreator(void);
uint HFSM_Player_hfsmPlayer___dl(void *);
uint HFSM_Player_hfsmPlayer_Allocate(wadContext *);
uint HFSM_Player_hfsmPlayer_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Player_HFSMCreator_GetDependantClass(int);
uint HFSM_Player_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Player_HFSMCreator_GetName(void);
uint HFSM_Player_HFSMCreator_Create(void);
uint HFSM_Player_hfsmPlayer_sm_hfsmPlayerMultiPool;
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_SStart_vtbl;
uint HFSM_Player_hfsmPlayer_SPlayer_SRunning_vtbl;
uint HFSM_Player_hfsmPlayer_SPlayer_SFROZEN_vtbl;
uint HFSM_Player_hfsmPlayer_SPlayer_SDead_vtbl;
uint HFSM_Player_hfsmPlayer_SPlayer_vtbl;
uint HFSM_Player_HFSMCreator_vtbl;
uint HFSM_Player_hfsmPlayer_vtbl;


#endif
#ifndef HFSM_ENEMY1_H
#define HFSM_ENEMY1_H

#include "structs.h"


uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SReaquire_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SReaquire_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SReaquire_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SSearch_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SSearch_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_STarget_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_STarget_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_STarget_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_Dispatch(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SPatrol_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SPatrol_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SWander_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SWander_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SStand_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SStand_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SDESTROYAI_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SSINK_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_PAUSE_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPREPDIE_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPAUSE_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SReaquire_SReaquire(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SSearch_SSearch(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_STarget_STarget(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SPatrol_SPatrol(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SWander_SWander(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SStand_SStand(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SInitialMove_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SInitialMove_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SCheckForClearSpawn_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SCheckForClearSpawn_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekSite_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekSite_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekTarget_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekTarget_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SDESTROYAI_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SDESTROYAI_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SSINK_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SSINK_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_PAUSE_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_PAUSE_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPREPDIE_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPREPDIE_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPAUSE_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPAUSE_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SAttack(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SNoTarget(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SInitialMove_SInitialMove(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SCheckForClearSpawn_SCheckForClearSpawn(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekSite_SSeekSite(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekTarget_SSeekTarget(HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SDESTROYAI_SDESTROYAI(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SSINK_SSINK(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_PAUSE_SFROZEN_PAUSE(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_SFROZEN(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPREPDIE_SPREPDIE(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPAUSE_SPAUSE(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SPatrol_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SWander_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SStand_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SStart(HFSM_Enemy1_hfsmEnemy1_SEnemy1 *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_ProcessEvent(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_CallExitCode(hfsmState *,bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_Dispatch(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SInitialMove_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SCheckForClearSpawn_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekSite_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekTarget_EntryCode(bhvrHFSMClient *,goAI *,goEvent const *);
uint HFSM_Enemy1_hfsmEnemy1_hfsmEnemy1(void);
uint HFSM_Enemy1_HFSMCreator_GetDataSize(void);
uint HFSM_Enemy1_hfsmEnemy1_Destructor_hfsmEnemy1(void);
uint HFSM_Enemy1_HFSMCreator_HFSMCreator(void);
uint HFSM_Enemy1_hfsmEnemy1___dl(void *);
uint HFSM_Enemy1_hfsmEnemy1_Allocate(wadContext *);
uint HFSM_Enemy1_hfsmEnemy1_GetStartState(bhvrHFSMClient *,goEvent const *);
uint HFSM_Enemy1_HFSMCreator_GetDependantClass(int);
uint HFSM_Enemy1_HFSMCreator_GetNumDependantClasses(void);
uint HFSM_Enemy1_HFSMCreator_GetName(void);
uint HFSM_Enemy1_HFSMCreator_Create(void);
uint HFSM_Enemy1_GetParam(bhvrHFSMClient *);
uint HFSM_Enemy1_hfsmEnemy1_sm_hfsmEnemy1MultiPool;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SStand_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SWander_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_SPatrol_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_STarget_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SSearch_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_SReaquire_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekTarget_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SSeekSite_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SCheckForClearSpawn_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SInitialMove_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SNoTarget_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_SAttack_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SStart_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPAUSE_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SPREPDIE_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SFROZEN_PAUSE_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SSINK_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_SDESTROYAI_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_SEnemy1_vtbl;
uint HFSM_Enemy1_HFSMCreator_vtbl;
uint HFSM_Enemy1_hfsmEnemy1_vtbl;


#endif
#ifndef ENTITY_H
#define ENTITY_H

#include "stdint.h"

extern void (*Entity_PreWadInit)(void);
extern void (*Entity_InternalInit)(void);
extern void (*Entity_Init)(void);
extern void (*Entity_ResetTimers)(void);
extern void (*Entity_AddEntityType)(Entity *(*)(void));
extern void (*Entity_Constructor)(goScript *);
extern void (*Entity_RestoreGOCallback)(goGameObject *,goEvent const &,void *);
extern void (*Entity_Connector)(goScript *);
extern void (*Entity_Destructor)(goScript *);
extern void (*Entity_Find)(ushort,wadContext const *);
extern void (*Entity_Update)(goScript *);
extern void (*Entity_UpdateMarker)(MarkerListItem *,goGameObject *,int);
extern void (*Entity_LineTestCallback)(void);
extern void (*Entity_Reset)(void);
extern void (*Entity_FindEntity)(goGameObject *,short,int);
extern void (*Entity_GetDynExpr)(sliCode *,int,void *,SLI_Type);
extern void (*Entity_SendEvent)(uint32_t,uint32_t,uint32_t,uint32_t,goGameObject *);
extern void (*Entity_SendEvent_Transmitter)(int,uint32_t,uint32_t,uint32_t);
extern void (*Entity_SetCamera)(Entity *,char const *);
extern void (*Entity_FindEnemyCreator)(goGameObject *);
extern void (*Entity_GetCreatureNameHash)(char const *);
extern void (*Entity_FindCreatureData)(char const *);
extern void (*Entity_CreatorCanCreate)(Entity *);
extern void (*Entity_Sandbagging)(Entity *);
extern void (*Entity_FillOutParamData)(Entity *,Enemy_ParamData *);
extern void (*Entity_CreateEnemy)(Entity *,Enemy_ParamData const *,VUMat4 const &);
extern void (*Entity_Destructor_Entity)(void);
extern void (*Entity_Entity)(void);
extern void (*Entity_AddToCreationList)(int);
extern void (*Entity_Asleep)(MarkerListItem *);
extern void (*Entity_SendEvent)(MarkerListItem *);
extern void (*Entity_QueueEvent)(MarkerListItem *,float);
extern void (*Entity_DeliverEvent)(MarkerListItem *);
extern void (*Entity_ActivateObjects)(MarkerListItem *);
extern void (*Entity_TriggerTargets)(MarkerListItem *);
extern void (*Entity_GetWorldMatrix)(void);
extern void (*Entity_GetWadName)(void);
extern void (*Entity_FirstLoad)(void);
extern void (*Entity_WadUnloading)(void);
extern void (*Entity_DefaultParms)(void);
extern void (*Entity_FindParmData)(void *,ushort const *,ushort,SLI_Type);
extern void (*Entity_Destroy)(void);
extern void (*Entity_Enabled)(void);
extern void (*Entity_RefractoryPeriod)(void);
extern void (*Entity_ResponseDelay)(void);
extern void (*Entity_DelayedEnable)(void);
extern void (*Entity_Execute)(void);
extern void (*Entity_DebugString)(void);
extern void (*Entity_MarkerID)(void);
extern void (*Entity_MarkerMatch)(int);
extern void (*Entity_EventNotify)(MsgListItem *);
extern void (*Ent_EventSensor_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_Animator_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_SoundEmitter_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_SoundController_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_VisController_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_EventTransmitter_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Entity_CreatePlayer)(void);
extern void (*Entity_StartPlayer)(char const *);
extern void (*Entity_DestroyPlayer)(void);
extern void (*Ent_PlayerCreator_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_EnemyCreator_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_ObjectCreator_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Entity_FindAnimIndex)(anmParm const *,char const *,wadContext const *);
extern void (*Entity_FindAnmParm)(char const *);
extern void (*Entity_Recycle)(MarkerListItem *);
extern void (*Entity_MakeSaveListItem)(MarkerListItem *);
extern void (*Entity_CreateGO)(VUMat4 const &,uint32_t,int,int,int,int,AI_Data *);
extern void (*Entity_CreateGO)(char const *,int,int);
extern void (*Entity_DestroyGO)(goGameObject *,int);
extern void (*Entity_EntityGOCallback)(goGameObject *,goEvent const &,void *);
extern void (*Entity_EntityGOCtxtCallback)(goServerContext *,goEvent const &,void *);
extern void (*Entity_FreeAllBhvrClientParms)(goGameObject *);
extern void (*Entity_FreeBhvrClientParm)(bhvrClient *);
extern void (*Entity_RegisterMarker)(MarkerListItem *);
extern void (*Entity_UnregisterMarker)(MarkerListItem *);
extern void (*Entity_TriggerDestructionSensors)(goGameObject *);
extern void (*Entity_RemoveMarker)(goGameObject *);
extern void (*Entity_RemoveBhvr)(bhvrClient *);
extern void (*Entity_RemoveGO)(goGameObject *);
extern void (*Entity_FindPlayerCreator)(char const *,char const *);
extern void (*Entity_FindPlayerCreatorForStart)(char const *);
extern void (*Entity_FindPlayerCreatorForWarp)(char const *,char const *);
extern void (*Ent_Marker_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_GlobalData_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Ent_LevelData_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Entity_DoMsg)(int,float,int);
extern void (*Entity_ConnectClients)(goGameObject *,int,int,int);
extern void (*Entity_SetGrobAlpha)(goGameObject *,float,int);
extern void (*Entity_SaveData)(void);
extern void (*Entity_LoadData)(void);
extern void (*Entity_GetStateData)(void *);
extern void (*Entity_SetStateData)(void const *);
extern void (*Entity_RemoveWadContext)(wadContext const *);
extern void (*Entity_MakeSaveList)(WadInfo *);
extern void (*Entity_ResetSaveList)(WadInfo *);
extern void (*Entity_RestoreEntityEvents)(WadInfo *,Entity *);
extern void (*Entity_SetGOSavable)(goGameObject *,MarkerListItem *);
extern void (*Entity_SaveGOState)(WadInfo *,goGameObject *);
extern void (*Entity_GetAnimFileIdx)(anmClient *);
extern void (*Entity_GetAnimPlayerEndCallback)(anmClient *);
extern void (*Entity_SaveEntityState)(Entity *,float,ushort,ushort);
extern void (*Entity_RestoreEntityState)(WadInfo *,Entity *);
extern void (*Entity_RestoreGOState)(WadInfo *,goGameObject *);
extern void (*Entity_WadLoadCallback)(int,uint32_t);
extern void (*Entity_LevelWarp)(void);
extern void (*Entity_DoLevelWarp)(void);
extern void (*Entity_DoPlayerWarp)(char const *);
extern void (*Entity_PlayerWarped)(void);
extern void (*Entity_DoPlayerJump)(char const *,char const *);
extern void (*Entity_JustCheckPointed)(void);
extern void (*Entity_JumpToWad)(char const *);
extern void (*Entity_DoJumpToWad)(void);
extern void (*Entity_Mpeg)(char const *,int,int);
extern void (*Entity_LoadMpeg)(char const *,int);
extern void (*Entity_UnloadMPEG)(void);
extern void (*Entity_InitSeenMPEGs)(void);
extern void (*Entity_SeenMPEGBefore)(char const *,int);
extern void (*Entity_LoadUpdate)(void);
extern void (*Entity_LoadUpdateReset)(void);
extern void (*Entity_StateNotify)(MarkerListItem *,Entity_StateID);
extern void (*Entity_HandleEvent)(MarkerListItem *);
extern void (*Entity_Activate)(goGameObject *,MarkerListItem *);
extern void (*Entity_Info)(int,char const *,...);

#define Entity_nEntityTypes *((uint32_t *))
#define Entity_markerTypeID *((uint32_t *))
#define Entity_playerGO *((uint32_t *))
#define Entity_playerMarker *((uint32_t *))
#define Entity_playerWarped *((uint32_t *))
#define Entity_warpWadSlot *((uint32_t *))
#define Entity_warpWadsReady *((uint32_t *))
#define Entity_warpPlayerReady *((uint32_t *))
#define Entity_timeInFrames *((uint32_t *))
#define Entity_timeInSeconds *((uint32_t *))
#define Entity_restoredTimeInSeconds *((uint32_t *))
#define Entity_curEntity *((uint32_t *))
#define Entity_curMLI *((uint32_t *))
#define Entity_constructorData *((uint32_t *))
#define Entity_registeringMarker *((uint32_t *))
#define Entity_forceZeroResponseDelay *((uint32_t *))
#define Entity_forceMinResponseDelay *((uint32_t *))
#define Entity_restoringWads *((uint32_t *))
#define Entity_nWadsToRestore *((uint32_t *))
#define Entity_saveGameID *((uint32_t *))
#define Entity_saveMenuID *((uint32_t *))
#define Entity_warpedFrame *((uint32_t *))
#define Entity_doGoToShell *((uint32_t *))
#define Entity_doFailure *((uint32_t *))
#define Entity_doWarp *((uint32_t *))
#define Entity_doCheckPoint *((uint32_t *))
#define Entity_gameRestarting *((uint32_t *))
#define Entity_creatingGO *((uint32_t *))
#define Entity_mpegHeapZone *((uint32_t *))
#define Entity_mpegOverrideSkippable *((uint32_t *))
#define Entity_doMPEG *((uint32_t *))
#define Entity_stateMPEG *((uint32_t *))
#define Entity_mpegDoneFrame *((uint32_t *))
#define Entity_doJumpWad *((uint32_t *))
#define Entity_jumpWadLoaded *((uint32_t *))
#define Entity_vtbl *((uint32_t *))
#define Entity_prevPlayerPos *((uint32_t *))
#define Entity_globalMarkerCtxtList *((uint32_t *))
#define Entity_state *((uint32_t *))
#define Entity_jumpSrcWadName *((uint32_t *))
#define Entity_jumpDstWadName *((uint32_t *))
#define Entity_entityTypeInfo *((uint32_t *))

#endif
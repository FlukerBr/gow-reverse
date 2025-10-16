#ifndef ENTITY_H
#define ENTITY_H

#include "type.h"
#include "vuvec.h"
#include "gogameobject.h"
#include "goscript.h"

typedef struct DynExpr_
{
    int sliOffset;
    union u
    {
        float f;
        INT32 i;
        BOOL b;
        char *s;
        void *v;
    };
    
}DynExpr;

typedef struct sliCode_
{
    UINT8 *codeStart;
} sliCode;


typedef struct entity {
    VUMat4 matrix;
    UINT16 jointID;
    UINT16 id;
    INT16 volumeID;
    UINT16 policy;
    INT16 wiID;
    UINT16 nTargets;
    UINT16 *targetArray;
    char *name;
    struct goGameObject_ *go;
    sliCode sli;
    unsigned int lastEventField[3];
    FLOAT lastTriggerTime;
    DynExpr m_Enabled;
    DynExpr m_RefractoryPeriod;
    DynExpr m_ResponseDelay;
    DynExpr m_DelayedEnable;
    DynExpr m_Execute;
    DynExpr m_DebugString;
    DynExpr m_MarkerID;
    struct Entity__vtable *__vtable;
    undefined field21_0xa8;
    undefined field22_0xa9;
    undefined field23_0xaa;
    undefined field24_0xab;
    undefined field25_0xac;
    undefined field26_0xad;
    undefined field27_0xae;
    undefined field28_0xaf;
} Entity;


typedef UINT32 goEvent;
typedef UINT32 wadContext;
typedef UINT32 MarkerListItem;
typedef UINT32 SLI_Type;
typedef UINT32 Enemy_ParamData;
typedef UINT32 MsgListItem;
typedef UINT32 anmParm;
typedef UINT32 goServerContext;
typedef UINT32 bhvrClient;
typedef UINT32 goScriAI_Datapt;
typedef UINT32 WadInfo;
typedef UINT32 anmClient;
typedef UINT32 Entity_StateID;
typedef UINT32 AI_Data;


extern void Entity_PreWadInit(Entity *);
extern void Entity_InternalInit(Entity *);
extern void Entity_Init(Entity *);
extern void Entity_ResetTimers(Entity *);
extern void Entity_AddEntityType(Entity *, Entity *(*)(Entity *));
extern void Entity_Constructor(Entity *, goScript *);
extern void Entity_RestoreGOCallback(Entity *, goGameObject *,goEvent const *,void *);
extern void Entity_Connector(Entity *, goScript *);
extern void Entity_Destructor(Entity *, goScript *);
extern void Entity_Find(Entity *, ushort,wadContext const *);
extern void Entity_Update(Entity *, goScript *);
extern void Entity_UpdateMarker(Entity *, MarkerListItem *,goGameObject *,int);
extern void Entity_LineTestCallback(Entity *);
extern void Entity_Reset(Entity *);
extern void Entity_FindEntity(Entity *, goGameObject *,short,int);
extern void Entity_GetDynExpr(Entity *, sliCode *,int,void *,SLI_Type);
extern void Entity_SendEvent(Entity *, uint,uint,uint,uint,goGameObject *);
extern void Entity_SendEvent_Transmitter(Entity *, int,uint,uint,uint);
extern void Entity_SetCamera(Entity *, Entity *,char const *);
extern void Entity_FindEnemyCreator(Entity *, goGameObject *);
extern void Entity_GetCreatureNameHash(Entity *, char const *);
extern void Entity_FindCreatureData(Entity *, char const *);
extern void Entity_CreatorCanCreate(Entity *, Entity *);
extern void Entity_Sandbagging(Entity *, Entity *);
extern void Entity_FillOutParamData(Entity *, Entity *,Enemy_ParamData *);
extern void Entity_CreateEnemy(Entity *, Entity *,Enemy_ParamData const *,VUMat4 const *);
extern void Entity_Entity(Entity *);
extern void Entity_Entity(Entity *);
extern void Entity_AddToCreationList(Entity *, int);
extern void Entity_Asleep(Entity *, MarkerListItem *);
extern void Entity_SendEvent(Entity *, MarkerListItem *);
extern void Entity_QueueEvent(Entity *, MarkerListItem *,float);
extern void Entity_DeliverEvent(Entity *, MarkerListItem *);
extern void Entity_ActivateObjects(Entity *, MarkerListItem *);
extern void Entity_TriggerTargets(Entity *, MarkerListItem *);
extern void Entity_GetWorldMatrix(Entity *);
extern void Entity_GetWadName(Entity *);
extern void Entity_FirstLoad(Entity *);
extern void Entity_WadUnloading(Entity *);
extern void Entity_DefaultParms(Entity *);
extern void Entity_FindParmData(Entity *, void *,ushort const *,ushort,SLI_Type);
extern void Entity_Destroy(Entity *);
extern void Entity_Enabled(Entity *);
extern void Entity_RefractoryPeriod(Entity *);
extern void Entity_ResponseDelay(Entity *);
extern void Entity_DelayedEnable(Entity *);
extern void Entity_Execute(Entity *);
extern void Entity_DebugString(Entity *);
extern void Entity_MarkerID(Entity *);
extern void Entity_MarkerMatch(Entity *, int);
extern void Entity_EventNotify(Entity *, MsgListItem *);
extern void Entity_CreatePlayer(Entity *);
extern void Entity_StartPlayer(Entity *, char const *);
extern void Entity_DestroyPlayer(Entity *);
extern void Entity_FindAnimIndex(Entity *, anmParm const *,char const *,wadContext const *);
extern void Entity_FindAnmParm(Entity *, char const *);
extern void Entity_Recycle(Entity *, MarkerListItem *);
extern void Entity_MakeSaveListItem(Entity *, MarkerListItem *);
extern void Entity_CreateGO(Entity *, VUMat4 const *,uint,int,int,int,int,AI_Data *);
extern void Entity_CreateGO(Entity *, char const *,int,int);
extern void Entity_DestroyGO(Entity *, goGameObject *,int);
extern void Entity_EntityGOCallback(Entity *, goGameObject *,goEvent const *,void *);
extern void Entity_EntityGOCtxtCallback(Entity *, goServerContext *,goEvent const *,void *);
extern void Entity_FreeAllBhvrClientParms(Entity *, goGameObject *);
extern void Entity_FreeBhvrClientParm(Entity *, bhvrClient *);
extern void Entity_RegisterMarker(Entity *, MarkerListItem *);
extern void Entity_UnregisterMarker(Entity *, MarkerListItem *);
extern void Entity_TriggerDestructionSensors(Entity *, goGameObject *);
extern void Entity_RemoveMarker(Entity *, goGameObject *);
extern void Entity_RemoveBhvr(Entity *, bhvrClient *);
extern void Entity_RemoveGO(Entity *, goGameObject *);
extern void Entity_FindPlayerCreator(Entity *, char const *,char const *);
extern void Entity_FindPlayerCreatorForStart(Entity *, char const *);
extern void Entity_FindPlayerCreatorForWarp(Entity *, char const *,char const *);
extern void Entity_DoMsg(Entity *, int,float,int);
extern void Entity_ConnectClients(Entity *, goGameObject *,int,int,int);
extern void Entity_SetGrobAlpha(Entity *, goGameObject *,float,int);
extern void Entity_SaveData(Entity *);
extern void Entity_LoadData(Entity *);
extern void Entity_GetStateData(Entity *, void *);
extern void Entity_SetStateData(Entity *, void const *);
extern void Entity_RemoveWadContext(Entity *, wadContext const *);
extern void Entity_MakeSaveList(Entity *, WadInfo *);
extern void Entity_ResetSaveList(Entity *, WadInfo *);
extern void Entity_RestoreEntityEvents(Entity *, WadInfo *,Entity *);
extern void Entity_SetGOSavable(Entity *, goGameObject *,MarkerListItem *);
extern void Entity_SaveGOState(Entity *, WadInfo *,goGameObject *);
extern void Entity_GetAnimFileIdx(Entity *, anmClient *);
extern void Entity_GetAnimPlayerEndCallback(Entity *, anmClient *);
extern void Entity_SaveEntityState(Entity *, Entity *,float,ushort,ushort);
extern void Entity_RestoreEntityState(Entity *, WadInfo *,Entity *);
extern void Entity_RestoreGOState(Entity *, WadInfo *,goGameObject *);
extern void Entity_WadLoadCallback(Entity *, int,uint);
extern void Entity_LevelWarp(Entity *);
extern void Entity_DoLevelWarp(Entity *);
extern void Entity_DoPlayerWarp(Entity *, char const *);
extern void Entity_PlayerWarped(Entity *);
extern void Entity_DoPlayerJump(Entity *, char const *,char const *);
extern void Entity_JustCheckPointed(Entity *);
extern void Entity_JumpToWad(Entity *, char const *);
extern void Entity_DoJumpToWad(Entity *);
extern void Entity_Mpeg(Entity *, char const *,int,int);
extern void Entity_LoadMpeg(Entity *, char const *,int);
extern void Entity_UnloadMPEG(Entity *);
extern void Entity_InitSeenMPEGs(Entity *);
extern void Entity_SeenMPEGBefore(Entity *, char const *,int);
extern void Entity_LoadUpdate(Entity *);
extern void Entity_LoadUpdateReset(Entity *);
extern void Entity_StateNotify(Entity *, MarkerListItem *,Entity_StateID);
extern void Entity_HandleEvent(Entity *, MarkerListItem *);
extern void Entity_Activate(Entity *, goGameObject *,MarkerListItem *);
extern void Entity_Info(Entity *, int,char const *,...);


extern UINT32 Entity_nEntityTypes;
extern UINT32 Entity_markerTypeID;
extern UINT32 Entity_playerGO;
extern UINT32 Entity_playerMarker;
extern UINT32 Entity_playerWarped;
extern UINT32 Entity_warpWadSlot;
extern UINT32 Entity_warpWadsReady;
extern UINT32 Entity_warpPlayerReady;
extern UINT32 Entity_timeInFrames;
extern UINT32 Entity_timeInSeconds;
extern UINT32 Entity_restoredTimeInSeconds;
extern UINT32 Entity_curEntity;
extern UINT32 Entity_curMLI;
extern UINT32 Entity_constructorData;
extern UINT32 Entity_registeringMarker;
extern UINT32 Entity_forceZeroResponseDelay;
extern UINT32 Entity_forceMinResponseDelay;
extern UINT32 Entity_restoringWads;
extern UINT32 Entity_nWadsToRestore;
extern UINT32 Entity_saveGameID;
extern UINT32 Entity_saveMenuID;
extern UINT32 Entity_warpedFrame;
extern UINT32 Entity_doGoToShell;
extern UINT32 Entity_doFailure;
extern UINT32 Entity_doWarp;
extern UINT32 Entity_doCheckPoint;
extern UINT32 Entity_gameRestarting;
extern UINT32 Entity_creatingGO;
extern UINT32 Entity_mpegHeapZone;
extern UINT32 Entity_mpegOverrideSkippable;
extern UINT32 Entity_doMPEG;
extern UINT32 Entity_stateMPEG;
extern UINT32 Entity_mpegDoneFrame;
extern UINT32 Entity_doJumpWad;
extern UINT32 Entity_jumpWadLoaded;
extern UINT32 Entity_vtbl;
extern UINT32 Entity_prevPlayerPos;
extern UINT32 Entity_globalMarkerCtxtList;
extern UINT32 Entity_state;
extern UINT32 Entity_jumpSrcWadName;
extern UINT32 Entity_jumpDstWadName;
extern UINT32 Entity_entityTypeInfo;

#endif
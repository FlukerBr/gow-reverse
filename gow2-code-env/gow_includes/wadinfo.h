#ifndef WADINFO_H
#define WADINFO_H

#include "structs.h"


uint WadInfo_WadInfo(void);
uint WadInfo_GrabObjStates(void);
uint WadInfo_RemoveReactiveState(goGameObject *,void *);
uint WadInfo_LoadReactiveState(goGameObject *,void *,goReactiveController *);
uint WadInfo_LoadIO_TandFState(goGameObject *,void *,goIO_TandF *);
uint WadInfo_LoadIO_CSMState(goGameObject *,void *,goIO_CSM *);
uint WadInfo_LoadIOState(goGameObject *,void *,goIO *);
uint WadInfo_SaveBreakableState(goGameObject *);
uint WadInfo_LoadBreakableState(goGameObject *);
uint WadInfo_SaveGrappleState(goGameObject *,int);
uint WadInfo_LoadGrappleState(goGameObject *);
uint WadInfo_LoadPersistentData(void);
uint WadInfo_SavePersistentData(int);
uint WadInfo_UnpackState(SaveGame_PackInfo *);
uint WadInfo_RestoreState(char *[19],uchar *);
uint WadInfo_LoadData(void);
uint WadInfo_Reset(void);
uint WadInfo_PackState(SaveGame_PackInfo *,int);
uint WadInfo_SaveList(stdList *,int);
uint WadInfo_SaveData(void);
uint WadInfo_RemoveWadContext(wadContext const *);
uint WadInfo_FirstLoad(goGameObject *);
uint WadInfo_GetMarkerCtxtList_(wadContext *);
uint WadInfo_GetMarkerCtxtList(int);
uint WadInfo_Get(wadContext const *);
uint WadInfo_AdjustPtrs(SaveGame_PackInfo *);
uint WadInfo_PointOfNoReturn(void);
uint WadInfo_RemoveDefunctWads(void);
uint WadInfo_BeginWad(wadContext const *);
uint WadInfo_RemoveEntity(Entity *);
uint WadInfo_AddEntity(Entity *,int);
uint WadInfo_Init(void);
uint WadInfo_pwiTable;
uint WadInfo_restoredConn;
uint WadInfo_restoredWad;
uint WadInfo_wiTable;
uint WadInfo_curGroup;
uint WadInfo_nWads;


#endif
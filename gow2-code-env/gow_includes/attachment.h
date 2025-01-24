#ifndef ATTACHMENT_H
#define ATTACHMENT_H

#include "structs.h"


uint attachment_tSys_ClrFlags(uint);
uint attachment_tSys_TstFlags(uint);
uint attachment_tSys_SetFlags(uint);
uint attachment_tHand_ResetSliceEffects(void);
uint attachment_tHand_StopSliceEffects(void);
uint attachment_tHand_UpdateSliceEffects(void);
uint attachment_tHand_CreateSliceEffects(uint,VUVec4,VUVec4,wadContext *);
uint attachment_tHand_Hide_(goGameObject *);
uint attachment_tHand_Show_(goGameObject *);
uint attachment_tHand_Hide(void);
uint attachment_tHand_Show(void);
uint attachment_tHand_AttachToJoint(int);
uint attachment_tHand_PrepareForUnloading(void);
uint attachment_tHand_ModulateBFX(int,float);
uint attachment_tHand_AddBFX(int,fxClient *);
uint attachment_tHand_HideBFX(int);
uint attachment_tHand_ShowBFX(int);
uint attachment_tHand_DeinitBFX(void);
uint attachment_tHand_InitBFX(void);
uint attachment_tHand_Warp(void);
uint attachment_tHand_Reset(void);
uint attachment_tHand_Update(VUMat4 *,float);
uint attachment_tHand_UpdateBladeStatus(VUMat4 *);
uint attachment_tHand_Destructor_tHand(void);
uint attachment_tHand_tHand(attachment_tSys *,int,dc_tAttachments_tHand const *,VUVec4);
uint attachment_tSys_ClrPrepareForUnloading(void);
uint attachment_tSys_IsPreparedForUnloading(void);
uint attachment_tSys_PrepareForUnloading(void);
uint attachment_tSys_RemoveWadContext(wadContext const *);
uint attachment_tSys_Hide(int);
uint attachment_tSys_Show(int);
uint attachment_tSys_DisconnectAttachment(goGameObject *);
uint attachment_tSys_CheckAttachmentByName(char const *);
uint attachment_tSys_SetAttachmentByName(char const *);
uint attachment_tSys_DestroyAllAttachments(void);
uint attachment_tSys_Init(void);
uint attachment_tSys_CreateInstance(int,dc_tAttachments_tHand const *,VUVec4);
uint attachment_tSys_Warp(void);
uint attachment_tSys_Reset(void);
uint attachment_tSys_Update(float);
uint attachment_tSys_Destructor_tSys(void);
uint attachment_tSys_tSys(goCreature *);
uint attachment_tHand___dl(void *);
uint attachment_tHand_Allocate(wadContext *);
uint attachment_tSys___dl(void *);
uint attachment_tSys_Allocate(wadContext *);
uint attachment_tChained_BladeCollision(void);
uint attachment_tChained_PrepareForUnloading(void);
uint attachment_tChained_SetHasClipPlane(int);
uint attachment_tChained_Warp(void);
uint attachment_tChained_Hide(void);
uint attachment_tChained_InternalHideChain(void);
uint attachment_tChained_HideChain(void);
uint attachment_tChained_Disconnect(void);
uint attachment_tChained_Show(void);
uint attachment_tChained_InternalShowChain(void);
uint attachment_tChained_ShowChain(void);
uint attachment_tChained_Connect(void);
uint attachment_tChained_DrawChain(VUVec4,VUVec4,VUVec4,VUVec4);
uint attachment_tChained_DrawGapFiller(VUVec4,VUVec4,VUVec4,VUVec4,VUVec4);
uint attachment_tChained_Update(VUMat4 *,float);
uint attachment_UpdateDamping(float,float);
uint attachment_tChained_HandleCollision(VUMat4 *);
uint attachment_tChained_CollisionCallback(void);
uint attachment_tChained_SwitchAssets(char const *,char const *,char const *,char const *);
uint attachment_tChained_UseNormalAssets(void);
uint attachment_tChained_UseGodModeAssets(void);
uint attachment_tChained_Destructor_tChained(void);
uint attachment_tChained_Reset(void);
uint attachment_tChained_tChained(attachment_tSys *,int,dc_tAttachments_tChained const *,VUVec4);
uint attachment_tChained___dl(void *);
uint attachment_tChained_Allocate(wadContext *);
uint attachment_tChained_sm_bCollision;
uint attachment_tHand_sm_tHandMultiPool;
uint attachment_tSys_sm_tSysMultiPool;
uint attachment_tChained_sm_tChainedMultiPool;
uint attachment_tChained_g_mFrameDiff;
uint attachment_tChained_g_mFrame;
uint attachment_tHand_vtbl;
uint attachment_tSys_vtbl;
uint attachment_tChained_vtbl;


#endif
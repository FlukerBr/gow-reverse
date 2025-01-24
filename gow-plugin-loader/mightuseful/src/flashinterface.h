#ifndef FLASHINTERFACE_H
#define FLASHINTERFACE_H

#include "stdint.h"

#define FlashInterface_fvEntry uint32_t

extern void (*FlashInterface_SF_Sound)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_Volume)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_Vibration)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_WideScreen)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_ProgressiveScan)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_DeFlicker)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_SoundMode)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_DropShadowColor)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_DropShadowOffset)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SF_Zone_Choice)(FlashInterface_fvEntry const *);
extern void (*FlashInterface_SetZoneVars)(int);
extern void (*FlashInterface_SetMusicVolume)(int);
extern void (*FlashInterface_SetSoundVolume)(int);
extern void (*FlashInterface_SetVibration)(int);
extern void (*FlashInterface_SetWideScreen)(int);
extern void (*FlashInterface_SetProgressiveScan)(int);
extern void (*FlashInterface_SetDeFlicker)(int);
extern void (*FlashInterface_SetSoundMode)(int);
extern void (*FlashInterface_Hash)(char const *);
extern void (*FlashInterface_HashFind)(char const *);
extern void (*FlashInterface_HashFindAvailable)(char const *);
// extern void (*FlashInterface_AddVar)(int,char const *,int,void *,void (FlashInterface_*)(FlashInterface *,FlashInterface_fvEntry const *));
extern void (*FlashInterface_FlashInterface)(void);
extern void (*FlashInterface_Destructor_FlashInterface)(void);
extern void (*FlashInterface_OneTimeSetup)(void);
extern void (*FlashInterface_ResetVars)(void);
// extern void (*FlashInterface_FindDynamicShapes)(renFlashClient *);
// extern void (*FlashInterface_GrabTexture)(F_Shape *);
// extern void (*FlashInterface_ReplaceTexture)(F_Shape *,renTexture *);
// extern void (*FlashInterface_MemoryCardImageWadContext)(wadContext *);
extern void (*FlashInterface_MemoryCardSetImages)(int *);
extern void (*FlashInterface_MemoryCardClearImages)(void);
extern void (*FlashInterface_FindMemoryCardImages)(char const *);
extern void (*FlashInterface_AddClient)(char const *);
extern void (*FlashInterface_RemoveClient)(char const *);
extern void (*FlashInterface_ClientCount)(void);
extern void (*FlashInterface_LookupVariable)(char const *);
extern void (*FlashInterface_GetVariable)(char const *,int ,void *);
extern void (*FlashInterface_SetVariable)(char const *,int,void const *);
extern void (*FlashInterface_PlaySound)(int,char const *);
extern void (*FlashInterface_ResetSettableStrings)(void);
extern void (*FlashInterface_Command)(char const *,char const *,int);
extern void (*FlashInterface_SetCamera)(char const *);
extern void (*FlashInterface_CommandResult)(int);
extern void (*FlashInterface_SimKeyEvent)(void);
extern void (*FlashInterface_MsgMenuCheck)(void);
extern void (*FlashInterface_PerFrame)(void);
extern void (*FlashInterface_CancelMsg)(int);
extern void (*FlashInterface_ReadMsgText)(void);
extern void (*FlashInterface_ParseMsgFile)(int,char *,int,int);
extern void (*FlashInterface_CmpMsgs)(void const *,void const *);
extern void (*FlashInterface_FindMsg)(int,char const ***);
extern void (*FlashInterface_GetMsgLine)(int,int,char const *);
extern void (*FlashInterface_DoMsg)(int,float,int);
extern void (*FlashInterface_DoMsgPage)(void);
extern void (*FlashInterface_TellFlashTypeOn)(int,int);
extern void (*FlashInterface_StopFlashTypeOn)(void);
extern void (*FlashInterface_DoMenu)(int);
extern void (*FlashInterface_MsgMenuPause)(int);
extern void (*FlashInterface_DoCommend)(int,float);
extern void (*FlashInterface_HitCounter)(int,int,int,int);
extern void (*FlashInterface_ClearHUD)(int);
extern void (*FlashInterface_PromptButton)(int);
extern void (*FlashInterface_GetStateData)(void *);
extern void (*FlashInterface_SetStateData)(void const *);
extern void (*FlashInterface_AnimateGO)(char const *,char const *);
extern void (*FlashInterface_ScreenGO)(char const *,char const *);
extern void (*FlashInterface_MoveScroll_Init)(void);
extern void (*FlashInterface_MoveScroll_Command)(int);
extern void (*FlashInterface_MoveScroll_Update)(int);
extern void (*FlashInterface_MoveScroll_GetMoveStrings)(int,char *,char *,int);
extern void (*FlashInterface_BonusScroll_Init)(void);
extern void (*FlashInterface_BonusScroll_Command)(int);
extern void (*FlashInterface_BonusScroll_Update)(int);
extern void (*FlashInterface_BonusScroll_GetBonusStrings)(int,char *,int ,int);
extern void (*FlashInterface_WadJump_Init)(void);
extern void (*FlashInterface_WadJump_InitRecurse)(char const *);
extern void (*FlashInterface_WadJump_Add)(char const *);
extern void (*FlashInterface_WadJump_Sort)(void const *,void const *);
extern void (*FlashInterface_WadJump_Command)(char const *);
extern void (*FlashInterface_WadJump_Update)(int);


#define flashInterface *((uint32_t *))
#define FlashInterface_vtbl *((uint32_t *))
#define FlashInterface_msgFile *((uint32_t *))

#endif
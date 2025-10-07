#ifndef CDECALSYSTEM_H
#define CDECALSYSTEM_H

#include "structs.h"


uint CDecalSystem_SModifier_SModifier(void);
uint CDecalSystem_PrintDecalI(SDecalContext_SDecal *,float,VUVec4,VUVec4,float,VUVec4,int);
uint CDecalSystem_UpdateModifiersI(float);
uint CDecalSystem_ModifiersCollisionCB(void);
uint CDecalSystem_InitializeModifiersI(void);
uint CDecalSystem_UpdateModifiedContextsI(float);
uint CDecalSystem_ModifyContextI(SDecalContext *,CDecalSystem_SModifier const *);
uint CDecalSystem_InitializeContextI(dc_tDecalInfo const *,int);
uint CDecalSystem_PrintDecal(ushort,VUVec4,VUVec4,float,VUVec4,int,goCreature *);
uint CDecalSystem_AddTextureModifier(VUVec4,float,uint,float,float,float,ushort,ushort);
uint CDecalSystem_DestroyContext(SDecalContext *);
uint CDecalSystem_ResetContext(SDecalContext *);
uint CDecalSystem_InitializeContext(goCreature *);
uint CDecalSystem_Update(goScript *);
uint CDecalSystem_Destructor(goScript *);
uint CDecalSystem_Reset(void);
uint CDecalSystem_Initialize(void);
uint CDecalSystem_s_wModifierFrame;
uint CDecalSystem_s_ModifierSeeds;
uint CDecalSystem_s_Modifiers;
uint CDecalSystem_s_pFreeModifiers;
uint CDecalSystem_s_pModifiers;
uint CDecalSystem_s_pModifiedContexts;
uint CDecalSystem_s_pContext;
uint CDecalSystem_s_dwState;


#endif
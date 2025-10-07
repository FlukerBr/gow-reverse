#ifndef RENDMABLOCK_H
#define RENDMABLOCK_H

#include "structs.h"


uint renDMABlock_StandardRETCallback(void);
uint renDMABlock_GenerateAndKickMPEGHack(void);
uint renDMABlock_GenerateAndKickBlackScreens(void);
uint renDMABlock_GenerateAndKickFinalScreenCopy(void);
uint renDMABlock_GenerateEpilogueDMA(void);
uint renDMABlock_AddFINISHCommand(void);
uint renDMABlock_GeneratePrologueDMA(void);
uint renDMABlock_CreateSystemDMABlocks(void);
uint renDMABlock_Kick(void);
uint renDMABlock_SwapDMABuffers(void);
uint renDMABlock_LinkDMABuffers(void);
uint renDMABlock_CreateAndRegisterVectorDMABlock(uint,uint,void (*)(void),uint);
uint renDMABlock_CreateAndRegisterDMABlock(uint,uint,void (*)(void),uint);
uint renDMABlock_RegisterDMABlock(renDMABlock *);
uint renDMABlock_m_pFinalPolygonCopyDMAContext;
uint renDMABlock_m_pEpilogueDMAContext;
uint renDMABlock_m_pPrologueDMAContext;
uint renDMABlock_m_blocks;


#endif
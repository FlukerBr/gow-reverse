#ifndef RENPRIMMASTER_H
#define RENPRIMMASTER_H

#include "structs.h"


uint renPrimMaster_Destructor_renPrimMaster(void);
uint renPrimMaster_SetTriStripMicrocode(void);
uint renPrimMaster_InitVU1forDMA(void);
uint renPrimMaster_SetMicrocode(uint,uint,int,int);
uint renPrimMaster_ProcessServer(void);
uint renPrimMaster_EmptyLayer(uint);
uint renPrimMaster_RenderLayer(uint,uint,uint);
uint renPrimMaster_RenderMirrorPortalLayer(int,int,int);
uint renPrimMaster_RenderStencilLayer(uint,uint,uint,uint);
uint renPrimMaster_RunFXScripts(uint,uint,uint);
uint renPrimMaster_RunFXScriptsForViewport(renView *,uint,uint,uint);
uint renPrimMaster_RemoveFXScript(uint,uint,renFXScript *);
uint renPrimMaster_AddFXScript(uint,uint,int,renFXScript *);
uint renPrimMaster_AllocateClient(svrClientParm const *);
uint renPrimMaster_renPrimMaster(svrParm const *);
uint renPrimMaster_m_pFullscreenView;
uint renPrimMaster_m_uDMABaseID;
uint renPrimMaster_m_uDMABaseAddresses;
uint renPrimMaster_vtbl;
uint renPrimMaster_m_pFlash;
uint renPrimMaster_m_pParticle;
uint renPrimMaster_m_pTri;
uint renPrimMaster_m_pSTri;
uint renPrimMaster_m_bDrawStencil;
uint renPrimMaster_m_pFade;
uint renPrimMaster_m_pFog;
uint renPrimMaster_m_pFSWarp;
uint renPrimMaster_m_pBloom;
uint renPrimMaster_m_pLastFrameCopyOps;
uint renPrimMaster_m_pPostWorldClearZ;
uint renPrimMaster_m_pPreWorldClearZ;
uint renPrimMaster_m_pFrameStartClearScreen;
uint renPrimMaster_m_pStencil;
uint renPrimMaster_m_pCodeLoader;
uint renPrimMaster_m_uMicroCode;


#endif
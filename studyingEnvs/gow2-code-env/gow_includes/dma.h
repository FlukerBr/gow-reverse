#ifndef DMA_H
#define DMA_H

#include "structs.h"


uint dma_RefItopUnpack(uint *,uint,uint,uint);
uint dma_SetContext(dmaStaticContext *);
uint dma_Start(void);
uint dma_Kick(dma_tDMADest,dma_tKickType);
uint dma_InitDMA(void);
uint dma_Terminate(void);
uint dma_End(void);
uint dma_Begin_(uint,uint);
uint dma_Begin(uint);
uint dma__channelToSPR;
uint dma__channelFromSPR;
uint dma__channelGIF;
uint dma__channelVIF1;
uint dma__pFirstLoc;
uint dma__pStartLoc;
uint dma__pCurrentLoc;
uint dma__pContextStack;
uint dma__uStackIdx;


#endif
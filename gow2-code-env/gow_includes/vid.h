#ifndef VID_H
#define VID_H

#include "structs.h"


uint vid_WaitForDMAComplete(char *);
uint vid_SetFrameMode(tFrameMode);
uint vid_SetFrameBufferFormat(tPixelFormat,tPixelFormat);
uint vid_SetFrontResolution(uint,uint);
uint vid_SetBackResolution(uint,uint);
uint vid_SetZBufferFormat(tZFormat);
uint vid_IncGameFrameCounter(void);
uint vid_Flip(void);
uint vid_SetupPCRTC(void);
uint vid_End(void);
uint vid_Reset(void);
uint vid_SetParms(vidParms const *);
uint vid_GetScreenFormatBytesPerPixel(uint);
uint vid_Restart(vidParms const *,int);
uint vid_StartDMABuffers(void);
uint vid_Start(vidParms const *);
uint vid_StopVBlankHandler(void);
uint vid_StartVBlankHandler(void);
uint vid_VBlankHandler(int);
uint vid_StopGSHandler(void);
uint vid_StartGSHandler(void);
uint vid_GSHandler(int);
uint vid_m_framemode;
uint vid_m_videomode;
uint vid_m_uCenterX;
uint vid_m_uCenterY;
uint vid_m_uFrameCounter;
uint vid_m_uGSFrameStart;
uint vid_m_uCPUFrameStart;
uint vid_m_uTopOfScreensAddr;
uint vid_m_pMasterDMAContext;
uint vid_m_uFlags;
uint vid_m_uFrontBufAddr;
uint vid_m_AspectRatio;
uint vid_m_FrontFrameFormat;
uint vid_m_uBackBufAddr;
uint vid_m_uZBufAddr;
uint vid_m_zformat;
uint vid_m_BackFrameFormat;
uint vid_m_pScriptDMAContext;
uint vid_m_uGameFrameCounter;
uint vid_m_cOverscanColor;
uint vid_m_cBGColor;
uint vid_m_uBackResolution;
uint vid_m_uFrontResolution;
uint vid_gThreadID;
uint vid_gActiveBuffer;
uint vid_gHardwareField;
uint vid_gVBLDone;
uint vid_gGSStatus;
uint vid_gDoNDMABufSwaps;


#endif
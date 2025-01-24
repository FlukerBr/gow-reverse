#ifndef RENGFXCLUT_H
#define RENGFXCLUT_H

#include "structs.h"


uint renGfxClut_ClrIn8HVRAM(void);
uint renGfxClut_UnLock(void);
uint renGfxClut_HardLock(void);
uint renGfxClut_SoftLock(void);
uint renGfxClut_RemoveImageFromVRAM(int,int);
uint renGfxClut_PutImageInVRAM(void);
uint renGfxClut_ImmediateLoadImageInVRAM(void);
uint renGfxClut_LoadImageInVRAM(void);
uint renGfxClut_Destructor_renGfxClut(void);
uint renGfxClut_renGfxClut(renGfxClutLoadParm const *,char const *);
uint renGfxClut_MakeREG_ImageToVRAM(uint,uint,uint,uint,uint);
uint renGfxClut_MakeGIFTag(uint *,uint,uint,uint,uint,uint,uint,uint,uint);
uint renGfxClut_m_bExtraFlush;
uint renGfxClut__bUploadsAllowed;


#endif
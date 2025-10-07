#ifndef RENTEXTURE_H
#define RENTEXTURE_H

#include "structs.h"


uint renTexture_SetTextureContext(int,renMaterialFlags);
uint renTexture_SetupStaticGSRegBuffer(void);
uint renTexture_SetupDynamicGSRegBuffer(ulong const **,renMaterialFlags);
uint renTexture_SetupGSRegBuffer(ulong *,renTextureFlags);
uint renTexture_SetupDMABuffer(renMaterialStage *,renTextureFlags,ulong *);
uint renTexture_HardLockTexture_LastUnlock(void);
uint renTexture_HardLockTexture(void);
uint renTexture_ClearLastTextureLocks(renTexture *);
uint renTexture_SoftLockTexture(void);
uint renTexture_UnLockTexture(void);
uint renTexture_PutImageInVRAM(void);
uint renTexture_renTexture_(renTexture const *,renMaterialDupContext *);
uint renTexture_renTexture(renTextureLoadParm const *,char const *);
uint renTexture_m_pLastTexture;


#endif
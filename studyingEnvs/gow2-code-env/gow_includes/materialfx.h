#ifndef MATERIALFX_H
#define MATERIALFX_H

#include "structs.h"


uint MaterialFX_DoRopeGrabFX(goSoldier *);
uint MaterialFX_DoLandingFX(dc_tMaterialFX const *,goSoldier *,wadContext *,VUVec4,VUVec4);
uint MaterialFX_DoCliffFX(goSoldier *,int,int);
uint MaterialFX_DoFootFX_(goSoldier *,uint,int);
uint MaterialFX_DoFootFX(goSoldier *,int,int);
uint MaterialFX_DropBlood(dc_tMaterialFX const *,goHandle,short,VUVec4,VUVec4,int);
uint MaterialFX_AddSliceEffect(dc_tMaterialFX const *,VUVec4,VUVec4,wadContext *,goGameObject *,int);
uint MaterialFX_AddHitParticles(dc_tMaterialFX const *,VUVec4,VUVec4,wadContext *,goGameObject *,int,float);
uint MaterialFX_DoCameraShake(dc_tMaterialFX const *);
uint MaterialFX_StartSliceHitSound(dc_tMaterialFX const *,wadContext *,sound_Emitter *);
uint MaterialFX_GetSurfaceSound(uint,wadContext *);


#endif
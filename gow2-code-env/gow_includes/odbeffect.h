#ifndef ODBEFFECT_H
#define ODBEFFECT_H

#include "structs.h"


uint odbEffect_GetType(void);
uint odbEffect_Update(void);
uint odbEffect_SetupAsBoneEmitter(fxBoneData *);
uint odbEffect_SetupBoneData(goSkeleton *,fxBoneData *);
uint odbEffect_SetEmitterRateModulation(float);
uint odbEffect_SetEmitterVelocity(VUVec4);
uint odbEffect_Callback(anmPlayer *);
uint odbEffect_StartAnimation(void);
uint odbEffect_Setup__(goGameObject *,uint,VUMat4,goGameObject *,int);
uint odbEffect_Setup_(goParmBase const *,uint,VUMat4,goGameObject *,int);
uint odbEffect_Setup(char const *,uint,VUMat4,goGameObject *,int);
uint odbEffect_Destructor_odbEffect(void);
uint odbEffect_odbEffect_______(goGameObject *,uint,VUVec4,VUVec4,goGameObject *,int);
uint odbEffect_odbEffect______(goGameObject *,uint);
uint odbEffect_odbEffect_____(goParmBase const *,uint,VUVec4,VUVec4,goGameObject *,int);
uint odbEffect_odbEffect____(goParmBase const *,uint,VUMat4,goGameObject *,int);
uint odbEffect_odbEffect___(goParmBase const *,uint);
uint odbEffect_odbEffect__(char const *,uint,VUMat4,goGameObject *,int);
uint odbEffect_odbEffect_(char const *,uint);
uint odbEffect_odbEffect(char const *,uint,VUVec4,VUVec4,goGameObject *,int);
uint odbEffect___dl(void *);
uint odbEffect_Allocate(wadContext *);
uint odbEffect_sm_odbEffectMultiPool;
uint odbEffect_vtbl;
uint odbEffect_anmPlayerEndCallback_vtbl;


#endif
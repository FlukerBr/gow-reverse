#ifndef FXBLOOM_H
#define FXBLOOM_H

#include "structs.h"


uint fxBloom_Client_Run(renView *);
uint fxBloom_Client_DoBloom(renView *,uint,uint);
uint fxBloom_FilteredBloom(renView *,VUVec4 const *,float const *,uint);
uint fxBloom_Client_Destructor_Client(void);
uint fxBloom_Client_Client(uint);
uint fxBloom_State_Tween(fxBloom_State const *,fxBloom_State const *,fxBloom_State *,float);
uint fxBloom_State_Fade(fxBloom_State const *,fxBloom_State *,float);
uint fxBloom_State_Reset(void);
uint fxBloom_Client_vtbl;


#endif
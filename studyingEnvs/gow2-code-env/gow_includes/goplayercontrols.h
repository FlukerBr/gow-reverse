#ifndef GOPLAYERCONTROLS_H
#define GOPLAYERCONTROLS_H

#include "structs.h"


uint goPlayerControls_Process(void);
uint goPlayerControls_CalcControlMatrix(VUVec4,VUMat4 *);
uint goPlayerControls_ClearControlTween(void);
uint goPlayerControls_StartControlTween(float,VUMat4 const *);
uint goPlayerControls_PrepareForWarp(void);
uint goPlayerControls_Reset(void);
uint goPlayerControls_Destructor_goPlayerControls(void);
uint goPlayerControls_goPlayerControls(sysPad *);
uint goPlayerControls_Initialise(void);
uint goPlayerControls_vtbl;
uint goPlayerControls_sm_bWarp_this_frame;
uint goPlayerControls_sm_fControlTweenTime;


#endif
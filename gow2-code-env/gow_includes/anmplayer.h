#ifndef ANMPLAYER_H
#define ANMPLAYER_H

#include "structs.h"


uint anmPlayer_GetTimeStep(void);
uint anmPlayer___dl(void *);
uint anmPlayer___nw(uint,void *);
uint anmPlayer_Recycle(void);
uint anmPlayer_NeedsProcessing(float);
uint anmPlayer_Animate(float,float);
uint anmPlayer_Destructor_anmPlayer(void);
uint anmPlayer_ActivateScripts(anmFileHeader const *);
uint anmPlayer_TerminateScripts(void);
uint anmPlayer_UndoTerminate(void);
uint anmPlayer_SetTerminateTime(float);
uint anmPlayer_Process(bool);
uint anmPlayer_ProcessWeights(void);
uint anmPlayer_Reset(void);
uint anmPlayer_anmPlayer(anmFileHeader const *,anmDataAnimator *);
uint anmPlayer_vtbl;


#endif
#ifndef RUMBLEANDSHAKE_H
#define RUMBLEANDSHAKE_H

#include "structs.h"


uint RumbleAndShake_PausedPlay(char const *);
uint RumbleAndShake_EnableForceFeedback(int);
uint RumbleAndShake_PlayForceFeedback_(char const *);
uint RumbleAndShake_PlayForceFeedback(dc_tForceFeedback const *);
uint RumbleAndShake_Run(goScript *);
uint RumbleAndShake_StartCameraShake(RumbleAndShake_Effect *);
uint RumbleAndShake_Destructor_RumbleAndShake(void);
uint RumbleAndShake_RumbleAndShake(goScript *);
uint RumbleAndShake_Initialise(void);
uint RumbleAndShake_fGameEffects;
uint RumbleAndShake__bForceFeedbackEnabled;


#endif
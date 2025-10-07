#ifndef LEGALSCREEN_H
#define LEGALSCREEN_H

#include "structs.h"


uint LegalScreen_WaitForVSync(int);
uint LegalScreen_Clear(void);
uint LegalScreen_bColorHack;
uint LegalScreen_firstFrame;
uint LegalScreen_curScreen;
uint LegalScreen_nScreens;
uint LegalScreen_wc;


#endif
#ifndef RENFLASHCLIENT_H
#define RENFLASHCLIENT_H

#include "structs.h"


uint renFlashClient_GetName(void);
uint renFlashClient_RemoveDynamicSprite(F_SpriteInstance *);
uint renFlashClient_AddDynamicSprite(F_Sprite *);
uint renFlashClient_SimKeyEvent(void);
uint renFlashClient_SetHandler(char const *,F_VarCmdHandler *);
uint renFlashClient_Loop(int);
uint renFlashClient_Process(void);
uint renFlashClient_Destructor_renFlashClient(void);
uint renFlashClient_renFlashClient(F_Movie *);


#endif
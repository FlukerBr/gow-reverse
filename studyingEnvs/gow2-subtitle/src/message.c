#include "structs.h"

#include "injector.h"
#include <string.h>
#include <stdio.h>

char *textMsgBuffer[5] = {0};

extern FlashInterface* flashInterface;

uint FlashInterface_TellFlashTypeOn(FlashInterface *,int,int);
uint FlashInterface_SimKeyEvent(FlashInterface *);
void GameState_AddPending(Pending *);


void displayMessage(char *msg, uint32_t style)
{
    Pending p;
    
    p.menuID = -1;
    p.pickupID = -1;
    p.msgID = 46;
    p.seconds = style ? 10.0f : 0.0f;
    p.special = -1;
    p.healthMeterValue = 0;
    p.magicMeterValue = 0;

    GameState_AddPending(&p);

    uint32_t nLines = 0;
    char *line = strtok(msg, "\n");

    while (line != NULL && nLines < 5)
    {
        textMsgBuffer[nLines++] = line;
        line = strtok(NULL, "\n");
    }

    char **lines = (char**)&flashInterface->MessageTemplate_Line1;

    for (uint32_t i = 0; i < 5; i++)
    {
        lines[i] = i < nLines ? textMsgBuffer[i] : NULL;
    }
    
    // printf("%d\n", nLines);
    // FlashInterface_TellFlashTypeOn(flashInterface, 1, nLines);
    
    flashInterface->MessageTemplate_Event = nLines;
    FlashInterface_SimKeyEvent(flashInterface);

}

void injectMessagePatches()
{
    RedirectJump(0x1E6C8C, 0x1E6CE0);
    MakeNop(0x1E6C90);
}
#include "gamestate.h"
#include "flashinterface.h"
#include "injector.h"
#include "menu.h"

char textMsgBuffer[5][50] = {0};
char* strcpy(char *dest, const char *src);

void displayMessage(char *msgLines[], uint nLines, uint style)
{
    Pending p;
    
    p.menuID = -1;
    p.pickupID = -1;
    p.msgID = 46;
    p.seconds = style ? 10.0f : 0.0f;
    p.msgMeterBarGrow = 0;
    p.healthMeterValue = 0;
    p.magicMeterValue = 0;

    GameState_AddPending(&p);

    char **lines[] = {
        &flashInterface->MessageTemplate_Line1,
        &flashInterface->MessageTemplate_Line2,
        &flashInterface->MessageTemplate_Line3,
        &flashInterface->MessageTemplate_Line4,
        &flashInterface->MessageTemplate_Line5,
    };

    nLines = nLines > 5 ? 5 : nLines;

    for (uint i = 0; i < 5; i++)
    {
        strcpy(textMsgBuffer[i], msgLines[i]);
        *lines[i] = i < nLines ? textMsgBuffer[i] : NULL;
    }
    
    FlashInterface_TellFlashTypeOn(flashInterface, 1, nLines);
    
    flashInterface->MessageTemplate_Event = nLines;
    FlashInterface_SimKeyEvent(flashInterface);

}

void injectMessagePatches()
{
    RedirectJump(0x1B91E4, 0x1B9238);
    MakeNop(0x1B91E8);
}
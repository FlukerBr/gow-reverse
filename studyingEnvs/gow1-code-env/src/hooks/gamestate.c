#include "syspad.h"
#include "flashinterface.h"
#include "gamestate.h"
#include "include/goplayer.h"
#include "../injector.h"
#include "../enemymeter.h"
#include "include/gamestate.h"
#include "../menu.h"

Gpad ReadPad(int);
uint *tMoveSystem_GetTargetCreature(uint *this);

Gpad last_gamepad = {0};
Gpad gamePad = {0};

extern BOOL allow_InfiniteMagic;
extern BOOL allow_AutoKill;
extern BOOL allow_FreeCam;
extern uint Global_sm_bWorldIdle;

void hook_GameState_Playing()
{
    GameState_Playing();

    gamePad = ReadPad(0);

    if ((gamePad.triangle && last_gamepad.triangle) && (flashInterface->curMenuID != 0 && flashInterface->curMenuID < 47))
    {
        stopMenu();
    }

    if ((gamePad.L1 && !last_gamepad.L1) && (gamePad.R2 && !last_gamepad.R2))
    {
        displayMenu(46);
    }

    if (allow_AutoKill)
    {
        goCreature *gocreature = (goCreature *)tMoveSystem_GetTargetCreature(*((uint**)((uint)goPlayer_sm_pPlayer->m_pCreature + 0x324)));

        if (gocreature)
        {
            gocreature->m_fHitPoints = 0.0f;
        }
    }

    if (allow_FreeCam)
    {
        Global_sm_bWorldIdle = 1;
    }

    updateMenu();
    updateEnemyMeter();

    last_gamepad = gamePad;

}

void injectHookGameState()
{
    RedirectCall(0x21D08C, hook_GameState_Playing);
}
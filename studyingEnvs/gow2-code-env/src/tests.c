#include "structs.h"
#include "injector.h"
#include "gamestate.h"
#include "utils.h"

typedef struct
{
    uint L2 : 1;
    uint R2 : 1;
    uint L1 : 1;
    uint R1 : 1;
    uint triangle : 1;
    uint circle : 1;
    uint X : 1;
    uint square : 1;
    uint select : 1;
    uint L3 : 1;
    uint R3 : 1;
    uint start : 1;
    uint UP : 1;
    uint RIGHT : 1;
    uint DOWN : 1;
    uint LEFT : 1;
} Gpad;

extern Gpad ReadPad(uint);

extern uint g_Timer;
uint time;

void loop()
{
    if ((g_Timer - time)/10 > 1)
    {
        if (GameState_curState == GAME_PLAYING)
        {

        }
        
        time = g_Timer;
    }
    
    GameState_Update();
}

void injectPatches()
{
    RedirectCall(0x25EDAC, loop);
}

void invoker()
{
    FlushCache(0);
    injectPatches();
}

// ver as funções que alteram o f_edittext f_edittextinstace
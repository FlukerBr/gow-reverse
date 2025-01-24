#include "menu.h"

#include "stdint.h"
#include "gow/gamestate.h"
#include "gow/flashinterface.h"
#include "gow/goplayer.h"
#include "stdio.h"

#define dword_2D8EB4 *((uint32_t*)0x2D8EB4)
#define dword_2D8EB8 *((uint32_t*)0x2D8EB8)
#define dword_2D8F04 *((uint32_t*)0x2D8F04)

#define sub_25D890 ((void(*)(uint32_t))0x25D890)
#define sub_20BF80 ((void(*)(uint32_t))0x20BF80)
#define sub_25B998 ((void(*)(void))0x25B998)

uint32_t goToMenu(uint32_t a1)
{
    uint32_t result; // $v0
    uint32_t *v6; // $a1
    uint32_t v7; // $a0
    bool v8; // dc
    uint32_t v9; // $a0
    int v10; // $v0
    uint32_t *v11; // $v1

    result = 11LL;

    if ( *GameState_curState == 11LL )
    {
        GameState_CleanUpForMenu();
        v6 = flashInterface;
        *((uint32_t *)flashInterface + 228) = 0;
        *((uint32_t *)v6 + 229) = 0;
        dword_2D8EB4 = -1;
        if ( a1 != 1 )
        {
            v7 = *((int *)v6 + 167);
            v8 = v7 < *((int *)v6 + 86);
            v9 = (int)v7 + 1;
            if ( !v8 )
            {
                v10 = 7;
                if ( v9 <= 6 )
                    v10 = v9;
                *((uint32_t *)v6 + 86) = v10;
            }
            sub_25D890(v9);
            v11 = flashInterface;
            if ( !*goPlayer_sm_pPlayer )
                goto LABEL_10;
            sub_20BF80((int)*goPlayer_sm_pPlayer);
        }
        v11 = flashInterface;
LABEL_10:
        dword_2D8EB8 = a1;
        *((uint32_t *)v11 + 221) = a1;
        FlashInterface_SimKeyEvent((uint32_t)v11);
        sub_25B998();
        result = 30LL;
        *GameState_curState = 30;
        dword_2D8F04 = 0;
    }
    return result;
}
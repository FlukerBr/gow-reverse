#include "type.h"
#include "gosoldier.h"
#include "../injector.h"

void goSoldier_SetMode_DoubleJumping(void);

extern BOOL allow_InfiniteJump;

void hook_goSoldier_SetMode_DoubleJumping()
{
    if (!allow_InfiniteJump)
    {
        goSoldier_SetMode_DoubleJumping();
    }
}

void injectHookgoSoldier()
{
    RedirectCall(0x1E960C, hook_goSoldier_SetMode_DoubleJumping);
}

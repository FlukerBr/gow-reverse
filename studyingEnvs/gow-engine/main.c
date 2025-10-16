#include "gamestate.h"
#include "gocreature.h"
#include "stdio.h"

#define jal(fun) 0x0C000000 + (fun/4)

void RedirectCall(unsigned int call_addr, void* addr) {
    *(unsigned int*)call_addr = jal((UINT32)addr);
}

void WriteDword(UINT32 address, UINT32 value) {
    *(UINT32*)address = value;
}

void MakeNop(UINT32 address) {
    WriteDword(address, 0);
}

// UINT32 hook_goPlayer_FindAllTargetsAroundPlayer(goPlayer* _this, float fRadius, uint uGOMask, goCreature* pIgnoreCreature)
// {
//     goPlayer_FindAllTargetsAroundPlayer(_this, fRadius, uGOMask, pIgnoreCreature);
//     printf("%d %d %d %d\n", fRadius, uGOMask, pIgnoreCreature);
// }

void loop()
{
    GameState_Update();
}

void injectPatches()
{
    
    RedirectCall(0x23DBAC, loop);
    // RedirectCall(0x1A0170, hook_goPlayer_FindAllTargetsAroundPlayer);

}

extern void FlushCache(UINT32);

void invoker()
{
    FlushCache(0);
    injectPatches();
}
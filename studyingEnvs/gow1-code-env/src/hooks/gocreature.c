#include "include/gocreature.h"
#include "goplayer.h"
#include "injector.h"
#include "gocreature.h"

extern BOOL allow_InfiniteHealth;

void hook_goCreature_SetHitPoints(goCreature* this, float fHP)
{
    if (allow_InfiniteHealth && this != goPlayer_sm_pPlayer->m_pCreature)
    {
        return;
    }
    
    goCreature_SetHitPoints(this, fHP);
}

void injectHookGoCreature()
{
    RedirectCall(0x1E0B70, hook_goCreature_SetHitPoints);
}
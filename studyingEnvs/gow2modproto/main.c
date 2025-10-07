#include "ps2mem.h"
#include "stdint.h"


#define malloc ((void*(*)(uint32_t))0x002A2110)
#define free ((void(*)(void *))0x002A2160)
#define _sprintf ((void(*)(char *, const char *, ...))0x002A1E10)
#define goCreature_SetHitPoints ((void(*)(uint32_t *))0x002055A0)
#define exit ((void(*)(uint32_t))0x0029BB40)
#define printf ((int(*)(const char *, ...))0x002AADB0) // kprintf
#define memset ((void*(*)(void *, int, size_t))0x002A11DC)
#define Fight_AddObject ((void(*)(uint64_t *))0x001D1AB8)
#define GameState_ShowLoadScreen ((void(*)(int32_t))0x0023BAD8)
#define strcpy ((void(*)(char*, char*))0x002A16B0)
#define FlashInterface_ClearHUD ((void(*)(uint32_t, uint32_t))0x1D71F0)
#define FlashInterface_SimKeyEvent ((void(*)(uint32_t))0x1D5C68)
#define MedusaEyeAttackData_Update ((void(*)(uint32_t*))0x1A3268)
#define rand ((uint64_t(*)())0x2A2C28)
#define FlashInterface_PromptButton ((void(*)(uint32_t, uint32_t))0x1D73D8)
#define FlashInterface_HitCounter ((void(*)(uint32_t, int,int,int,int))0x1D7110)
#define GameState_GoToSaveMenu ((void(*)(uint32_t*))0x23AF00)
#define GameState_GoToDeadMenu ((void(*)(uint32_t*))0x23ADB0)
#define GameState_GoToLoadingHero ((void(*)(uint32_t*))0x23CD78)
#define GameState_ShellBootScreen ((void(*)(uint32_t*))0x23C6D0)
#define GameState_PSMMenu ((void(*)(uint32_t*))0x23D5C0)
#define GameState_Shell ((void(*)(uint32_t*))0x23C758)
#define GameState_Init ((void(*)(uint32_t*))0x23C4A8)
#define GameState_GoToShell ((void(*)(uint32_t*))0x23C4D8)
#define ftoi ((int32_t(*)(float))0x2A9C70)
#define atoi ((int32_t(*)(const char*))0x2A2010)
#define my_itoa ((char* (*)(uint32_t))0x14E348)
#define my_ftoa ((char*(*)(float))0x14E3C0)
#define my_atof ((float(*)(char const*))0x14E4E8)
#define sysPad_ReadPads ((uint32_t(*)(bool))0x187198)
#define ReadPad ((uint32_t(*)(int))0x187198)


#define flashinterface *((uint32_t*)0x2B1AD0)
#define GameState_curState *((uint32_t*)0x2B2774)
#define g_Timer *((uint32_t*)0x2B7238)
#define goPlayer_sm_pPlayer *((uint32_t*)0x2B1C64)
#define GameWadLoader_pHeroWadSlot *((uint32_t*)0x3478B8)

static char *teste = "%d-%d-%d-%d-%d-%d-%d\n";

void takehit()
{
    printf(teste, ReadPad(1),ReadPad(2),ReadPad(3),ReadPad(4),ReadPad(5),ReadPad(6),ReadPad(7));
}
void INVOKER()
{
    asm("ei\n");
    asm("addiu $ra, -4\n");
    
	redirectCall(0x205758, takehit);

    // while(true);
}
#include "ps2mem.h"
#include "stdint.h"
#include "alloc.h"
#include "list.h"
#include "string.h"
#include "stdio.h"

#include "gow/gamestate.h"
#include "gow/gocreature.h"
#include "gow/savegame.h"
#include "gow/flashinterface.h"
#include "gow/goplayer.h"

#include "message.h"
#include "cameratracking.h"
#include "time.h"
#include "slowmotion.h"
#include "gamepad.h"
#include "creature.h"

// general functions
#define sound_Mixer_SetMix ((void (*)(uint32_t, uint32_t))0x269D48)
void (*FlushCache)(uint32_t) = ((void (*)(uint32_t))0x2CFBA0);
#define tValidityDisk_tValidityDisk ((uint32_t(*)(uint32_t *))0x251C18)
#define sceSifLoadModule ((FILE * (*)(char const *, int, int))0x2D4A98)
#define sceOpen ((int(*)(char const *, int))0x2D3BF8)
#define sceRead ((void (*)(int, void *, uint32_t))0x2D4008)
#define sceClose ((void (*)(int))0x2D3E88)
#define GetRomName ((uint32_t * (*)())0x2BF0C8)
#define sysFixFileName ((char *(*)(const char *))0x187758)
#define _exit ((void (*)(void))0x1001D0)
#define tMoveSystem_GetTargetID ((uint32_t(*)(uint32_t *))0x24DFE8)
#define tMoveSystem_GetTargetCreature ((uint32_t * (*)(uint32_t *))0x24DEB0)

// variables
#define sound_gMusic *((uint32_t *)0x2D9008)
#define goHandleDB_sm_pHandleDB ((uint32_t*)0x2D8924)

// kratos
#define player_magic *((uint32_t *)0x335840)
#define player_rage *((uint32_t *)0x335848)
#define player_red_orbs *((uint32_t *)0x335850)

#define my_ftoa ((char*(*)(float))0x150F50)

// thread
// #define CreateThread ((int (*)(ee_thread_t *))0x002CF720)
// #define DeleteThread ((int (*)(ee_thread_t *))0x002CF730)
// #define StartThread ((int (*)(uint32_t, uint32_t))0x002D0768)
// #define WakeupThread ((void (*)(void))0x2CF850)
// #define RotateThreadReadyQueue ((void (*)(void))0x2CF7D0)
// #define _StartThread ((int (*)(uint32_t, uint32_t))0x002CF740)
// #define TerminateThread	002CF770
// #define ChangeThreadPriority	002CF7B0
// #define GetThreadId	002CF810
// #define iWakeupThread	002D0600
// #define DelayThread	002D06A0
// #define _DelayThreadHandler	002D08E0
// 
// #define CreateSema ((int (*)(ee_sema_t *))0x002CF920)
// #define DeleteSema ((int (*)(uint32_t))0x002CF930)
// // #define SignalSema	002CF940
// #define WaitSema ((int (*)(ee_sema_t *))0x002CF960)

enum Costumes
{
    normal_kratos,
    god_armor_alt,
    injure_kratos,
    cod_of_war = 0xA,
    hydra_armour,
    dark_odyssey,
    athena,
    hercules,
    general_kratos,
    god_armor,
};

typedef struct
{
    char *name;
    uint8_t id;
} Costume;

const Costume costume_list[] = {
    {"Normal kratos", normal_kratos},
    {"God armor Alt", god_armor_alt},
    {"Injure kratos", injure_kratos},
    {"Cod of war", cod_of_war},
    {"Hydra armor", hydra_armour},
    {"Dark odyssey", dark_odyssey},
    {"Athena", athena},
    {"Hercules", hercules},
    {"General kratos", general_kratos},
    {"God armor", god_armor}
};

typedef struct
{
    float x;
    float y;
    float z;
} Pos;

Pos saved_pos = {0.0f, 0.0f, 0.0f};

typedef struct
{
    float *health;
    Pos *pos;
} Kratos;

Kratos kratos;
uint32_t time = 0;
uint8_t costume_index = 0;
uint8_t *current_costume = ((uint8_t *)0x36C654);
uint32_t *goPlayer_sm_pPlayer;

void print_pointer(uint32_t* ptr)
{
    printf("%p\n", ptr);
}

void changeCostume()
{
    SaveGame_SaveCheckPoint();
    costume_index = (costume_index++ == 9) ? 0 : costume_index;
    *current_costume = costume_list[costume_index].id;

    GameState_Restart();

    scheduleMessage(costume_list[costume_index].name, 11);
}

void savePlayerPos()
{
    saved_pos.x = kratos.pos->x;
    saved_pos.y = kratos.pos->y;
    saved_pos.z = kratos.pos->z;
}

void teleportPlayer()
{
    if (!(saved_pos.x + saved_pos.y + saved_pos.z))
        return;

    kratos.pos->x = saved_pos.x;
    kratos.pos->y = saved_pos.y;
    kratos.pos->z = saved_pos.z;
    FlashInterface_PlaySound(flashInterface, 0, (char *)0x2EE718);

}

#define firstLevel ((char *)0x2D8E90)

void goToArena()
{
    strcpy(firstLevel, "Free12");
    printf("Going to %s\n", firstLevel);
    *GameState_curState = 8;
}

#define goSoldier___goSoldier ((uint32_t(*)(uint32_t*, uint32_t))0x224C30)

# define goHandleDB_Register ((uint32_t(*)(uint32_t*, uint32_t, void *, uint32_t))0x222F30)

uint32_t hook_goHandleDB_Register(uint32_t *this, uint32_t a2, void *a3, uint32_t a4)
{
    uint32_t result = goHandleDB_Register(this, a2, a3, a4);

    entity_camera_target = (uint32_t *)((uint32_t)this + 0xC);

    return result;
}

#define goPlayer_Init ((void(*)(uint32_t*,uint32_t*))0x20BB08)

void hook_goPlayer_Init(uint32_t *this, uint32_t* a1)
{
    goPlayer_Init(this, a1);

    kratos.pos = (Pos *)(*goPlayer_sm_pPlayer + 0x80);
    kratos.health = (float *)(*goPlayer_sm_pPlayer + 0x178);
}

void hook_goCreature_SetHitPoints(uint32_t *this)
{   
    goCreature_SetHitPoints(this);
    
    uint32_t creature_id = goCreature_GetID(this);

    if (enable_enemy_camera_tracking && creature_id != 0 && !atCameraTracking(creature_id))
    {
        SetCameraTrackingTarget(this);
    }
}

void hook_goCreature_goCreature(uint32_t *this)
{
    goCreature_goCreature(this);
//     uint32_t creature_id = goCreature_GetID(this);
//     // printf("", creature_id);
// 
//     if (creature_id)
//     {
//         // insertItem(&gocreature_list, this, 0);
//         printf("Creating creature %p %d\n", this, creature_id);
//     }
}

void hook_goCreature_goCreature_Destructor(uint32_t*this, uint32_t a1)
{
    goCreature_goCreature_Destructor(this, a1);

    if (player_target == this)
    {
        SetCameraTrackingTarget((uint32_t *)*goPlayer_sm_pPlayer);
    }
    // removeItem(&gocreature_list, this);
    printf("Destroying creature %p %d\n", this, a1);
}

void hook_goPlayer_goPlayer(uint32_t *this)
{
    goPlayer_goPlayer(this);

    goPlayer_sm_pPlayer = (uint32_t *)*(uint32_t *)0x2D8734;
}


#define dword_2D8F04 *((uint32_t*)0x2D8F04)
#define dword_2D8EB4 *((uint32_t*)0x2D8EB4)
#define dword_2D8F6C *((uint32_t*)0x2D8F6C)
#define dword_2D8EB8 *((uint32_t*)0x2D8EB8)
#define vid_m_uFlags *((uint32_t*)0x36381C)
#define dword_2D8F64 *((uint32_t*)0x2D8F64)

#define sub_25B910 ((uint32_t(*)(uint32_t))0x25B910)
#define sub_25B998 ((void(*)(void))0x25B998)
#define sub_1EF878 ((void(*)(uint32_t, uint32_t))0x1EF878)
#define sub_25DEA8 ((void(*)(void))0x25DEA8)

#define sub_2707F8 ((void(*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint64_t))0x2707F8)
#define sub_1DE218 ((void(*)(uint32_t))0x1DE218)
#define sub_25A1A0 ((void(*)(float, float, float))0x25A1A0)
#define sub_25E290 ((void(*)(void))0x25E290)
#define sub_25E5B0 ((uint32_t(*)(uint32_t))0x25E5B0)
#define sub_1EC050 ((void(*)(uint32_t, uint32_t, uint32_t))0x1EC050)

#define flt_2D8F1C *((float *)0x2D8F1C)
#define flt_2D8EB0 *((float *)0x2D8EB0)
#define flt_2D8EAC *((float *)0x2D8EAC)
#define flt_2D8EA8 *((float *)0x2D8EA8)

uint32_t hook_sub_25E338(uint32_t a1)
{
    uint32_t v4; // $ra
    uint32_t v5; // $a2
    uint32_t v6; // $a3
    uint32_t v7; // $a4
    uint32_t v8; // $a5
    uint32_t v9; // $a6
    uint32_t v10; // $a7
    uint32_t v11; // $a0
    uint32_t v12; // $a1
    uint32_t result; // $v0
    uint32_t v14; // $v0
    uint32_t *v16; // $v1
    uint32_t v18; // $v1
    uint32_t *v19; // $a0
    uint32_t *v23; // $v0
    uint64_t v28[2]; // [sp+0h] [-50h] BYREF
    uint32_t v29; // [sp+10h] [-40h]

    v29 = v4;
    if ( sub_25B910(a1) )
        sub_25B998();
    sub_1EF878(0, 1);
    GameState_CheckPause(0LL);
    v11 = -65LL;
    v12 = dword_2D8F04;
    vid_m_uFlags &= 0xFFFFFFBF;
    if ( !dword_2D8F04 )
    {
        v16 = flashInterface;
        if ( dword_2D8EB4 != (uint32_t)*((int *)flashInterface + 167) )
        {
            sub_25DEA8();
            dword_2D8EB4 = *((uint32_t *)flashInterface + 167);
            v16 = flashInterface;
        }
        result = *((int *)v16 + 229);

        printf("1: %d\n", !*((uint32_t *)v16 + 229));
        if ( !*((uint32_t *)v16 + 229) )
        {
            goto LABEL_20;
        }
        result = 3080192LL;
        
        printf("2: %d\n", *((uint32_t *)v16 + 228));

        switch ( *((uint32_t *)v16 + 228) )
        {
            case 0:
                v18 = *((int *)flashInterface + 167);
                if ( v18 <= 7 )
                    *((uint32_t *)flashInterface + 167) = v18 + 1;
                goto LABEL_17;
            case 1:
                sub_2707F8(v11, v12, v5, v6, v7, v8, v9, v10, v28[0]);
                dword_2D8F6C = 0;
                result = GameState_Restart();
                goto LABEL_20;
            case 2:
                *((uint32_t *)flashInterface + 118) = 0;
                result = GameState_Quit();
                goto LABEL_20;
            case 3:
                *((uint32_t *)flashInterface + 118) = 1;
                result = GameState_Quit();
                goto LABEL_20;
            case 4:
                v23 = flashInterface;
                *((uint32_t *)flashInterface + 228) = 0;
                *((uint32_t *)v23 + 229) = 0;
                dword_2D8EB4 = -1;
                dword_2D8EB8 = 1;
                *((uint32_t *)v23 + 221) = 1;
                result = FlashInterface_SimKeyEvent((uint32_t)v23);
                goto LABEL_20;
            case 5:
LABEL_17:
                sub_25E290();
                result = 2LL;
                dword_2D8F04 = 2;
                break;
            case 6:
                dword_2D8F64 = 1;
                result = GameState_GoToSaveMenu(5);
                break;
            default:
                break;
        }
LABEL_19:
        goto LABEL_20;
    }
    result = --dword_2D8F04;
    if ( (uint32_t)v12 != 1 )
        goto LABEL_19;
    sub_1DE218(0LL);
    flt_2D8F1C = 1.0;
    flt_2D8EB0 = 0.0;
    flt_2D8EAC = 0.0;
    flt_2D8EA8 = 0.0;
    sub_25A1A0(0.0, 0.0, 0.0);
    strcpy((char *)v28, "Cmbt11");
    memset((void*)((unsigned int)v28 | 7), 0, 9);
    BYTE4(v28[0]) = *((uint8_t *)flashInterface + 668) + 48;
    v14 = sub_25E5B0((unsigned int)v28);
    sub_1EC050(v14, 0LL, 0LL);
    result = GameState_GoToLoadingLevel(1, 1LL);
LABEL_20:
    return result;
}

#define gT0VirtualCount *(uint64_t *)0x336F20

#define dword_2D8650 *((uint32_t *)0x2D8650)
#define dword_2D8EF0 *((uint32_t *)0x2D8EF0)

#define sysTime_m_fFrameTime *((uint32_t *)0x2D80D8)

#define sub_1E4CE0 ((uint32_t(*)(uint32_t, uint32_t))0x1E4CE0)
#define sub_25AD40 ((void(*)(void))0x25AD40)
#define sub_25ACE0 ((void(*)(uint32_t))0x25ACE0)


uint32_t hook_Gamestate_update(uint32_t a0)
{
    uint32_t v2; // $v0
    uint32_t v3; // $a0
    uint32_t result; // $v0
    uint32_t v5; // $s0
    bool v6; // dc
    uint32_t v9; // $v1

    GameState_padOrDiscReinserted = 0;

    v2 = sub_1E4CE0((int)flashInterface, dword_2D8650);
    if ( !v2 || *(int *)(*(uint32_t *)(v2 + 224) + 3204) < 2LL )
    {
LABEL_5:
        v9 = *GameState_curState;
        if ( *GameState_curState != 12LL )
        {
            if ( *GameState_curState == 11LL && dword_2D8EF0 )
            {
                sub_25AD40();
                dword_2D8EF0 = 0;
            }
            else
            {
                sub_25ACE0(sysTime_m_fFrameTime);
            }
            v9 = *GameState_curState;
        }
        result = 3080192LL;
        switch ( v9 )
        {
            case 0LL:
                result = sub_25BDF8();
                break;
            case 1LL:
                result = sub_25BFC8();
                break;
            case 2LL:
                result = sub_25C178();
                break;
            case 3LL:
                result = sub_25C200();
                break;
            case 4LL:
                result = sub_25C5C0();
                break;
            case 5LL:
                result = GameState_ShellLoadGame();
                break;
            case 6LL:
                result = sub_25C878();
                break;
            case 7LL:
                result = GameState_ShellLoadCancelled();
                break;
            case 8LL:
                result = sub_25C9A8();
                break;
            case 9LL:
                result = sub_25CB90();
                break;
            case 10LL:
                result = sub_25CE10();
                break;
            case 11LL:
                result = GameState_Playing();
                break;
            case 12LL:
                result = GameState_PauseMenu();
                break;
            case 13LL:
                result = GameState_PSMMenu();
                break;
            case 14LL:
                result = GameState_FailedOrDeadMenu();
                break;
            case 15LL:
                result = sub_25E338();
                break;
            case 16LL:
                result = sub_25E660();
                break;
            case 17LL:
                result = sub_25E938();
                break;
            case 18LL:
                goto LABEL_32;
            case 19LL:
                result = sub_25EA80();
                break;
            case 20LL:
                result = sub_25EBA8();
                break;
            case 30:
                result = hook_sub_25E338(a0);
LABEL_32:
                break;
            default:
                goto LABEL_33;
        }
        goto LABEL_33;
    }
    v5 = GameState_CheckPad();
    result = GameState_CheckDisc();
    v6 = v5 != 0;
    if ( !v6 )
    {
        if ( result )
            return result;
        goto LABEL_5;
    }
LABEL_33:
    return result;
}

void loop(uint32_t *a0)
{
    if (hasTimePassed(1, time))
    {
        if (*GameState_curState == 11)
        {
            listenGamepad();
            handleSlowmotionActivity();
            checkMessageScheduling();
        }

        printf("GameState %d\n", *GameState_curState);

        time = *g_Timer;     
    }

    hook_Gamestate_update((uint32_t)a0);
}

void injectPatches()
{
    redirectCall(0x25EDAC, loop);
    redirectCall(0x287A60, hook_goPlayer_goPlayer);
    redirectCall(0x26A3C0, hook_goPlayer_Init);
    redirectCall(0x21C0B0, hook_goCreature_SetHitPoints);
    redirectCall(0x219DB0, hook_goHandleDB_Register);
    redirectCall(0x21CC44, hook_goCreature_goCreature);
    redirectCall(0x224D58, hook_goCreature_goCreature_Destructor);

    messagePatches();
    slowmotionPatches();
}

void invoker()
{
    FlushCache(0);
    injectPatches();
    initAllocator();
    printf("%d\n", sizeof(int128_t));
}

// - todo
// ver qual função le os valores referentes aos valores para a hud
// testar as funções de modo do gosoldier
// ver a hierarquia das funções ate a gocreature::gocreature 
// debugar o desalocamento de mensagens
// analisar o carragemento de cenarios
// analisar funções que mudam a magia selecionada
// organizar o codigo em arquivos

// -done
// otimizar a string que informa on off da mensagem tracking
// verificar a função que destroi as entidades verificando se é a do target
// funções novas só vão funcionar se estiver gamestate 11
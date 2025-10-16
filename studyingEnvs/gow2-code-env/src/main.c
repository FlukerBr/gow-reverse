#include <structs.h>
#include <utils.h>
#include "menu.h"
#include "message.h"
#include <stdio.h>
#include "injector.h"
#include <gamestate.h>
#include <entity.h>

char * erl_id = "menu";

// typedef struct WadInfo {
//     uint firstLoadA[2];
//     uint firstLoadB[2];
//     int globalDataBase;
//     int globalDataSize;
//     int levelDataBase;
//     int levelDataSize;
//     UINT64 field6_0x20;
//     UINT64 field7_0x28;
//     UINT64 field8_0x30;
//     UINT64 field9_0x38;
//     UINT64 field10_0x40;
//     UINT64 field11_0x48;
//     UINT64 field12_0x50;
//     UINT64 field13_0x58;
//     short pwiID;
//     ushort nEntities;
//     Entity** entityTable;
//     int wc;
// } WadInfo;
// 
// extern WadInfo WadInfo_wiTable[2];
// 
// void ListEntities()
// {
//     Entity** entities = WadInfo_wiTable[0].entityTable;
//     for (uint i = 0; i < WadInfo_wiTable[0].nEntities; i++)
//     {
//         printf("%d %s id: %d slicode: %p\n", WadInfo_wiTable[0], entities[i]->name, entities[i]->id, entities[i]->sli.codeStart);
//     }
// 
// }

extern uint g_Timer;
uint time;
Gpad gamepad;

void init()
{
    GameRegistration();

    initMenu();
}

void hook_EditTextRender(F_EditText *editText,F_EditTextInstance *editTextInstance,UINT16 depth,VUMat4 *matrix,F_Cxform *cxform,BOOL overUnder)
{
    EditTextRender(editText, editTextInstance, depth, matrix, cxform, overUnder);

    printf("%s %d\n", editTextInstance->value.s, editTextInstance->value.i);
}


void hook_Entity_AddToCreationList(Entity *this, int order)
{
    for (size_t i = 0; i < 10; i++)
    {
        Entity_AddToCreationList(this, order);
    }
    
}

void loop()
{
    gamepad = ReadPad(0);

    if ((g_Timer - time)/10 > 0.1f)
    {
        if (gamepad.L1)
        {       
            displayMenu(46);
        }
        
        time = g_Timer;
    }
    updateMenu();
    
    GameState_Update();
}

void injectPatches()
{
    // printf("injetando patches!\n");
    RedirectCall(0x25EDAC, loop);
    // MakeNop(0x1D6270); // disable pickups
    injectMenuPatches();
    injectMessagePatches();

    RedirectCall(0x1874E4, init);

    // RedirectCall(0x154E4C, hook_EditTextRender);

    RedirectCall(0x1D4CE4 , hook_Entity_AddToCreationList);


    // printf("patches injetados!\n");
}

void _start()
{
    FlushCache(0);
    injectPatches();
}
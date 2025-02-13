#include "flashinterface.h"
#include "gamestate.h"
#include "menu.h"
#include "injector.h"
#include "enemymeter.h"
#include "goplayer.h"
#include "message.h"

typedef struct HeapZone {
    UINT32 uHZConstant;
    UINT32 *pFreeList;
    UINT32 *pEndFreeList;
    struct HeapZone *pNextZone;
    char * pStart;
    char * pStartUse;
    char * pEnd;
    UINT32 *pMasterChunkList;
    UINT32 *pMasterList;
    UINT32 uMoreMasters;
    char cName[16];
    UINT32 heapData;
} HeapZone;

HeapZone *Mem_GetCurrentHeapZone();
void *Mem_NewPtr(HeapZone *pHZ,UINT32 byteSize,UINT32 byteAlignment);
int _printf(const char *, ...);
void SaveGame_SaveCheckPoint();
void SaveGame_LoadCheckPoint();
char* strcpy(char *dest, const char *src);
int sprintf(char *str, const char *format, ...);

MenuManager menuManager;

int lastChoice;
uint *costume = (uint*)0x336EBC;
BOOL allow_InfiniteJump = 0;
BOOL allow_FreeCam = 0;
BOOL allow_AutoKill = 0;
BOOL allow_InfiniteHealth = 0;
BOOL allow_InfiniteMagic = 0;
float *magic = (float*)0x00302D24;

ushort *camera_type = (ushort*)0xD09F74;

uint *Entity_doCheckPoint = (uint*)0x29CB00;

char *camera_hint_msg[] = {
    "[L2Button] Rotate left - [L1Button] Rotate right",
    "[R1Button] to move in - [R2Button] to move out",
    "Right Analog [Joystick] to move free",
    "Left Analog [Joystick] to look around"
};

char textMenuBuffer[5][32] = {0};

void initMenu()
{
    menuManager.nMenus = 2;

    menuManager.menu_list = (Menu *)Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(Menu)*menuManager.nMenus,sizeof(Menu));

    if (!menuManager.menu_list)
    {
        _printf("***Warning: Unable to initialize menu!***");
        return;
    }

    ushort nChoices;
    MenuChoice *menuChoices;
    ushort nPages;

    nChoices = 8;
    menuChoices = (MenuChoice *)Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(MenuChoice)*nChoices,sizeof(MenuChoice));
    
    nPages = ((nChoices + 4) / 5) - 1;

    menuChoices[0] = (MenuChoice){
        .text = "Infinite Jump",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 1
        
    };
    menuChoices[1] = (MenuChoice){
        .text = "Costumes",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 2
    };
    menuChoices[2] = (MenuChoice){
        .text = "Enemy Meter",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 3
    };
    menuChoices[3] = (MenuChoice){
        .text = "Unlock all Pickups",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 4
    };
    menuChoices[4] = (MenuChoice){
        .text = "Auto Kill",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 5
    };
    menuChoices[5] = (MenuChoice){
        .text = "Infinite Health",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 11
    };
    menuChoices[6] = (MenuChoice){
        .text = "Infinite Magic",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 12
    };
    menuChoices[7] = (MenuChoice){
        .text = "Free Camera",
        .style = {
            .type = 1,
            .value = 0
        },
        .CMD = 13
    };

    menuManager.menu_list[0] = (Menu){
        .id = 46,
        .title = "[*1]God Menu",
        .menuChoices = menuChoices,
        .nChoices = nChoices,
        .nPages = nPages
    };

    nChoices = 5;
    menuChoices = (MenuChoice *)Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(MenuChoice)*nChoices,sizeof(MenuChoice));
    nPages = ((nChoices + 4) / 5) - 1;

    menuChoices[0] = (MenuChoice){
        .text = "Ares Armor",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 6
    };
    menuChoices[1] = (MenuChoice){
        .text = "Bubbles",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 7
    };
    menuChoices[2] = (MenuChoice){
        .text = "Chef of War",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 8
    };
    menuChoices[3] = (MenuChoice){
        .text = "Dairy Bastard",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 9
    };
    menuChoices[4] = (MenuChoice){
        .text = "Tycoonius",
        .style = {
            .type = 0,
            .value = 0
        },
        .CMD = 10
    };

    menuManager.menu_list[1] = (Menu){
        .id = 45,
        .title = "[*1]Costumes",
        .menuChoices = menuChoices,
        .nChoices = nChoices,
        .nPages = nPages
    };

    menuManager.curMenu = menuManager.menu_list;
    lastChoice = 1;
    menuManager.curPage = 0;
}

ushort getMenuChoice()
{
    return (5 * menuManager.curPage) + flashInterface->Menu_Choice - 1;
}

void updateMenu()
{
    if (flashInterface->curMenuID == 0 || flashInterface->curMenuID > 46)
    {
        return;
    }


    Menu *curMenu = menuManager.curMenu;

    BOOL backward_page = flashInterface->Menu_Choice == 5 && lastChoice == 1;
    BOOL forward_page = flashInterface->Menu_Choice == 1 && lastChoice == 5;

    if (backward_page || forward_page)
    {
        int nextPage;

        if (backward_page)
        {
            nextPage = menuManager.curPage - 1;
            menuManager.curPage = nextPage >= 0 ? nextPage : 0;
        } else if (forward_page)
        {
            nextPage = menuManager.curPage + 1;
            int nPages = curMenu->nPages;
            menuManager.curPage = nextPage < nPages ? nextPage : nPages;
            
        }
    }
    
    lastChoice = flashInterface->Menu_Choice;
    ushort curPage = menuManager.curPage;
    
    char **lines[] =
    {
        &flashInterface->MenuTemplate_Menu1,
        &flashInterface->MenuTemplate_Menu2,
        &flashInterface->MenuTemplate_Menu3,
        &flashInterface->MenuTemplate_Menu4,
        &flashInterface->MenuTemplate_Menu5
    };

    flashInterface->MenuTemplate_Line1 = curMenu->title;

    uint initialIndex = curPage * 5;
    uint maxIndex = initialIndex + 5;
    maxIndex = (maxIndex > curMenu->nChoices ? curMenu->nChoices : maxIndex);

    for (uint i = initialIndex, j = 0; j < 5; i++, j++)
    {
        switch (curMenu->menuChoices[i].style.type)
        {
        case 1:
            sprintf(textMenuBuffer[j], "%s - %s", curMenu->menuChoices[i].text, curMenu->menuChoices[i].style.value ? "On" : "Off");
            break;
        default:
            strcpy(textMenuBuffer[j], curMenu->menuChoices[i].text);
            break;
        }

        *lines[j] = (i < maxIndex) ? textMenuBuffer[j] : NULL;
    }
}

void setCurrentMenu(ushort ID)
{
    for (uint i = 0; i < menuManager.nMenus; i++)
    {
        if (menuManager.menu_list[i].id == ID)
        {
            menuManager.curMenu = &menuManager.menu_list[i];
            return;
        }
        
    } 
    _printf("Menu %d not found!", ID);
}

void stopMenu()
{
    FlashInterface_CancelMsg(flashInterface, 0);
    FlashInterface_MsgMenuPause(flashInterface,0);
    FlashInterface_PlaySound(flashInterface, 0, "SND_MM_CONTINUE");
}

void changeMenu(ushort ID)
{
    stopMenu();
    setCurrentMenu(ID);
    displayMenu(ID);
}

void displayMenu(int ID)
{
    if (flashInterface->curMsgID != 0 || flashInterface->curMenuID > 46)
    {
        _printf("Could not display menu %d\n", ID);
        return;
    }
    
    Pending p;
    
    p.menuID = ID;
    p.pickupID = -1;
    p.msgID = -1;
    p.seconds = 0.0f;
    p.msgMeterBarGrow = 0;
    p.healthMeterValue = 0;
    p.magicMeterValue = 0;
    GameState_AddPending(&p);

    setCurrentMenu(ID);

    flashInterface->Menu_Choice = 1;
    flashInterface->MenuTemplate_Event = 15;
    FlashInterface_SimKeyEvent(flashInterface);
}

void Entity_SendEvent(uint,uint,uint,uint,uint *);

void handleMainMenuCMD()
{
    ushort choice = getMenuChoice();
    ushort cmd = menuManager.curMenu->menuChoices[choice].CMD;

    switch (cmd)
    {
    case 1:
        allow_InfiniteJump = !allow_InfiniteJump;
        menuManager.curMenu->menuChoices[choice].style.value = allow_InfiniteJump;
        break;
    case 2:
        changeMenu(45);
        break;
    case 3:
        enableEnemyMeter(!allow_EnemyMeter);
        menuManager.curMenu->menuChoices[choice].style.value = allow_EnemyMeter;
        break;
    case 4:
        goPlayer_AcquireAllPickups(goPlayer_sm_pPlayer, 1);
        break;
    case 5:
        allow_AutoKill = !allow_AutoKill;
        menuManager.curMenu->menuChoices[choice].style.value = allow_AutoKill;
        
        break;
    case 11:
        allow_InfiniteHealth = !allow_InfiniteHealth;
        menuManager.curMenu->menuChoices[choice].style.value = allow_InfiniteHealth;

        break;
    case 12:
        allow_InfiniteMagic = !allow_InfiniteMagic;
        menuManager.curMenu->menuChoices[choice].style.value = allow_InfiniteMagic;
        *magic = allow_InfiniteMagic ? 100.0f : 0.0f;
        break;
    case 13:
        allow_FreeCam = !allow_FreeCam;
        *camera_type = allow_FreeCam ? 3 : 1;
        menuManager.curMenu->menuChoices[choice].style.value = allow_FreeCam;
        
        if (allow_FreeCam)
        {
            displayMessage(camera_hint_msg, 4, 1);
        }
        
        break;
    default:
        break;
    }
}

void handleCostumeMenuCMD()
{
    ushort choice = (flashInterface->Menu_Choice+(menuManager.curPage * 5)) - 1;
    ushort cmd = menuManager.curMenu->menuChoices[choice].CMD;

    _printf("%d %d\n", cmd, choice);

    // SaveGame_SaveCheckPoint();
    *Entity_doCheckPoint = 1;

    switch (cmd)
    {
    case 6:
        *costume = 5;
        break;
    case 7:
        *costume = 2;
        break;
    case 8:
        *costume = 1;
        break;
    case 9:
        *costume = 4;
        break;
    case 10:
        *costume = 3;
        break;
    default:
        break;
    }

    GameState_Restart();
}

void execMenuCMD(uint a1,uint menu_choice,uint a3,uint a4,uint *a5)
{
    if (flashInterface->curMenuID <= 46)
    {
        switch (flashInterface->curMenuID)
        {
        case 45:
            handleCostumeMenuCMD();
            break;
        case 46:
            handleMainMenuCMD();
            break;
        default:
            break;
        }
        return;
    }

    Entity_SendEvent(a1, menu_choice, a3, a4, a5);
}

void injectMenuPatches()
{
    RedirectJump(0x1B9678, 0x1B96D8);
    MakeNop(0x1B967C);
    RedirectCall(0x1B87AC, execMenuCMD);
}

// try slicode run
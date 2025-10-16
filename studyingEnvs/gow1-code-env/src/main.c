#include "type.h"
#include "injector.h"
// #include "flashinterface.h"
#include "gamestate.h"
// #include "goplayer.h"
// #include "gocreature.h"
// #include "gosoldier.h"
// #include "menu.h"
// #include "enemymeter.h"
#include "syspad.h"
// #include "entity.h"
// #include "hooks/gamestate.h"
// #include "hooks/gosoldier.h"
// #include "hooks/gocreature.h"
// #include "message.h"
#include "sifdev.h"

int _printf(const char *, ...);
int sprintf(char *str, const char *format, ...);
// uint strlen(const char *str);
char* strcpy(char *dest, const char *src);
uint strlen(const char *str);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t n);

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
// void Entity_AddToCreationList(Entity*, int);
// void hook_Entity_AddToCreationList(Entity *a0, int a1)
// {
//     _printf("%s\n", a0->name);
// }
// 
// extern WadInfo WadInfo_wiTable[2];
// 
// void ListEntities()
// {
//     Entity** entities = WadInfo_wiTable[0].entityTable;
//     for (uint i = 0; i < WadInfo_wiTable[0].nEntities; i++)
//     {
//         _printf("%d %s id: %d slicode: %p\n", WadInfo_wiTable[0], entities[i]->name, entities[i]->id, entities[i]->sli.codeStart);
//     }
// 
// }
// 
// // void printMovie()
// // {
// //     _printf("")
// // }
// 
Gpad ReadPad(uint);
// 
// typedef struct HeapZone {
//     UINT32 uHZConstant;
//     UINT32 *pFreeList;
//     UINT32 *pEndFreeList;
//     struct HeapZone *pNextZone;
//     char * pStart;
//     char * pStartUse;
//     char * pEnd;
//     UINT32 *pMasterChunkList;
//     UINT32 *pMasterList;
//     UINT32 uMoreMasters;
//     char cName[16];
//     UINT32 heapData;
// } HeapZone;
// 
// extern HeapZone *ZoneList;
// 
// uint *dword_2CB944 = (uint*)0x2CB944;
// uint *dword_2CB948 = (uint*)0x2CB948;
// 
// extern uint TheZone;
// 
// uint Mem_FreeBytes(uint  a1, uint a2)
// {
//     uint  v2; // $a2
//     int i; // $a3
//     int v4; // $v1
// 
//     if ( !a1 )
//     {
//         if ( *dword_2CB944 == (uint )*dword_2CB948 )
//             a1 = 0LL;
//         else
//             a1 = *(int *)(4 * *dword_2CB944 + TheZone);
//     }
//     if ( a2 )
//         *(uint *)a2 = 0;
//     v2 = *(int *)(a1 + 4);
//     for ( i = 0; v2 != a1; i += v4 )
//     {
//         v4 = (*(uint *)v2 & 0x1FFFFFF) - 2;
//         if ( a2 )
//             ++*(uint *)a2;
//         v2 = *(int *)(v2 + 4);
//     }
//     return 4 * i;
// }
// 
// void PrintHeapStats()
// {
//     int iVar1;
//     int iVar2;
//     int iVar3;
//     char* pCVar4;
//     int iVar5;
//     HeapZone *zone;
//     long lVar6;
//     UINT32 freeBlocks;
//     
//     _printf("            Name        Free\n");
//     _printf("  ============================================================================\n");
//     lVar6 = (long)(int)ZoneList;
//     if (lVar6 != 0) {
//         pCVar4 = ZoneList->pEnd;
//         while( true ) {
//             zone = (HeapZone *)lVar6;
//             iVar3 = Mem_FreeBytes((uint)zone,(uint)&freeBlocks);
//             _printf("%20s %10d\n",zone->cName, iVar3);
//             lVar6 = (long)(int)zone->pNextZone;
//             if (lVar6 == 0) break;
//             pCVar4 = zone->pNextZone->pEnd;
//         }
//     }
// }
// 
extern uint g_Timer;
uint time;
Gpad gamepad;
// 
// F_SpriteInstance *GetSubSI(char const *, F_SpriteInstance *);
// 
// F_SpriteInstance *hook_GetSubSI(char const *a0, F_SpriteInstance *a1)
// {
//     F_SpriteInstance *r = GetSubSI(a0, a1);
// 
//     _printf("%s\n", a0);
// 
//     return r;
// }
// 
// char *objTypes[] = {
//     "Unknown",
//     "Shape",
//     "Unknown",
//     "Unknown",
//     "Text",
//     "EditText",
//     "Button",
//     "Sprite"
// };
// 
// BOOL isSpriteInstance(F_ObjectInstance *objectInstance)
// {
//     return ((BOOL(*)())(objectInstance->__vtable->IsSpriteInstance.__pfn))();
// }
// 
// void *getObjectAddress(F_Object *object)
// {
//     F_Movie *movie = flashInterface->flashClient[1]->movieInstance->movie;
// 
//     void *objs[] = {
//         NULL,
//         &movie->shapeArray[object->index],
//         NULL,
//         NULL,
//         &movie->textArray[object->index],
//         &movie->editTextArray[object->index],
//         &movie->buttonArray[object->index],
//         &movie->spriteArray[object->index]
//     };
//     
//     return objs[object->type];
// }
// 
// void showSpriteObjects(char *SI_name)
// {
//     F_SpriteInstance *spriteInstance = GetSubSI(SI_name, flashInterface->flashClient[1]->movieInstance->spriteInstance);
// 
//     if (!spriteInstance)
//     {
//         return;
//     }
// 
//     _printf("%s %p\n", spriteInstance->name, spriteInstance);
// 
//     F_Movie *movie = spriteInstance->movieInstance->movie;
// 
//     F_Sprite *sprite = spriteInstance->sprite;
// 
//     F_Layer *layerArray = sprite->layerArray;
//     _printf("nlayer %d\n", sprite->nLayers);
//     return;
//     for (uint i = 0; i < sprite->nLayers; i++)
//     {
//         F_FrameCell *cellArray = layerArray[i].cellArray;
// 
//         for (uint j = 0; j < layerArray[i].nCells; j++)
//         {
//             F_FrameCell *curFrame = &cellArray[j];
//             ushort frameNumber = curFrame->frameNumber;
//             ushort objectID = curFrame->objectID;
//             // ushort matrixID = curFrame->matrixID;
//             // ushort cxformID = curFrame->cxformID;
//             // ushort nameID = curFrame->nameID;
//             F_Object *object = &movie->objectArray[objectID];
//             _printf("%d %d %s %d %p %p\n", i,j, objTypes[object->type], object->index, getObjectAddress(object), curFrame);
//         }
//     }
// }
// 
// void showSpriteInstanceObjects(char *SI_name, F_SpriteInstance *SI)
// {
//     F_SpriteInstance *spriteInstance;
// 
//     spriteInstance = GetSubSI(SI_name, SI);
// 
// 
//     if (!spriteInstance)
//     {
//         
//         return;
//     }
//     
//     _printf("%s\n",spriteInstance->name);
// 
//     F_Movie *movie = spriteInstance->movieInstance->movie;
// 
//     F_Sprite *sprite = spriteInstance->sprite;
// 
//     F_LayerInstance *layerInstanceArray = spriteInstance->layerInstanceArray;
// 
//     // lembrar que nLayers nem sempre == nFrames
//     for (uint i = 0; i < sprite->nLayers; i++)
//     {
//         F_FrameCell *frameCell = layerInstanceArray[i].curFrameCell;
// 
//         if (!frameCell)
//         {
//             continue;
//         }
// 
//         ushort objectID = frameCell->objectID;
//         ushort matrixID = frameCell->matrixID;
//         ushort cxformID = frameCell->cxformID;
//         ushort nameID = frameCell->nameID;
//         F_Object *object = &movie->objectArray[objectID];
//         ushort index = object->index;
// 
//         F_ObjectInstance *objInstance = layerInstanceArray[i].instance;
// 
//         if (objInstance)
//         {
//             _printf("Name: %s, Addresss: %p ", isSpriteInstance(objInstance) ? ((F_SpriteInstance *)objInstance)->name : NULL, objInstance);
//         }
// 
//         void *objectAddress = getObjectAddress(&movie->objectArray[objectID]);
// 
//         _printf("Index: %d, Address: %p, %s, FrameCell: %p, Instance: %p %d\n\n\n", index, objectAddress, objTypes[object->type], frameCell, objInstance, matrixID);
//     }
// }
// 
// void ListSpriteInstances(F_SpriteInstance *spriteInstance, char *parentName)
// {
//     if (!spriteInstance)
//     {
//         return;
//     }
//     // if (spriteInstance->layerInstanceArray->curFrameCell)
//     // {
//     // }
//     _printf("SpriteInstance: %p, Nome: %s, ParentName: %s, Actived: %s\n\n",spriteInstance, 
//         spriteInstance->name ? spriteInstance->name : "unnamed", parentName, spriteInstance->layerInstanceArray->curFrameCell ? "Yes" : "No");
// 
//     // showSpriteInstanceObjects(spriteInstance);
// 
//     F_LayerInstance *layerArray = spriteInstance->layerInstanceArray;
// 
//     if (layerArray)
//     {
//         for (int i = 0; i < spriteInstance->sprite->nLayers; i++)
//         {
//             F_ObjectInstance *instance = layerArray[i].instance;
//             if (instance && isSpriteInstance(instance))
//             {
//                 ListSpriteInstances((F_SpriteInstance *)instance, spriteInstance->name);
//             }
//         }
//     }
// }
// 
// uint *tMoveSystem_GetCreature(uint this);
// uint *tMoveSystem_GetTargetCreature(uint *this);
// uint tMoveSystem_GetTargetID(uint *this);
// 
// uint tMoveSystem_ApplyHit
//                  (INT32 iPassivePart,goGameObject *pActiveGO,uint pActiveMS,
//                  UINT16 uActiveJointID,goGameObject *pPassiveGO,goCreature *pPassiveCreature,
//                  tMoveSystem *pPassiveMS,AtrValue *pPassiveAtr,int uPassiveJointID,
//                 uint pOut);
// 
// void SpriteRender(F_Sprite *sprite, F_SpriteInstance *spriteInstance, short depth, VUMat4 *matrix, F_Cxform *cxform);
// 
// void hook_SpriteRender(F_Sprite *sprite, F_SpriteInstance *spriteInstance, short depth, VUMat4 *matrix, F_Cxform *cxform)
// {
//     SpriteRender(sprite, spriteInstance, depth, matrix, cxform);
// 
//     if (ReadPad(0).L1)
//     {
//         _printf("si %p\n", spriteInstance);
//     }
// }
// 
// void EditTextRender(F_EditText *editText, F_EditTextInstance *editTextInstance, unsigned short depth, VUMat4 *matrix, F_Cxform *cxform);
// void hook_EditTextRender(F_EditText *editText, F_EditTextInstance *editTextInstance, unsigned short depth, VUMat4 *matrix, F_Cxform *cxform)
// {
//     EditTextRender(editText, editTextInstance, depth, matrix, cxform);
// 
//     _printf("%s\n", ((F_EditTextInstance__value*)((uint)editTextInstance + 0xC))->s);
// }
// 
// uint tMoveSystem_MoveTwk(uint a0);
// 
// void hook_FlashInterface_PlaySound(FlashInterface *this, int n, char*name)
// {
//     FlashInterface_PlaySound(this, n, name);
// 
//     _printf("%s\n", name);
// }
// 
// int old_state = -1;
// 
// extern uint goScriptServer_gCurrentScript;
// extern Entity *Entity_curEntity;
// 
// char *testemsg[] = {
//     "teste [MainMeter] teste",
// };
// 


// typedef struct MarkerListItem {
//     struct stdListNode *_pNextItem; /* Inherited from stdListNode */
//     struct stdListNode *_pPrevItem; /* Inherited from stdListNode */
//     undefined field2_0x8;
//     undefined field3_0x9;
//     undefined field4_0xa;
//     undefined field5_0xb;
//     undefined field6_0xc;
//     undefined field7_0xd;
//     undefined field8_0xe;
//     undefined field9_0xf;
//     struct VUVec4 pos;
//     struct goGameObject *go;
//     struct SaveListItem *slit;
//     UINT16 jointID;
//     UINT16 markerID;
//     struct Entity *creator;
//     UINT32 flags;
//     UINT32 nEventsQueued;
//     struct goGameObject *volumeGO[12];
//     short int volumeID[12];
//     unsigned int lastFrame[12];
// } MarkerListItem;

// void Ent_EnemyCreator_StateNotify(uint this,MarkerListItem *markerListItem, uint state);
// 
// void hook_statenotify(uint this, MarkerListItem *markerListItem, uint state)
// {
//     markerListItem.
// }

// void GameRegistration(void);
// 
// void init()
// {
//     GameRegistration();
// 
//     initMenu();
// }

extern int _fs_init;
extern int _fs_iob_semid;

int _sceFsWaitS(int);
int sceFsInit();
void _sceFsSigSema();
int new_iob();
void WaitSema(int);
void DeleteSema(int);
long sceFsSifCallRpc(uint,uint,uint,uint,uint,uint,uint,uint);
int CreateSema(int);
void SignalSema(int);
int get_iob();

extern uint DAT_329344;
extern uint DAT_329348;
extern uint DAT_32934C;
extern uint DAT_329350;
extern uint DAT_329354;
extern uint DAT_32974B;
extern uint _send_data;
extern uint _rcv_data_rpc;
extern uint _cd;

undefined4 _sceCallCode(char *param_1,undefined8 param_2)

{
    char cVar1;
    undefined8 uVar2;
    long lVar3;
    int iVar4;
    undefined auStack_c0 [4];
    undefined4 local_bc;
    undefined4 local_b8;
    char *local_ac;
    undefined4 local_a0 [4];
    
    _sceFsWaitS(param_2);
    if (_fs_init == 0)
    {
        sceFsInit();
        DAT_32934C = (char)*param_1;
    }
    else
    {
        DAT_32934C = (char)*param_1;
    }
    iVar4 = 0;
    if ((char)DAT_32934C != '\0')
    {
        for (iVar4 = 1;
            (iVar4 < 0x400 &&
            (cVar1 = param_1[iVar4], *(char *)((int)&DAT_32934C + iVar4) = cVar1, cVar1 != '\0'));
            iVar4 = iVar4 + 1) {
        }
    }
    if (iVar4 == 0x400)
    {
        DAT_32974B = 0;
        iVar4 = 0x3ff;
    }
    local_bc = 1;
    local_ac = "SceStdioCCodeSema";
    local_b8 = 0;
    uVar2 = CreateSema((int)auStack_c0);
    _send_data = (undefined4)uVar2;
    DAT_329348 = 4;
    DAT_329344 = (uint)local_a0;
    lVar3 = sceFsSifCallRpc((uint)&_cd,param_2,0,(uint)&_send_data,iVar4 + 0xd,(uint)&_rcv_data_rpc,4,0);
    iVar4 = *(uint*)0x20329F80;
    if (lVar3 < 0)
    {
        DeleteSema(uVar2);
        _sceFsSigSema();
        local_a0[0] = 0xfffffff5;
    }
    else
    {
        _sceFsSigSema();
        if (iVar4 == 0)
        {
            DeleteSema(uVar2);
            local_a0[0] = 0xfffffff5;
        }
        else
        {
            WaitSema(uVar2);
            DeleteSema(uVar2);
        }
    }
    return local_a0[0];
}

int sceDopen(char *pathname)

{
    int iVar1;
    long lVar2;
    int *piVar3;
    
    _sceFsWaitS(9);
    if (_fs_init == 0)
    {
        sceFsInit();
    }
    _sceFsSigSema();
    lVar2 = new_iob();
    if (lVar2 == 0)
    {
        iVar1 = -0x13;
    }
    else
    {
        iVar1 = _sceCallCode(pathname,9);
        piVar3 = (int *)lVar2;
        if (iVar1 < 0)
        {
            WaitSema(_fs_iob_semid);
            piVar3[1] = 0;
        }
        else
        {
            WaitSema(_fs_iob_semid);
            *piVar3 = iVar1;
            iVar1 = (int)(piVar3 + -0xcaa10) >> 4;
        }
        SignalSema(_fs_iob_semid);
    }
    return iVar1;
}

int sceDread(int fd,void *buf)
{
    int iVar1;
    long lVar2;
    undefined8 uVar3;
    undefined auStack_80 [4];
    undefined4 local_7c;
    undefined4 local_78;
    char *local_6c;
    undefined4 local_60 [4];
    
    lVar2 = get_iob();
    _sceFsWaitS(0xb);
    if (((_fs_init == 0) || (lVar2 == 0)) || (((undefined4 *)lVar2)[1] == 0))
    {
        _sceFsSigSema();
        local_60[0] = 0xfffffff7;
    }
    else
    {
        DAT_32934C = *(undefined4 *)lVar2;
        local_7c = 1;
        local_6c = "SceStdioDreadSema";
        local_78 = 0;
        DAT_329350 = (uint)buf;
        uVar3 = CreateSema((uint)auStack_80);
        DAT_329344 = (uint)local_60;
        _send_data = (undefined4)uVar3;
        DAT_329348 = 4;
        lVar2 = sceFsSifCallRpc((uint)&_cd,0xb,0,(uint)&_send_data,0x20,(uint)&_rcv_data_rpc,4,0);
        iVar1 = *(uint*)0x20329F80;
        if (lVar2 < 0)
        {
            WaitSema(uVar3);
            _sceFsSigSema();
            local_60[0] = 0xfffffff5;
        }
        else
        {
            _sceFsSigSema();
            if (iVar1 == 0)
            {
                DeleteSema(uVar3);
                local_60[0] = 0xfffffff5;
            }
            else
            {
                WaitSema(uVar3);
                DeleteSema(uVar3);
            }
        }
    }
    return local_60[0];
}

int sceDclose(int fd)

{
    int iVar1;
    long lVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    undefined auStack_90 [4];
    undefined4 local_8c;
    undefined4 local_88;
    char *local_7c;
    int local_70 [4];
    
    lVar2 = get_iob();
    _sceFsWaitS(10);
    if (((_fs_init == 0) || (lVar2 == 0)) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0))
    {
        _sceFsSigSema();
        local_70[0] = -9;
    }
    else
    {
        DAT_32934C = *puVar4;
        local_8c = 1;
        local_7c = "SceStdioDcloseSema";
        local_88 = 0;
        uVar3 = CreateSema((uint)auStack_90);
        DAT_329344 = (uint)local_70;
        _send_data = (undefined4)uVar3;
        DAT_329348 = 4;
        lVar2 = sceFsSifCallRpc((uint)&_cd,10,0,(uint)&_send_data,0x14,(uint)&_rcv_data_rpc,4,0);
        if (lVar2 < 0)
        {
            DeleteSema(uVar3);
            _sceFsSigSema();
            local_70[0] = -0xb;
        }
        else
        {
            puVar4[1] = 0;
            iVar1 = *(uint*)0x20329F80;
            _sceFsSigSema();
            if (iVar1 == 0)
            {
                DeleteSema(uVar3);
                local_70[0] = -0xb;
            }
            else
            {
                WaitSema(uVar3);
                DeleteSema(uVar3);
                if (-1 < local_70[0])
                {
                    local_70[0] = 0;
                }
            }
        }
    }
    return local_70[0];
}

// int EndsWith(const char *str, const char *suffix)
// {
//     if (!str || !suffix)
//         return 0;
//     size_t lenstr = strlen(str);
//     size_t lensuffix = strlen(suffix);
//     if (lensuffix >  lenstr)
//         return 0;
//     return strncmp(str + lenstr - lensuffix, suffix, lensuffix) == 0;
// }

void listdir()
{
    sce_dirent dirbuf;

    char *rootDir = "mc1:\\";

    int dirfd = sceDopen(rootDir);

    // sceDread(dirfd, &dirbuf);
    // sceDread(dirfd, &dirbuf);

    while (sceDread(dirfd, &dirbuf) > 0)
    {
        // if (EndsWith(dirbuf.d_name, ".ELF;1"))
        // {
        //     break;
        // }
        _printf("%s\n", dirbuf.d_name);
    }
    
    sceDclose(dirfd);
}

void loop()
{
    gamepad = ReadPad(0);

    if ((g_Timer - time)/10 > 0.1f)
    {
        if (gamepad.L1)
        {            
            listdir();
        }
        
        time = g_Timer;
    }
    GameState_Update();
}

void injectPatches()
{
    RedirectCall(0x21FD6C, loop);
    MakeNop(0x29CC98); // delicker
    // MakeNop(0x1D6270); // disable pickups

//     injectHookgoSoldier();
//     injectHookGameState();
//     injectHookGoCreature();
//     injectMenuPatches();
//     injectMessagePatches();
// 
//     RedirectCall(0x17A994, init);
}

void FlushCache(uint);

void invoker()
{
    FlushCache(0);
    injectPatches();
}
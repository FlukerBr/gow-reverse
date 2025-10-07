#include "gamestate.h"
#include "goplayer.h"
#include "flashinterface.h"
#include "global.h"
#include "stdrbtree.h"
#include "gosoldier.h"
#include "renview.h"
#include "stdmultipool.h"
#include "bitwise.h"
#include "syspad.h"
#include "sifdev.h"
#include "gohandledb.h"

int kprintf(const char *, ...);
int sprintf(char *str, const char *format, ...);
uint strlen(const char *str);
char *strcpy(char *dest, const char *src);
int strcmp(const char *str1, const char *str2);
void* memset(void *ptr, int value, UINT32 size);
void* memcpy(void *dest, const void *src, uint size);

extern void *FlashPoolNew(uint);
extern void FlashPoolFree(void *);

typedef struct SCB
{
    char *mp;
    char *mp0;
    BOOL in;
} SCB;

void StreamShape(SCB *,F_Shape *);
void StreamFont(SCB *,F_Font *);
void StreamText(SCB *,F_Text *);
void StreamLayer(SCB *,F_Layer *);
void StreamActionScript(SCB *,F_ActionScript *);
void StreamFrameActionLabel(SCB *,F_FrameActionLabel *);
void StreamSprite(SCB *,F_Sprite *);
void StreamButtonAction(SCB *,F_ButtonAction *);
void StreamButton(SCB *,F_Button *);

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

extern HeapZone *ZoneList;

extern int Mem_FreeBytes(HeapZone *, int);
extern int Mem_GetLargestFreeBlockSize(HeapZone *, int);
extern int Mem_HeapNumUsedBlocks(int);
extern HeapZone *Mem_GetCurrentHeapZone();
extern void *Mem_NewPtr(HeapZone *, unsigned int, unsigned int);

void PrintHeapStats()
{
    int iVar1;
    int iVar2;
    int iVar3;
    char* pCVar4;
    int iVar5;
    HeapZone *zone;
    long lVar6;
    UINT32 freeBlocks;
    
    kprintf("            Name        Total      Used      Free    Largest  Blocks  FreeBlks\n");
    kprintf("  ============================================================================\n");
    lVar6 = (long)(int)ZoneList;
    if (lVar6 != 0) {
        pCVar4 = ZoneList->pEnd;
        while( true ) {
            zone = (HeapZone *)lVar6;
            iVar5 = (int)pCVar4 - (int)zone->pStart;
            iVar3 = Mem_FreeBytes(zone,(long)(int)&freeBlocks);
            iVar1 = Mem_GetLargestFreeBlockSize(zone,4);
            iVar2 = Mem_HeapNumUsedBlocks(lVar6);
            kprintf("%20s  %8d  %8d  %8d  %8d  %6d  %5d\n",zone->cName,iVar5,iVar5 - iVar3,iVar3,iVar1,iVar2,freeBlocks);
            lVar6 = (long)(int)zone->pNextZone;
            if (lVar6 == 0) break;
            pCVar4 = zone->pNextZone->pEnd;
        }
    }
}

void StreamMovie(SCB *scb,F_Movie **p)
{
    ushort uVar1;
    UINT32 UVar2;
    F_Object *pFVar3;
    F_Shape *pFVar4;
    F_EditText *pFVar5;
    F_Button *pFVar6;
    F_Cxform *pFVar7;
    F_Object *pFVar8;
    F_Shape *pFVar9;
    F_Font *pFVar10;
    F_Text *pFVar11;
    F_EditText *pFVar12;
    F_Button *pFVar13;
    F_Sprite *pFVar14;
    F_Matrix *pFVar15;
    F_Matrix *pFVar16;
    F_Cxform *pFVar17;
    char *pcVar18;
    F_Movie *pFVar19;
    F_Font *pFVar20;
    F_Text *pFVar21;
    F_Sprite *pFVar22;
    char *pcVar23;
    uint uVar24;
    uint uVar25;
    int iVar26;
    int iVar27;
    
    pcVar23 = scb->mp0;
    pFVar19 = (F_Movie *)(scb->mp + (4 - ((int)scb->mp - (int)pcVar23 & 3U) & 3));
    *p = pFVar19;
    pFVar8 = (F_Object *)((int)&pFVar19[1]._uID + (4 - ((uint)((int)pFVar19 + (0x5c - (int)pcVar23)) & 3) & 3));
    pFVar3 = NULL;
    if (pFVar19->nObjects != 0) {
        pFVar3 = pFVar8;
    }
    if (pFVar19->nObjects == 888)
    {
        F_Object* object = Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(F_Object) * 898, 16);
        kprintf("%p\n", object);
        if (object)
        {
            memcpy(object, pFVar3, sizeof(F_Object) * 888);
            pFVar19->objectArray = object;
        }
    } else
    {
        pFVar19->objectArray = pFVar3;
    }
    
    UVar2 = pFVar19->nShapes;
    pFVar9 = (F_Shape *)((int)&pFVar8[pFVar19->nObjects].type + (4 - ((int)pFVar8 - (int)pcVar23 & 3U) & 3));
    pFVar4 = pFVar9 + UVar2;
    if (UVar2 == 0) {
        pFVar9 = NULL;
    }
    scb->mp = (char *)pFVar4;
    pFVar19->shapeArray = pFVar9;
    uVar24 = 0;
    if (UVar2 != 0) {
        pFVar4 = pFVar19->shapeArray;
        while( true ) {
            pFVar4 = pFVar4 + uVar24;
            uVar24 = uVar24 + 1;
            StreamShape(scb,pFVar4);
            if ((*p)->nShapes <= uVar24) break;
            pFVar4 = (*p)->shapeArray;
        }
    }
    pFVar19 = *p;
    UVar2 = pFVar19->nFonts;
    pFVar10 = (F_Font *)(scb->mp + (-((int)scb->mp - (int)scb->mp0 & 3U) & 3));
    pFVar20 = pFVar10 + UVar2;
    if (UVar2 == 0) {
        pFVar10 = NULL;
    }
    scb->mp = (char *)pFVar20;
    pFVar19->fontArray = pFVar10;
    uVar24 = 0;
    if (UVar2 != 0) {
        do {
            uVar25 = uVar24 + 1;
            StreamFont(scb,pFVar19->fontArray + uVar24);
            pFVar19 = *p;
            uVar24 = uVar25;
        } while (uVar25 < pFVar19->nFonts);
    }
    pFVar19 = *p;
    UVar2 = pFVar19->nTexts;
    pFVar11 = (F_Text *)(scb->mp + (-((int)scb->mp - (int)scb->mp0 & 3U) & 3));
    pFVar21 = pFVar11 + UVar2;
    if (UVar2 == 0) {
        pFVar11 = NULL;
    }
    scb->mp = (char *)pFVar21;
    pFVar19->textArray = pFVar11;
    uVar24 = 0;
    if (UVar2 != 0) {
        do {
            uVar25 = uVar24 + 1;
            StreamText(scb,pFVar19->textArray + uVar24);
            pFVar19 = *p;
            uVar24 = uVar25;
        } while (uVar25 < pFVar19->nTexts);
    }
    pcVar23 = scb->mp0;
    pFVar19 = *p;
    pFVar12 = (F_EditText *)(scb->mp + (4 - ((int)scb->mp - (int)pcVar23 & 3U) & 3));
    pFVar5 = NULL;
    if (pFVar19->nEditTexts != 0) {
        pFVar5 = pFVar12;
    }
    if (pFVar19->nEditTexts == 296)
    {
        F_EditText *editText = Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(F_EditText) * 306, 16);
        kprintf("%p\n", editText);
        if (editText)
        {
            memcpy(editText, pFVar5, sizeof(F_EditText) * 296);
            pFVar19->editTextArray = editText;
        }
    } else
    {
        kprintf("%d\n", pFVar19->nEditTexts);
        pFVar19->editTextArray = pFVar5;
    }

    UVar2 = pFVar19->nButtons;
    pFVar13 = (F_Button *)((int)&pFVar12[pFVar19->nEditTexts].variableID + (4 - ((int)pFVar12 - (int)pcVar23 & 3U) & 3));
    pFVar6 = pFVar13 + UVar2;
    if (UVar2 == 0) {
        pFVar13 = NULL;
    }
    scb->mp = (char *)pFVar6;
    pFVar19->buttonArray = pFVar13;
    uVar24 = 0;
    if (UVar2 != 0) {
        do {
            uVar25 = uVar24 + 1;
            StreamButton(scb,pFVar19->buttonArray + uVar24);
            pFVar19 = *p;
            uVar24 = uVar25;
        } while (uVar25 < pFVar19->nButtons);
    }
    pFVar19 = *p;
    UVar2 = pFVar19->nSprites;
    pFVar14 = (F_Sprite *)(scb->mp + (-((int)scb->mp - (int)scb->mp0 & 3U) & 3));
    pFVar22 = pFVar14 + UVar2;
    if (UVar2 == 0) {
        pFVar14 = NULL;
    }
    scb->mp = (char *)pFVar22;
    pFVar19->spriteArray = pFVar14;
    uVar24 = 0;
    if (UVar2 != 0) {
        do {
            uVar25 = uVar24 + 1;
            StreamSprite(scb,pFVar19->spriteArray + uVar24);
            pFVar19 = *p;
            uVar24 = uVar25;
        } while (uVar25 < pFVar19->nSprites);
    }
    pFVar14 = (F_Sprite *)(scb->mp + (-((int)scb->mp - (int)scb->mp0 & 3U) & 3));
    (*p)->rootSprite = pFVar14;
    scb->mp = (char *)(pFVar14 + 1);
    iVar26 = 0;
    do {
        iVar27 = iVar26 + 1;
        StreamSprite(scb,(*p)->rootSprite + iVar26);
        iVar26 = iVar27;
    } while (iVar27 == 0);
    pcVar23 = scb->mp0;
    pFVar19 = *p;
    pFVar15 = (F_Matrix *)(scb->mp + (4 - ((int)scb->mp - (int)pcVar23 & 3U) & 3));
    pFVar16 = pFVar15;
    if (pFVar19->nMatrices == 0) {
        pFVar16 = NULL;
    }
    pFVar19->matrixArray = pFVar16;
    pFVar17 = (F_Cxform *)((int)&pFVar15[(ushort)pFVar19->nMatrices].a + (4 - ((int)pFVar15 - (int)pcVar23 & 3U) & 3));
    pFVar7 = NULL;
    if (pFVar19->nCxforms != 0) {
        pFVar7 = pFVar17;
    }
    pFVar19->cxformArray = pFVar7;
    uVar1 = pFVar19->nameArraySize;
    pcVar18 = (char *)((int)&pFVar17[(ushort)pFVar19->nCxforms].mulr + (4 - ((int)pFVar17 - (int)pcVar23 & 3U) & 3));
    pcVar23 = NULL;
    if (uVar1 != 0) {
        pcVar23 = pcVar18;
    }
    scb->mp = pcVar18;
    pFVar19->nameArray = pcVar23;
    scb->mp = scb->mp + uVar1;
    return;
}



extern void EditTextRender(F_EditText *editText, F_EditTextInstance *editTextInstance, unsigned short depth, VUMat4 *matrix, F_Cxform *cxform);
extern void ButtonRender(F_Button *button,F_ButtonInstance *buttonInstance,F_MovieInstance *movieInstance,UINT16 depth,VUMat4 *matrix,F_Cxform *cxform);
extern void TextRender(F_Text *text,F_TextInstance *textInstance,UINT16 depth,VUMat4 *matrix,F_Cxform *cxform);
extern void ShapeRender(F_Shape *shape,F_MovieInstance *movieInstance,UINT16 depth,VUMat4 *matrix,F_Cxform *cxform);
extern void SpriteRenderFrame(F_Sprite *sprite, F_ObjectInstance *objectInstance,F_LayerInstance *layerInstanceArray, F_MovieInstance *movieInstance, short depth,VUMat4 *matrix, F_Cxform *cxform, ushort frameNumber);
extern void SpriteRender(F_Sprite *sprite, F_SpriteInstance *spriteInstance, short depth, VUMat4 *matrix, F_Cxform *cxform);
extern void F_Dictionary_F_Dictionary(F_Dictionary *);

VUMat4 * __ml(VUMat4 *__return_storage_ptr__,F_Matrix *fm,VUMat4 *vm);

extern F_TextInstance__vtable *F_TextInstance_vtbl;
extern F_EditTextInstance__vtable *F_EditTextInstance_vtbl;
extern F_ButtonInstance__vtable *F_ButtonInstance_vtbl;
extern F_SpriteInstance__vtable *F_SpriteInstance_vtbl;

goCreature *tMoveSystem_GetTargetCreature(UINT32 *);

#define jal(fun) 0x0C000000 + (fun / 4)
#define j(fun) 0x08000000 + (fun/4)

void RedirectCall(unsigned int call_addr, void *addr)
{
    *(unsigned int *)call_addr = jal((UINT32)addr);
}

void RedirectJump(unsigned int jump_addr, uint addr) {
    *(unsigned int*)jump_addr = j((UINT32)addr);
}

void WriteDword(UINT32 address, UINT32 value)
{
    *(UINT32 *)address = value;
}

void MakeNop(UINT32 address)
{
    WriteDword(address, 0);
}

void print_pointer(void *ptr)
{
    kprintf("%p\n", ptr);
}

int old_state = -1;
UINT32 rep = 0;

extern stdMultiPool goSoldier_sm_goSoldierMultiPool;

// void listAllgoSoldier(stdRBTreeNode* parent)
// {
//     if (parent == stdRBTreeNode_NIL)
//     {
//         kprintf("NILL\n");
//         return;
//     }
//     
//     kprintf("%p\n", (uint *)parent->ContentPtr);
// 
//     stdRBTreeNode *nodeLeft = (stdRBTreeNode *)(stdRBTreeNode_sm_iStart16 + (0x10 * parent->LeftNode));
//     stdRBTreeNode *nodeRight = (stdRBTreeNode *)(stdRBTreeNode_sm_iStart16 + (0x10 * parent->RightNode));
// 
//     listAllgoSoldier(nodeLeft);
//     listAllgoSoldier(nodeRight);
// }

typedef struct
{
    UINT32 L2 : 1;
    UINT32 R2 : 1;
    UINT32 L1 : 1;
    UINT32 R1 : 1;
    UINT32 triangle : 1;
    UINT32 circle : 1;
    UINT32 X : 1;
    UINT32 square : 1;
    UINT32 select : 1;
    UINT32 L3 : 1;
    UINT32 R3 : 1;
    UINT32 start : 1;
    UINT32 UP : 1;
    UINT32 RIGHT : 1;
    UINT32 DOWN : 1;
    UINT32 LEFT : 1;
} Gpad;

extern Gpad ReadPad(UINT32);

// extern HeapZone *Mem_GetCurrentHeapZone();
// extern UINT32 *Mem_NewPtr(HeapZone *, unsigned bytesize, unsigned bytealignment);
// extern void Entity_DoMsg(int, float, int);
int test = 0;

extern UINT32 g_Timer;
UINT32 time;

char *msgtest[] = {"1 Option", "2 Option", "3 Option", "4 Option", "5 Option"};

short selectedOption = 0;
short lastSelectedOption = -1;

F_EditText stdText;
BOOL enableTestMenu = false;

void updateMenuStyle()
{
    renFlashClient *flashclient = flashInterface->flashClient[1];
    if (!flashInterface)
    {
        return;
    }

    F_EditText *texts = &flashclient->movieInstance->movie->editTextArray[1];

    stdText = *texts;

    for (uint i = 0; i < 5; i++)
    {
        texts[i].color = 0xFFFFFFFF;
    }

    texts[selectedOption].color = 0xFF8FC6E8;
}

void showmsg()
{
    Pending p;
    p.msgID = 46;
    p.menuID = -1;
    p.pickupID = -1;
    p.seconds = 0;
    p.msgMeterBarGrow = 0;
    p.healthMeterValue = 0;
    p.magicMeterValue = 0;
    GameState_AddPending(&p);

    flashInterface->MessageTemplate_Line1 = msgtest[0];
    flashInterface->MessageTemplate_Line2 = msgtest[1];
    flashInterface->MessageTemplate_Line3 = msgtest[2];
    flashInterface->MessageTemplate_Line4 = msgtest[3];
    flashInterface->MessageTemplate_Line5 = msgtest[4];

    FlashInterface_TellFlashTypeOn(flashInterface, 1, 5);
    flashInterface->MessageTemplate_Event = 5;
    FlashInterface_SimKeyEvent(flashInterface);
}

UINT32 msgid = 0;

void showMenu()
{
    Pending p;
    
    p.menuID = 46;
    p.pickupID = -1;
    p.msgID = -1;
    p.seconds = 0.0f;
    p.msgMeterBarGrow = 0;
    p.healthMeterValue = 0;
    p.magicMeterValue = 0;
    GameState_AddPending(&p);

    flashInterface->MenuTemplate_Line1 = "line1";
    // flashInterface->MenuTemplate_Line2 = "line2";
    // flashInterface->MenuTemplate_Line3 = "line3";
    flashInterface->MenuTemplate_Menu1 = "Swim Mode";
    flashInterface->MenuTemplate_Menu2 = "Empty";
    flashInterface->MenuTemplate_Menu3 = "Empty";
    flashInterface->MenuTemplate_Menu4 = "Empty";
    flashInterface->MenuTemplate_Menu5 = "Empty";
    flashInterface->Menu_Choice = 1;

    flashInterface->MenuTemplate_Event = 15;
    FlashInterface_SimKeyEvent(flashInterface);
}

typedef struct Pos
{
    float x;
    float y;
    float z;
    float a;
} Pos;

// void hook_F_Stack_PushString(F_Stack *this, char* s, int nBytes)
// {
//     F_Stack_PushString(this, s, nBytes);
//     kprintf("%s %p\n", s, s);
//     return;
//     unsigned int alignedValue;
//     int stackIndex = this->stackTop;
//     unsigned char *stackPointer;
//     int dataOffset = this->stackData;
//
//     // Inicializa o próximo elemento na pilha
//     this->stack[stackIndex].type = 0;
//     this->stack[stackIndex].data = *(UINT16 *)&this->stackData;
//     this->stackTop = stackIndex + 1;
//
//     // Se a string for nula, usa uma string de substituição
//     if (s == NULL) {
//         s = "(NULL)";
//     }
//
//     // Alinhamento de 4 bytes para cópia rápida
//     if (((unsigned int)s & 3) == 0) {
//         int numChunks = (nBytes - 1) / 4;
//         stackPointer = this->stackPool + dataOffset;
//
//         // Copia em blocos de 4 bytes se possível
//         while (numChunks-- >= 0) {
//             alignedValue = *(unsigned int *)s;
//             *(unsigned int *)stackPointer = alignedValue;
//             s += 4;
//             stackPointer += 4;
//         }
//     } else {
//         // Copia byte a byte se não estiver alinhado
//         for (int i = 0; i < nBytes; i++) {
//             this->stackPool[dataOffset + i] = (unsigned char)s[i];
//         }
//     }
//
//     // Atualiza o ponteiro para a posição atual da pilha com alinhamento de 4 bytes
//     this->stackData += (nBytes + 3) & ~3;
//
// }

struct
{
    void *ptr;
    UINT32 id;
} adrmsg[5];

extern F_SpriteInstance *GetSpriteInstance(F_ObjectInstance*);

extern void EditTextBuild(F_EditText *editText, F_EditTextInstance *editTextInstance, unsigned short depth, VUMat4 *matrix, char *str);

void hook_EditTextRender(F_EditText *editText, F_EditTextInstance *editTextInstance, unsigned short depth, VUMat4 *matrix, F_Cxform *cxform)
{
    // F_SpriteInstance *spriteInstance = GetSpriteInstance((F_ObjectInstance*)editTextInstance);

    // F_Movie *movie = editTextInstance->movieInstance->movie;
    // char *name = &movie->nameArray[editText->variableID];

    // if (!strcmp("PS2_MessageTemplate_Line1", name))
    // {
    //         // kprintf("%10d %10d %10d %10d\n%10d %10d %10d %10d\n%10d %10d %10d %10d\n%10d %10d %10d %10d\n\n", matrix->r0.v[0],matrix->r0.v[1],matrix->r0.v[2],matrix->r0.v[3], matrix->r1.v[0],matrix->r1.v[1],matrix->r1.v[2],matrix->r1.v[3], matrix->r2.v[0],matrix->r2.v[1],matrix->r2.v[2],matrix->r2.v[3], matrix->r3.v[0],matrix->r3.v[1],matrix->r3.v[2],matrix->r3.v[3]);
    //     EditTextRender(editText, &TesteditTextInstance, depth, &vumat, cxform);
    //     
    // }
    
    EditTextRender(editText, editTextInstance, depth, matrix, cxform);

    kprintf("%s %p\n", editTextInstance->value.s, editTextInstance);

}

Gpad gamepad;

short a;
short b;

extern UINT32 rand();
void setzin()
{
    F_Movie *movie = flashInterface->flashClient[1]->movieInstance->movie;
    int n = movie->nEditTexts;
    for (UINT32 i = 0; i < n; i++)
    {
        movie->editTextArray[i].color = (rand() % ~0) | 0xFF000000;
    }
}

BOOL isSpriteInstance(F_ObjectInstance *objectInstance)
{
    return ((BOOL(*)())objectInstance->__vtable->IsSpriteInstance.__pfn)();
}

void hook_SpriteRenderFrame(F_Sprite *sprite, F_ObjectInstance *objectInstance, F_LayerInstance *layerInstanceArray, F_MovieInstance *movieInstance, short depth, VUMat4 *matrix, F_Cxform *cxform, ushort frameNumber)
{
    SpriteRenderFrame(sprite, objectInstance, layerInstanceArray, movieInstance, depth, matrix, cxform, frameNumber);
    kprintf("isSpriteInstance %d\n", isSpriteInstance(objectInstance));
    // kprintf("sprite %p,\n objectInstance %p,\n layerInstanceArray %p,\n movieInstance %p,\n depth %d,\n matrix %p,\n cxform %p,\n frameNumber %d\n %d", sprite, objectInstance, layerInstanceArray, movieInstance, depth, matrix, cxform, frameNumber, isSpriteInstance(objectInstance));
}


void ListSpriteInstances(F_SpriteInstance *spriteInstance, char *parentName)
{
    if (!spriteInstance)
    {
        return;
    }
    // if (spriteInstance->layerInstanceArray->curFrameCell)
    // {
    // }
    kprintf("SpriteInstance: %p, Nome: %s, ParentName: %s, Ativo: %s\n",
            spriteInstance,
            spriteInstance->name ? spriteInstance->name : "Sem nome", parentName, spriteInstance->layerInstanceArray->curFrameCell ? "Sim" : "Nao");
    
    F_LayerInstance *layerArray = spriteInstance->layerInstanceArray;
    if (layerArray)
    {
        for (int i = 0; i < spriteInstance->sprite->nLayers; i++)
        {
            F_ObjectInstance *instance = layerArray[i].instance;
            if (instance && isSpriteInstance(instance))
            {
                ListSpriteInstances((F_SpriteInstance *)instance, spriteInstance->name);
            }
        }
    }
}

F_SpriteInstance *findSpriteInstanceByName(F_SpriteInstance *spriteInstance, char *name)
{
    if (!spriteInstance || !name)
    {
        return NULL;
    }

    if (spriteInstance->name && !strcmp(spriteInstance->name, name))
    {
        return spriteInstance;
    }

    F_LayerInstance *layerArray = spriteInstance->layerInstanceArray;
    if (layerArray)
    {
        for (int i = 0; i < spriteInstance->sprite->nLayers; i++)
        {
            F_ObjectInstance *instance = layerArray[i].instance;
            if (instance && isSpriteInstance(instance))
            {
                F_SpriteInstance *found = findSpriteInstanceByName((F_SpriteInstance *)instance, name);
                if (found)
                {
                    return found;
                }
            }
        }
    }
    return NULL;
}

void changeShape()
{

    F_Shape *shape = &flashInterface->flashClient[1]->movieInstance->movie->shapeArray[6];
    F_Material *material = shape->matArray;
    for (uint i = 0; i < shape->nMaterials; i++)
    {
        shape->matArray[i].color = 0xFFFF0000;
    }
}

char *objTypes[] = {
    "Unknown",
    "Shape",
    "Unknown",
    "Unknown",
    "Text",
    "EditText",
    "Button",
    "Sprite"
};

void *getObjectAddress(F_Object *object)
{
    F_Movie *movie = flashInterface->flashClient[1]->movieInstance->movie;

    void *objs[] = {
        NULL,
        &movie->shapeArray[object->index],
        NULL,
        NULL,
        &movie->textArray[object->index],
        &movie->editTextArray[object->index],
        &movie->buttonArray[object->index],
        &movie->spriteArray[object->index]
    };
    
    return objs[object->type];
}

F_SpriteInstance *GetSubSI(char const *, F_SpriteInstance *);

void showSpriteObjects()
{
    F_SpriteInstance *spriteInstance = GetSubSI("MessageTemplates", flashInterface->flashClient[1]->movieInstance->spriteInstance); //findSpriteInstanceByName(flashInterface->flashClient[1]->movieInstance->spriteInstance, "MessageTemplates");

    if (!spriteInstance)
    {
        return;
    }

    kprintf("%s %p\n", spriteInstance->name, spriteInstance);

    F_Movie *movie = spriteInstance->movieInstance->movie;

    F_Sprite *sprite = spriteInstance->sprite;

    F_Layer *layerArray = sprite->layerArray;

    for (uint i = 0; i < sprite->nFrames; i++)
    {
        F_FrameCell *cellArray = layerArray[i].cellArray;

        for (uint j = 0; j < layerArray[i].nCells; j++)
        {
            F_FrameCell *curFrame = &cellArray[j];
            ushort frameNumber = curFrame->frameNumber;
            ushort objectID = curFrame->objectID;
            // ushort matrixID = curFrame->matrixID;
            // ushort cxformID = curFrame->cxformID;
            // ushort nameID = curFrame->nameID;
            F_Object *object = &movie->objectArray[objectID];
            kprintf("%d %d %s %d %p %p\n", i,j, objTypes[object->type], object->index, getObjectAddress(object), curFrame);
        }
    }
}

void showSpriteInstanceObjects()
{
    F_SpriteInstance *spriteInstance = GetSubSI("TestString", flashInterface->flashClient[1]->movieInstance->spriteInstance); //findSpriteInstanceByName(flashInterface->flashClient[1]->movieInstance->spriteInstance, "MessageTemplates");

    if (!spriteInstance)
    {
        return;
    }

    kprintf("%s %p\n", spriteInstance->name, spriteInstance);

    F_Movie *movie = spriteInstance->movieInstance->movie;

    F_Sprite *sprite = spriteInstance->sprite;

    F_LayerInstance *layerInstanceArray = spriteInstance->layerInstanceArray;

    for (uint i = 0; i < sprite->nLayers; i++)
    {
        F_FrameCell *frameCell = layerInstanceArray[i].curFrameCell;

        if (!frameCell)
        {
            continue;
        }

        ushort objectID = frameCell->objectID;
        ushort matrixID = frameCell->matrixID;
        ushort cxformID = frameCell->cxformID;
        ushort nameID = frameCell->nameID;
        F_Object *object = &movie->objectArray[objectID];
        ushort index = object->index;

        F_ObjectInstance *objInstance = layerInstanceArray[i].instance;

        if (objInstance)
        {
            kprintf("Name: %s, Addresss: %p\n", isSpriteInstance(objInstance) ? ((F_SpriteInstance *)objInstance)->name : NULL, objInstance);
        }

        void *objectAddress = getObjectAddress(&movie->objectArray[objectID]);

        kprintf("Index: %d, Address: %p, %s, FrameCell: %p, Instance: %p %d\n", index, objectAddress, objTypes[object->type], frameCell, objInstance, matrixID);
    }
}

void changeMainMeter()
{
    F_SpriteInstance *rootSpriteInstance = flashInterface->flashClient[1]->movieInstance->spriteInstance;

    if (!rootSpriteInstance)
    {
        return;
    }

    F_SpriteInstance *spriteInstance = findSpriteInstanceByName(rootSpriteInstance, "MainMeter");

    if (!spriteInstance)
    {
        return;
    }

    spriteInstance->yPos = 370.0f;

    F_Movie *movie = spriteInstance->movieInstance->movie;

    movie->shapeArray[12].matArray->color = 0;
    movie->shapeArray[12].matArray->texture = 0;

    F_LayerInstance *layerInstanceArray = spriteInstance->layerInstanceArray;

    for (uint i = 0; i < spriteInstance->sprite->nLayers; i++)
    {
        F_SpriteInstance *SI = (layerInstanceArray[i].instance && isSpriteInstance(layerInstanceArray[i].instance)) ? (F_SpriteInstance *)layerInstanceArray[i].instance : NULL;

        if (!SI || !SI->name)
        {
            continue;
        }

        if (!strcmp("MeterSparkle", SI->name))
        {
            SI->visible = 0;
        }
        else if (!strcmp("MeterEyeSparkle", SI->name))
        {
            SI->visible = 0;
        }
        else if (!strcmp("HealthMeter", SI->name))
        {
            SI->xPos = -25;
            SI->yPos = 25;
        }
        else if (!strcmp("MagicMeter", SI->name))
        {
            SI->xPos = -20;
            SI->yPos = 25;
        }
        else if (!strcmp("HealthMeterBlackBar", SI->name))
        {
            SI->xPos = -18;
            SI->yPos = 50;
        }
        else if (!strcmp("MagicMeterBlackBar", SI->name))
        {
            SI->xPos = -18;
            SI->yPos = 50;
        }
        else if (!strcmp("SubWeaponMeter", SI->name))
        {
            SI->xPos = -160;
            SI->yPos = 35;
            SI->rotation = 90;
            SI->xScale = 50;
            SI->yScale = 50;
        }
        else if (!strcmp("SubWeaponMeterBlackBar", SI->name))
        {
            SI->visible = 0;
        }
        else if (!strcmp("PickUps", SI->name))
        {
            // F_FrameCell *FC = layerInstanceArray[i].curFrameCell;
            SI->xScale = 70;
            SI->yScale = 70;
            SI->xPos = 30;

            // FC->cxformID = 1403;
        }
    }

    //     if (!spriteInstance)
    //     {
    //         return;
    //     }
    //
    //     F_Movie *movie = spriteInstance->movieInstance->movie;

    //     F_SpriteInstance *MeterSparkle = findSpriteInstanceByName(spriteInstance, "MeterSparkle");
    //     F_SpriteInstance *MeterEyeSparkle = findSpriteInstanceByName(spriteInstance, "MeterEyeSparkle");
    //     F_SpriteInstance *HealthMeter = findSpriteInstanceByName(spriteInstance, "HealthMeter");
    //     F_SpriteInstance *MagicMeter = findSpriteInstanceByName(spriteInstance, "MagicMeter");
    //     F_SpriteInstance *HealthMeterBlackBar = findSpriteInstanceByName(spriteInstance, "HealthMeterBlackBar");
    //     F_SpriteInstance *MagicMeterBlackBar = findSpriteInstanceByName(spriteInstance, "MagicMeterBlackBar");
    //     F_SpriteInstance *SubWeaponMeter = findSpriteInstanceByName(spriteInstance, "SubWeaponMeter");
    //     F_SpriteInstance *SubWeaponMeterBlackBar = findSpriteInstanceByName(spriteInstance, "SubWeaponMeterBlackBar");
    //     F_SpriteInstance *PickUps = findSpriteInstanceByName(spriteInstance, "PickUps");
    //
    //     F_FrameCell *PickUps_frameCell = getFrameCellBySpriteInstanceName(spriteInstance, "PickUps");
    //
    //     PickUps_frameCell->cxformID = 1403;
    //
    //     PickUps->xScale = 70;
    //     PickUps->yScale = 70;
    //     PickUps->xPos = 30;
    //
    //     SubWeaponMeter->xPos = -95;
    //     SubWeaponMeter->yPos = 35;
    //     SubWeaponMeter->rotation = 90;
    //     SubWeaponMeter->xScale = 50;
    //     SubWeaponMeter->yScale = 50;
    //
    //     HealthMeterBlackBar->xPos = -18;
    //     HealthMeterBlackBar->yPos = 50;
    //     MagicMeterBlackBar->xPos = -18;
    //     MagicMeterBlackBar->yPos = 50;
    //
    //     HealthMeter->xPos = -25;
    //     HealthMeter->yPos = 25;
    //     MagicMeter->xPos = -20;
    //     MagicMeter->yPos = 25;
    //
    //     SubWeaponMeterBlackBar->visible = 0;
    //     MeterSparkle->visible = 0;
    //     MeterEyeSparkle->visible = 0;

    //     F_Sprite *sprite = spriteInstance->sprite;
    //
    //     F_LayerInstance *layerInstanceArray = spriteInstance->layerInstanceArray;
    //
    //
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
    //         F_Object *object = &movie->objectArray[objectID];
    //         ushort index = object->index;
    //
    //         F_ObjectInstance *objInstance = layerInstanceArray[i].instance;
    //
    //         if (objInstance && isSpriteInstance(objInstance))
    //         {
    //         }
    //
    //         // kprintf("Name: %s, Addresss: %p\n", isSpriteInstance(objInstance) ? ((F_SpriteInstance *)objInstance)->name : NULL, objInstance);
    //         // kprintf("Index: %d, Address: %p %s %p %p\n", index, getObjectAddress(&movie->objectArray[objectID]), objTypes[object->type], &movie->matrixArray[matrixID], &movie->cxformArray[cxformID]);
    //     }
}

// void hook_SpriteRender(F_Sprite *sprite, F_SpriteInstance *spriteInstance, short depth, VUMat4 *matrix, F_Cxform *cxform)
// {
//     if (!strcmp(spriteInstance->name, "MeterSparkle") && spriteInstance->visible)
//     {
//         changeMainMeter();
//     }
//     
//     SpriteRender(sprite, spriteInstance, depth, matrix, cxform);
//     // kprintf("%p %s\n", spriteInstance, spriteInstance->name);
// }

void goSoldier_CreateFrozenIncarnation(goSoldier*);
void tEffectSystem_FrozenEffect(tEffectSystem *this,goCreature *pCreature);

void hook_goCreature_SetHitPoints(goCreature *this, float fHP)
{

    

    if (this != goPlayer_sm_pPlayer->m_pCreature)
    {
        goCreature_SetHitPoints(this, fHP);
    }

    kprintf("Creature: %p\n", this);
}

extern void goSoldier_SetMode_Underwater(goSoldier *);
extern void goSoldier_SetMode_Flying(goSoldier *);

void MedusaHead_Init(goCreature *);

void hook_Entity_DoMsg(int a0, float a1, int a2)
{
    kprintf("%d %d %d\n", a0,a1,a2);
}

char tempbuff[50] = {0};

void readfile()
{
    int fd = sceOpen("cdrom0:\\SYSTEMaaaaa.CNF;1", 1);

    sceRead(fd, tempbuff, 10);
    kprintf("%d\n", fd);
    sceClose(fd);
    kprintf("%p\n", tempbuff);
}

typedef struct MarkerListItem {
    struct stdListNode *_pNextItem; /* Inherited from stdListNode */
    struct stdListNode *_pPrevItem; /* Inherited from stdListNode */
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct VUVec4 pos;
    struct goGameObject *go;
    struct SaveListItem *slit;
    UINT16 jointID;
    UINT16 markerID;
    struct Entity *creator;
    UINT32 flags;
    UINT32 nEventsQueued;
    struct goGameObject *volumeGO[12];
    short int volumeID[12];
    unsigned int lastFrame[12];
} MarkerListItem;

struct sliCode {
    UINT8 *codeStart;
};

union DynExpr__u {
    FLOAT f;
    INT32 i;
    BOOL b;
    char *s;
    void *v;
};

typedef struct DynExpr {
    int sliOffset;
    union DynExpr__u u;
} DynExpr;

struct Entity__vtable {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct __vtbl_ptr_type Enabled;
    struct __vtbl_ptr_type Entity;
    struct __vtbl_ptr_type InitParms;
    struct __vtbl_ptr_type StateNotify;
    struct __vtbl_ptr_type HandleEvent;
    struct __vtbl_ptr_type Activate;
};

typedef struct Entity {
    struct VUMat4 matrix;
    UINT16 jointID;
    UINT16 id;
    INT16 volumeID;
    UINT16 policy;
    INT16 wiID;
    UINT16 nTargets;
    UINT16 *targetArray;
    char *name;
    struct goGameObject *go;
    struct sliCode sli;
    unsigned int lastEventField[3];
    FLOAT lastTriggerTime;
    struct DynExpr m_Enabled;
    struct DynExpr m_RefractoryPeriod;
    struct DynExpr m_ResponseDelay;
    struct DynExpr m_DelayedEnable;
    struct DynExpr m_Execute;
    struct DynExpr m_DebugString;
    struct DynExpr m_MarkerID;
    struct Entity__vtable *__vtable;
    undefined field21_0xa8;
    undefined field22_0xa9;
    undefined field23_0xaa;
    undefined field24_0xab;
    undefined field25_0xac;
    undefined field26_0xad;
    undefined field27_0xae;
    undefined field28_0xaf;
} Entity;

typedef struct WadInfo {
    unsigned int firstLoadA[2];
    unsigned int firstLoadB[2];
    int globalDataBase;
    int globalDataSize;
    int levelDataBase;
    int levelDataSize;
    struct stdList markerCtxtList;
    struct stdList goStateSaveList;
    struct stdList entitySaveList;
    struct stdList eventSaveList;
    struct stdList grappleSaveList;
    struct stdList breakableSaveList;
    struct stdList IO_SaveList;
    struct stdList IO_CSM_SaveList;
    struct stdList IO_TandF_SaveList;
    INT16 pwiID;
    UINT16 nEntities;
    struct Entity **entityTable;
    struct wadContext *wc;
} WadInfo;



extern WadInfo WadInfo_wiTable[2];

// void ListEntities()
// {
//     Entity** entities = WadInfo_wiTable[1].entityTable;
//     for (uint i = 0; i < WadInfo_wiTable[1].nEntities; i++)
//     {
//         kprintf("%s\n", entities[i]->name);
//     }
// 
// }

void loop()
{
    gamepad = ReadPad(0);

    if ((g_Timer - time) / 10 > 1)
    {
        // if (gamepad.LEFT)
        // {
        //     // showSpriteInstanceObjects();
        //     showSpriteObjects();
        // }
        // if (gamepad.RIGHT)
        // {
        //     ListSpriteInstances(flashInterface->flashClient[1]->movieInstance->spriteInstance, NULL);
        //     // showSpriteInstanceObjects();
        // }
        if (gamepad.L1)
        {
            // Global_sm_bShowCoords = 1;
            readfile();
        }
        // if (gamepad.L2)
        // {
        //     Global_sm_bShowCoords = 0;
        //     // showMenu();
        // }
        time = g_Timer;
    }
    
    // renderNewText();
    // if (enableTestMenu)
    // {
    //
    //     updateMenuStyle();
    //     lastSelectedOption = selectedOption;
    // }

    // kprintf("Addr:\n1: %p %d\n2: %p %d\n3: %p %d\n4: %p %d\n5: %p %d\n\n", adrmsg[0].ptr, adrmsg[0].id,adrmsg[1].ptr, adrmsg[1].id,adrmsg[2].ptr, adrmsg[2].id,adrmsg[3].ptr, adrmsg[3].id,adrmsg[4].ptr, adrmsg[4].id);
    GameState_Update();
}

void injectPatches()
{
    RedirectCall(0x23DBAC, loop);

    MakeNop(0x1D6B74); // for msg
    MakeNop(0x23C8E0); // disable shell video
    // MakeNop(0x1CCB68); // disable msg
    MakeNop(0x1D37F4); // disable start screen config
    // MakeNop(0x1F936C); // disable handlepickups
    MakeNop(0x1d6b88); // disable default max msg lines
    // RedirectCall(0x155f98, StreamMovie);
    RedirectJump(0x23ca64, 0x23ca8c); // skip shell
    WriteDword(0x148010, 0x0C0AAB6C);
    MakeNop(0x20FC74); // enable double jumping
    RedirectCall(0x205758, hook_goCreature_SetHitPoints);
    // RedirectCall(0x152380, hook_EditTextRender);
    RedirectJump(0x1D6F6C, 0x1D6FCC);
}

extern void FlushCache(UINT32);

void INVOKER()
{
    FlushCache(0);
    injectPatches();
}

// ver que variaveis que acionam a renderizam dos textos
// ver que parte define a posição do texto
// explorar todas as arrays relacionadas a flashinterface
// analisar as vtable
// desabilitar mensagem inicial - done
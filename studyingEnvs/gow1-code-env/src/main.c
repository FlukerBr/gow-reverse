#include "type.h"
#include "injector.h"
#include "flashinterface.h"
#include "gamestate.h"
#include "goplayer.h"
#include "gocreature.h"
#include "gosoldier.h"
#include "menu.h"
#include "enemymeter.h"
#include "syspad.h"
#include "entity.h"
#include "hooks/gamestate.h"
#include "hooks/gosoldier.h"
#include "hooks/gocreature.h"
#include "message.h"
#include "sifdev.h"

char * erl_id = "menu";

int printf(const char *, ...);
int sprintf(char *str, const char *format, ...);
// uint strlen(const char *str);
char* strcpy(char *dest, const char *src);
uint strlen(const char *str);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t n);

typedef struct WadInfo {
    uint firstLoadA[2];
    uint firstLoadB[2];
    int globalDataBase;
    int globalDataSize;
    int levelDataBase;
    int levelDataSize;
    UINT64 field6_0x20;
    UINT64 field7_0x28;
    UINT64 field8_0x30;
    UINT64 field9_0x38;
    UINT64 field10_0x40;
    UINT64 field11_0x48;
    UINT64 field12_0x50;
    UINT64 field13_0x58;
    short pwiID;
    ushort nEntities;
    Entity** entityTable;
    int wc;
} WadInfo;

extern WadInfo WadInfo_wiTable[2];

void ListEntities()
{
    Entity** entities = WadInfo_wiTable[0].entityTable;
    for (uint i = 0; i < WadInfo_wiTable[0].nEntities; i++)
    {
        printf("%d %s id: %d slicode: %p\n", WadInfo_wiTable[0], entities[i]->name, entities[i]->id, entities[i]->sli.codeStart);
    }

}

Gpad ReadPad(uint);

extern uint g_Timer;
uint time;
Gpad gamepad;

void GameRegistration(void);

void init()
{
    GameRegistration();

    initMenu();
}

typedef struct Ent_EnemyCreator {
    struct VUMat4 matrix; /* Inherited from Entity */
    UINT16 jointID; /* Inherited from Entity */
    UINT16 id; /* Inherited from Entity */
    INT16 volumeID; /* Inherited from Entity */
    UINT16 policy; /* Inherited from Entity */
    INT16 wiID; /* Inherited from Entity */
    UINT16 nTargets; /* Inherited from Entity */
    UINT16 *targetArray; /* Inherited from Entity */
    char *name; /* Inherited from Entity */
    struct goGameObject *go; /* Inherited from Entity */
    struct sliCode sli; /* Inherited from Entity */
    unsigned int lastEventField[3]; /* Inherited from Entity */
    FLOAT lastTriggerTime; /* Inherited from Entity */
    struct DynExpr m_Enabled; /* Inherited from Entity */
    struct DynExpr m_RefractoryPeriod; /* Inherited from Entity */
    struct DynExpr m_ResponseDelay; /* Inherited from Entity */
    struct DynExpr m_DelayedEnable; /* Inherited from Entity */
    struct DynExpr m_Execute; /* Inherited from Entity */
    struct DynExpr m_DebugString; /* Inherited from Entity */
    struct DynExpr m_MarkerID; /* Inherited from Entity */
    struct Ent_EnemyCreator__vtable *__vtable; /* Inherited from Entity */
    undefined field21_0xa8;
    undefined field22_0xa9;
    undefined field23_0xaa;
    undefined field24_0xab;
    undefined field25_0xac;
    undefined field26_0xad;
    undefined field27_0xae;
    undefined field28_0xaf;
    struct DynExpr m_MaximumCount;
    struct DynExpr m_SandbaggingCount;
    struct DynExpr m_CreateInitially;
    struct DynExpr m_ReSpawn;
    struct DynExpr m_TweakName;
    struct DynExpr m_SiteIndex;
    struct DynExpr m_AnimBank;
    struct DynExpr m_InitialMove;
    struct DynExpr m_StartState;
    struct DynExpr m_ModeData;
    int m_Count;
    int m_KillCount;
    undefined field41_0x108;
    undefined field42_0x109;
    undefined field43_0x10a;
    undefined field44_0x10b;
    undefined field45_0x10c;
    undefined field46_0x10d;
    undefined field47_0x10e;
    undefined field48_0x10f;
} Ent_EnemyCreator;

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

void Ent_EnemyCreator_StateNotify(Ent_EnemyCreator *this,MarkerListItem *markerListItem, uint state);

void hook_statenotify(Ent_EnemyCreator *this, MarkerListItem *markerListItem, uint state)
{
    Ent_EnemyCreator_StateNotify(this, markerListItem, 7);
}

void loop()
{
    gamepad = ReadPad(0);

    if ((g_Timer - time)/10 > 0.1f)
    {
        if (gamepad.L1)
        {            
            // ListEntities();
        }
        
        time = g_Timer;
    }
    GameState_Update();
}

void injectPatches()
{
    printf("injetando patches!\n");
    RedirectCall(0x21FD6C, loop);
    MakeNop(0x29CC98); // delicker
    // MakeNop(0x1D6270); // disable pickups

    injectHookgoSoldier();
    injectHookGameState();
    injectHookGoCreature();
    injectMenuPatches();
    injectMessagePatches();

    RedirectCall(0x17A994, init);


    WriteDword(0x2B8EB4, (uint)hook_statenotify);
    printf("patches injetados!\n");
}

void _start()
{
    injectPatches();
}
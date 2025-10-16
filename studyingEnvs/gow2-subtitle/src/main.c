#include "injector.h"
#include "type.h"
#include "stdio.h"
#include "string.h"
#include "message.h"
#include "structs.h"


u32 *Mem_GetCurrentHeapZone();
void *Mem_NewPtr(u32*, u32, u32);

void Mem_FreePtr(void *);

typedef struct Node
{
    uint32_t info;
    char *key;
    struct Node *next;
} Node;

Node *sound_names_htab[4] = {NULL, NULL, NULL, NULL};

Node *find_htab_by_key(const char *key)
{
    Node **hash = &sound_names_htab[strlen(key) % 4];
    Node *current = *hash;

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            return current;
        }
        current = current->next;
    }

    return NULL;
}

Node *find_htab_by_info(uint32_t info)
{
    for (int i = 0; i < 4; i++)
    {
        Node *current = sound_names_htab[i];
        while (current != NULL)
        {
            printf("%x %x\n", current->info, info);
            if (current->info == info)
            {
                return current;
            }
            current = current->next;
        }
    }

    return NULL;
}

void remove_htab(const char *name)
{
    Node **hash = &sound_names_htab[strlen(name) % 4];
    Node *current = *hash;
    Node *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->key, name) == 0)
        {
            if (prev == NULL)
            {
                *hash = current->next;
            }
            else
            {
                prev->next = current->next;
            }

            Mem_FreePtr(current->key);
            Mem_FreePtr(current);
            return;
        }

        prev = current;
        current = current->next;
    }
}


void add_htab(const char *name, uint32_t info)
{
    Node *found_node = find_htab_by_key(name);

    if (found_node)
    {
        found_node->info = info;
        return;
    }
    
    Node **hash = &sound_names_htab[strlen(name) % 4];

    Node *newnode = Mem_NewPtr(Mem_GetCurrentHeapZone(), sizeof(Node), 8);

    char *name_dup = Mem_NewPtr(Mem_GetCurrentHeapZone(), strlen(name) + 1, 8);

    strcpy(name_dup, name);

    if (!newnode)
    {
        return;
    }

    if (!name_dup)
    {
        Mem_FreePtr(newnode);
        return;
    }

    printf("Adding to hash table: key=%s, info=%u\n", name_dup, info);

    newnode->key = name_dup;
    newnode->next = *hash;
    newnode->info = info;

    *hash = newnode;

}

typedef struct dialogue
{
    char *sound_name;
    char *text;
} Dialogue;

Dialogue dialogues[] = {
    {"SND_D_6C01YS", "My lord! I knew you could not be killed.\nI never lost faith."},
    {"SND_D_6C02KR", "Return to Sparta and prepare for battle."},
    {"SND_D_6C03YS", "But... our brothers are dead."},
    {"SND_D_6C04KR", "You can still hold a sword.\nSpartans do not surrender!\nDo as your God commands."},
    {"SND_D_6C05YS", "And what of you, my lord?"},
    {"SND_D_6C06KR", "I am going after Zeus!\nIt seems I still have allies on Olympus."},
};

Dialogue *find_dialogue(char *sound_name)
{
    for (size_t i = 0; i < (uint32_t) (sizeof(dialogues) / sizeof(Dialogue)); i++)
    {
        if (!strcmp(dialogues[i].sound_name, sound_name))
        {
            return &dialogues[i];
        }
    }
    
    return NULL;
}

void Entity_AddToCreationList(Entity*, int);

void hook_Entity_AddToCreationList(Entity *this, int state)
{
    printf("%p %s\n", this, this->name);
}

char *states[] = {
    "PRE_CREATION",
    "CREATION",
    "ENTRY",
    "INSIDE",
    "EXIT",
    "EVENT",
    "DESTRUCTION",
    "SAVING",
    "RESTORE"
};

void Ent_EnemyCreator_StateNotify(Ent_EnemyCreator *this,MarkerListItem *markerListItem,StateID state);

extern goPlayer *goPlayer_sm_pPlayer;

void hook_Ent_EnemyCreator_StateNotify(Ent_EnemyCreator *this,MarkerListItem *markerListItem,StateID state)
{
    printf("Ent_EnemyCreator: %d %s %s %d %s\n", state, state >= 0 && state < 9 ? states[state] : "INVALID", this->name, this->type, this->m_TweakName.u.s);
    
    printf("%p", hook_Ent_EnemyCreator_StateNotify);
    Ent_EnemyCreator_StateNotify(this,markerListItem,state);
    
}

UINT32 stdDynaStringDB_Add(uint32_t *this,char *StringName,UINT32 value);
void FlashInterface_PlaySound(uint32_t *,int,char const *);

UINT32 sound_Handle_Handle(uint32_t *this,ClientParm__1_9257 *parm,unsigned int flags);

void sound_Emitter_Start(uint32_t *this,ClientParm__1_9257 *sound);

void hook_sound_Emitter_Start(uint32_t *this,ClientParm__1_9257 *sound)
{
    printf("sound_Emitter_Start a0: %p a1: %p\n", this, sound);

    char *sound_name = NULL;
    char *text = NULL;

    Node *node = find_htab_by_info((uint32_t)sound);

    sound_name = node ? node->key : NULL;
    
    
    if (sound_name)
    {
        Dialogue *dialogue = find_dialogue(sound_name);
        char *text = dialogue->text;

        kprintf("%s\n", sound_name);
        displayMessage(text, 1);
    }
    
    // Dialogue *curr_dialogue = find_dialogue(sound_name);

    
    sound_Emitter_Start(this,sound);
}

int prefix(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre)) == 0;
}

UINT32 hook_stdDynaStringDB_Add(uint32_t *this,char *StringName,UINT32 value)
{
    if (prefix("SND_D_", StringName))
    {
        printf("stdDynaStringDB_Add: %s %x\n", StringName, value);

        add_htab(StringName, value);
    }
    
    return stdDynaStringDB_Add(this, StringName, value);
}

void loop()
{

}

void injectPatches()
{
    // RedirectCall(0x1D4CE4, hook_Entity_AddToCreationList);
    WriteDword(0x2F04AC, (uint32_t)hook_Ent_EnemyCreator_StateNotify);
    WriteDword(0x226AB4, 0);
    // RedirectCall(0x17F014, hook_stdDynaStringDB_Add);
    // RedirectCall(0x17D7BC, hook_sound_Handle_Handle);
    // RedirectCall(0x248298, hook_goCreature_PlaySound);
    // RedirectCall(0x17D830, hook_sound_FindSound);
    // RedirectCall(0x219C74, hook_sound_Emitter_Start);
    // RedirectCall(0x1E5420,)
    // RedirectCall(0x25EDAC, loop);
    injectMessagePatches();
}

void FlushCache(int);
void INVOKER()
{
    FlushCache(0);
    injectPatches();
}
#include "gamestate.h"
#include "gocreature.h"
#include "goplayer.h"
#include "flashinterface.h"
#include "enemymeter.h"

uint *tMoveSystem_GetTargetCreature(uint *this);
uint tMoveSystem_GetTargetID(uint *this);
int sprintf(char *str, const char *format, ...);
F_SpriteInstance *GetSubSI(char const *, F_SpriteInstance *);
int _printf(const char *, ...);
void* memset(void *ptr, int value, uint size);

char enemyMeterString[15] = {0};

BOOL allow_EnemyMeter = 0;

void enableEnemyMeter(BOOL enable)
{
    flashInterface->TestString_Event = enable;
    FlashInterface_SimKeyEvent(flashInterface);
    allow_EnemyMeter = enable;

    if (!enable)
    {
        return;
    }
    
    flashInterface->TestString_Value = enemyMeterString;

    for (uint i = 0; i < 3; i++)
    {
        renFlashClient *flashclient = flashInterface->flashClient[i];

        if (!flashclient)
        {
            continue;
        }
        

        F_Movie *movie = flashclient->movieInstance->movie;

        F_SpriteInstance *SI = GetSubSI("TestString", flashclient->movieInstance->spriteInstance);

        if (SI)
        {
            // SI->xPos = 270.0f;
            SI->yPos = -80.0f;
            _printf("%p\n", &SI->yPos);
        }
    }
}

void updateEnemyMeter()
{
    if (GameState_curState == 11 && allow_EnemyMeter)
    {
        uint *moveSystem = *((uint**)((uint)goPlayer_sm_pPlayer->m_pCreature + 0x324));
        goCreature *creature = (goCreature *)tMoveSystem_GetTargetCreature(moveSystem);
        uint id = tMoveSystem_GetTargetID(moveSystem);

        if (creature && id > 10)
        {
            if (flashInterface->TestString_Value != enemyMeterString)
            {
                flashInterface->TestString_Value = enemyMeterString;
            }
            uint HP_spectrum = (uint)((creature->m_fHitPoints / creature->m_fMaxHitPoints) * 10);

            int color = 0xFF000000;

            switch (HP_spectrum) {
                case 0:
                    color += 0x0;
                    break;
                case 1:
                case 2:
                    color += 0xFF0000;
                    break;
                case 3:
                case 4:
                    color += 0xFF6500;
                    break;
                case 5:
                case 6:
                    color += 0xFFD800;
                    break;
                case 7:
                case 8:
                    color += 0x00FF00;
                    break;
                case 9:
                case 10:
                    color += 0x009B00;
                    break;
                default:
                    break;
            }
            
            for (uint i = 0; i < 3; i++)
            {
                renFlashClient *flashclient = flashInterface->flashClient[i];
                F_Movie *movie = flashclient->movieInstance->movie;

                F_SpriteInstance *SI = GetSubSI("TestString", flashclient->movieInstance->spriteInstance);

                if (SI)
                {
                    movie->editTextArray[81].color = color;
                }
            }

            sprintf(enemyMeterString, "%6.0f", creature->m_fHitPoints);
            return;
        }
    }
    flashInterface->TestString_Value = NULL;
}
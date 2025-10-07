#include "slowmotion.h"
#include "gow/flashinterface.h"
#include "time.h"
#include "ps2mem.h"

bool enable_slowmotion = false;
uint32_t slowmotion_start_time = 0;
const float slowmotion_fadetime = 20.0f;

void handleSlowmotionActivity()
{
    if (enable_slowmotion)
    {
        green_filter = 0.4f;
        game_world_speed = 0.0001f;
        FlashInterface_PlaySound(flashInterface, 0, (char *)0x2EEDF0);

    }
    else
    {
        green_filter = 0.0f;
        game_world_speed = 1.0f;
        return;
    }

    // printf("%d\n", hasTimePassed(slowmotion_fadetime, slowmotion_start_time));

    enable_slowmotion = !hasTimePassed(slowmotion_fadetime, slowmotion_start_time);
}

void slowmotionPatches()
{
    MakeNop(0x1A2098);
}
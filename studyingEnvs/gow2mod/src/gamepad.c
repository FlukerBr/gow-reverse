#include "gamepad.h"
#include "slowmotion.h"
#include "cameratracking.h"
#include "time.h"
#include "list.h"
#include "creature.h"
#include "menu.h"
#include "stdio.h"

Gpad (*ReadPad)(uint32_t) = ((Gpad(*)(uint32_t))0x1576F8);

Gpad pad;

#define functiontest ((void(*)(uint32_t))0x25A898)

void listenGamepad()
{
    pad = ReadPad(0);

//     if (pad.DOWN && pad.L1)
//     {
//         enable_slowmotion = true;
//         slowmotion_start_time = *g_Timer;
//         printf("slowmotion on\n");
//     }
// 
//     if (pad.UP && pad.L1)
//     {
//         enable_slowmotion = false;
//         printf("slowmotion off\n");
//     }
// 
//     if (pad.LEFT && pad.L1)
//     {
//         savePlayerPos();
//         printf("Saving\n");
//     }
// 
//     if (pad.RIGHT && pad.L1)
//     {
//         teleportPlayer();
//         printf("Teleporting\n");
//     }

    if (pad.R3 && pad.DOWN)
    {
        // changeCostume();
        // showList(gocreature_list);
        // killAllCreature();
        goToMenu(1);
    }

    if (pad.R3 && pad.LEFT)
    {
        showList(gocreature_list);
    }

    if (pad.L1 && pad.R3)
    {
        SetCameraTrackingMode(!enable_enemy_camera_tracking);
    }
}
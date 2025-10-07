#include "cameratracking.h"
#include "gow/flashinterface.h"
#include "stdio.h"
#include "message.h"

#define BLACK_LIST_SIZE  sizeof(camera_tracking_blacklist) / 4

uint32_t *player_target;
uint32_t *entity_camera_target;
bool enable_enemy_camera_tracking = false;
uint32_t camera_tracking_blacklist[] = {4};

char *on = "on";
char *off = "off";
char *tracking = "Tracking %s";
char msg[16];

bool atCameraTracking(uint32_t creature_id)
{
    for (size_t i = 0; i < BLACK_LIST_SIZE; i++)
    {
        if (creature_id == camera_tracking_blacklist[i])
        {
            return true;
        }
    }
    return false;
}

void SetCameraTrackingMode(bool mode)
{
    enable_enemy_camera_tracking = mode;
    sprintf(msg, tracking, (enable_enemy_camera_tracking) ? on : off);

    FlashInterface_PlaySound(flashInterface, 0, (char *)0x2EB0C8);
    
    showMessage(msg);
}

void SetCameraTrackingTarget(uint32_t *target)
{
    *entity_camera_target = *target;
    player_target = target;
}
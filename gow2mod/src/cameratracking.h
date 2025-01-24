#ifndef CAMERATRACKING_H
#define CAMERATRACKING_H

#include "stdint.h"

extern bool enable_enemy_camera_tracking;
extern uint32_t *entity_camera_target;
extern uint32_t *player_target;

bool atCameraTracking(uint32_t creature_id);
void SetCameraTrackingMode(bool mode);
void SetCameraTrackingTarget(uint32_t *target);

#endif
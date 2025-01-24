#ifndef MESSAGE_H
#define MESSAGE_H

#include "stdint.h"

typedef struct
{
    char *message;
    int scheduling_state;
} MessageSchedule;

void scheduleMessage(char *msg, int scheduling_state);
void unscheduleMessage(MessageSchedule *messageSchedule);
void checkMessageScheduling();
void showMessage(char *msg);
void messagePatches();

#endif
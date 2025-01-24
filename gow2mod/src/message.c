#include "message.h"
#include "list.h"
#include "gow/gamestate.h"
#include "ps2mem.h"
#include "string.h"
#include "stdio.h"
#include "alloc.h"

List *message_schedule_list = NULL;

void scheduleMessage(char *msg, int scheduling_state)
{
    MessageSchedule *new_message_schedule = (MessageSchedule *)my_malloc(sizeof(MessageSchedule));

    if (new_message_schedule)
    {
        new_message_schedule->message = msg;
        new_message_schedule->scheduling_state = scheduling_state;

        insertItem(&message_schedule_list, (void *)new_message_schedule, sizeof(MessageSchedule));
    }
    else
    {
        printf("Nao foi possivel agendar mensagem");
    }
    
}
void unscheduleMessage(MessageSchedule *messageSchedule)
{
    removeItem(&message_schedule_list, messageSchedule);
}

void checkMessageScheduling()
{
    List *current = message_schedule_list;

    while (current != NULL)
    {
        MessageSchedule *message_schedule = (MessageSchedule *)current->item;

        if (message_schedule->scheduling_state == *GameState_curState)
        {
            showMessage(message_schedule->message);
            unscheduleMessage(message_schedule);
        }

        printf("%s\n", message_schedule->message);
        current = current->next;
    }
}

void showMessage(char *msg)
{
    GameState_DoMsg(46);
    strcpy((char *)0x2FC208, msg);
}

void messagePatches()
{
    MakeNop(0x1E6CA8); // disable sprintf
}
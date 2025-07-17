// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include "todo.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief implement your prototyped functions mentioned in the todo.h.
 *
 */

char *stat_to_text(enum status_t _status)
{
    char *text;
    switch (_status)
    {
    case 0:
        text = "none";
        break;
    
    case 1:
        text = "canceled";
        break;

    case 2:
        text = "done";
        break;

    default:
        break;
    }
    
    return text;

}

void todo_print_all(struct activity_t *_activity, unsigned short _size)
{
    for (short i = 0; i < _size; i++)
    {
        printf("%d|%s|%s|%s\n", _activity[i]._id, _activity[i]._time, _activity[i]._subject, stat_to_text(_activity[i]._status));
    } 
}

void todo_status(struct activity_t *_activity, char *_status , unsigned short _index, unsigned short _size)
{
    for (short i = 0; i < _size; i++)
    {
        if (_index == _activity[i]._id)
        {
            if (_activity[i]._status == STATUS_NONE)
            {
                if (strcmp(_status, "done") == 0)
                {
                    _activity[i]._status = STATUS_DONE;
                }   else {
                    _activity[i]._status = STATUS_CANCELED;
                }
            }   
        }
    }
}

void todo_add(struct activity_t *_activity, char *_command, unsigned short _size, unsigned short _id)
{
    char *token_act = strtok(NULL, "#");
    _activity[_size]._id = _id++;
    strcpy(_activity[_size]._time, token_act);
    token_act = strtok(NULL, "#");
    strcpy(_activity[_size]._subject, token_act);
    _activity[_size]._status = 0;
    _size++;
}

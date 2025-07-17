// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include "repository.h"
#include "todo.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief implement your prototyped functions mentioned in the repository.h.
 *
 */
void read_repository(struct activity_t *_activity, unsigned short _size, unsigned short _id)
{
    FILE *file_activity = fopen("./storage/todo-repository.txt", "r");
    char activity_content[100];
    char *temp_data;

    if (file_activity != NULL)
    {
        while (fgets(activity_content, 100, file_activity))
        {
            temp_data = strtok(activity_content, "|");
            _activity[_size]._id = _id++;
            temp_data = strtok(NULL, "|");
            strcpy(_activity[_size]._time, temp_data);
            temp_data = strtok(NULL, "|");
            strcpy(_activity[_size]._subject, temp_data);
            temp_data = strtok(NULL, "|");
            if (strcmp(temp_data, "none\n") == 0)
            {
                _activity[_size]._status = STATUS_NONE; 
            }

            if (strcmp(temp_data, "canceled\n") == 0)
            {
                _activity[_size]._status = STATUS_CANCELED;
            }

            if (strcmp(temp_data, "done\n") == 0)
            {
                _activity[_size]._status = STATUS_DONE;
            }
            _size++;
        }
    }   
}

void write_repository(struct activity_t *_activity, unsigned short _temp_size, unsigned short _size)
{
    FILE *file_activity = fopen("./storage/todo-repository.txt", "a");
    for (short i = _temp_size; i <= _size; i++)
    {
        if (file_activity != NULL)
        {
        fprintf(file_activity, "%d|%s|%s|%s\n", _activity[i]._id, _activity[i]._time, _activity[i]._subject, stat_to_text(_activity[i]._status));
        }
    }
    fclose(file_activity);
}

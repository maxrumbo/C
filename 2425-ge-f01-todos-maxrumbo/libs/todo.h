// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#ifndef TODO_H
#define TODO_H

/**
 * @brief define any function prototype, structs, enums, etc. related to the core domain, the to-do.
 *
 */

enum status_t
{
    STATUS_NONE,
    STATUS_CANCELED,
    STATUS_DONE
};

struct activity_t 
{
    unsigned short _id;
    char _time[50];
    char _subject[50];   
    enum status_t _status;
};

void todo_add(struct activity_t *_activity, char *_command, unsigned short _size, unsigned short _id);
void todo_print_all(struct activity_t *_activity, unsigned short _size);
void todo_status(struct activity_t *_activity, char *_status, unsigned short _index, unsigned short _size);
char *stat_to_text(enum status_t _status);
#endif

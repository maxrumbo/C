// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct student_t *students = NULL;
    unsigned short int student_count = 0;
    char buffer[128];

    while (fgets(buffer, sizeof(buffer), stdin)) {
        buffer[strcspn(buffer, "\n")] = 0;
        if (strcmp(buffer, "---") == 0) break;

        char *token = strtok(buffer, "#");
        if (strcmp(token, "create-student") == 0) {
            char *id = strtok(NULL, "#");
            char *name = strtok(NULL, "#");
            char *year = strtok(NULL, "#");
            char *program = strtok(NULL, "#");

            students = realloc(students, sizeof(struct student_t) * (student_count + 1));
            students[student_count++] = create_student(id, name, year, program);

        } else if (strcmp(token, "print-students") == 0) {
            print_students(students, student_count);
        }
    }

    free(students);
    return 0;
}


// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct student_t *students = NULL;
    struct course_t *courses = NULL;
    unsigned short int student_count = 0, course_count = 0;
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

        } else if (strcmp(token, "create-course") == 0) {
            char *code = strtok(NULL, "#");
            char *name = strtok(NULL, "#");
            unsigned short credit = atoi(strtok(NULL, "#"));
            char *grade_str = strtok(NULL, "#");

            enum grade_t passing_grade = GRADE_NONE;
            if (strcmp(grade_str, "A") == 0) passing_grade = GRADE_A;
            else if (strcmp(grade_str, "AB") == 0) passing_grade = GRADE_AB;
            else if (strcmp(grade_str, "B") == 0) passing_grade = GRADE_B;
            else if (strcmp(grade_str, "BC") == 0) passing_grade = GRADE_BC;
            else if (strcmp(grade_str, "C") == 0) passing_grade = GRADE_C;
            else if (strcmp(grade_str, "D") == 0) passing_grade = GRADE_D;
            else if (strcmp(grade_str, "E") == 0) passing_grade = GRADE_E;
            else if (strcmp(grade_str, "T") == 0) passing_grade = GRADE_T;

            courses = realloc(courses, sizeof(struct course_t) * (course_count + 1));
            courses[course_count++] = create_course(code, name, credit, passing_grade);

        } else if (strcmp(token, "print-students") == 0) {
            print_students(students, student_count);

        } else if (strcmp(token, "print-courses") == 0) {
            print_courses(courses, course_count);

        } else if (strcmp(token, "find-student-by-id") == 0) {
            char *id = strtok(NULL, "#");
            struct student_t result = find_student_by_id(students, student_count, id);
            if (strcmp(result.id, "") != 0) {
                print_student(result);
            }
        }
    }

    free(students);
    free(courses);
    return 0;
}

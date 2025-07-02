// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu


#include "academic.h"
#include <stdio.h>
#include <string.h>

char *grade_to_text(enum grade_t _grade)
{
    switch (_grade)
    {
    case GRADE_A: return "A";
    case GRADE_AB: return "AB";
    case GRADE_B: return "B";
    case GRADE_BC: return "BC";
    case GRADE_C: return "C";
    case GRADE_D: return "D";
    case GRADE_E: return "E";
    case GRADE_T: return "T";
    default: return "None";
    }
}

float calculate_performance(enum grade_t _grade, unsigned short _credit)
{
    float score = 0.0;
    switch (_grade)
    {
    case GRADE_A: score = 4.0; break;
    case GRADE_AB: score = 3.5; break;
    case GRADE_B: score = 3.0; break;
    case GRADE_BC: score = 2.5; break;
    case GRADE_C: score = 2.0; break;
    case GRADE_D: score = 1.0; break;
    case GRADE_E:
    case GRADE_T:
    default: score = 0.0; break;
    }
    return _credit * score;
}

void print_course(struct course_t _course)
{
    printf("%s|%s|%d|%s\n",
           _course.code,
           _course.name,
           _course.credit,
           grade_to_text(_course.passing_grade));
}

void print_courses(struct course_t *_courses, unsigned short int _course_size)
{
    for (int i = 0; i < _course_size; ++i)
    {
        print_course(_courses[i]);
    }
}

void print_student(struct student_t _student)
{
    printf("%s|%s|%s|%s|%.2f\n",
           _student.id,
           _student.name,
           _student.year,
           _student.study_program,
           _student.gpa);
}

void print_students(struct student_t *_students, unsigned short int _student_size)
{
    for (int i = 0; i < _student_size; ++i)
    {
        print_student(_students[i]);
    }
}

struct course_t create_course(char *_code, char *_name, unsigned short _credit,
                              enum grade_t _passing_grade)
{
    struct course_t crs;
    strncpy(crs.code, _code, sizeof(crs.code));
    strncpy(crs.name, _name, sizeof(crs.name));
    crs.credit = _credit;
    crs.passing_grade = _passing_grade;
    return crs;
}

struct student_t create_student(char *_id, char *_name, char *_year,
                                char *_study_program)
{
    struct student_t std;
    strncpy(std.id, _id, sizeof(std.id));
    strncpy(std.name, _name, sizeof(std.name));
    strncpy(std.year, _year, sizeof(std.year));
    strncpy(std.study_program, _study_program, sizeof(std.study_program));
    std.gpa = 0.0;
    return std;
}

struct student_t find_student_by_id(struct student_t *_students,
                                    unsigned short int _student_size,
                                    char *_id)
{
    for (int i = 0; i < _student_size; ++i)
    {
        if (strcmp(_students[i].id, _id) == 0)
        {
            return _students[i];
        }
    }
    struct student_t empty = {"", "", "", "", 0.0};
    return empty;
}

struct course_t find_course_by_code(struct course_t *_courses,
                                    unsigned short int _course_size,
                                    char *_code)
{
    for (int i = 0; i < _course_size; ++i)
    {
        if (strcmp(_courses[i].code, _code) == 0)
        {
            return _courses[i];
        }
    }
    struct course_t empty = {"", "", 0, GRADE_NONE};
    return empty;
}

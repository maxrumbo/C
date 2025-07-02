// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Napitupulu

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
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

void print_student(struct student_t _student)
{
    printf("%s|%s|%s|%s|%.2f\n",
           _student.id,
           _student.name,
           _student.year,
           _student.study_program,
           _student.gpa);
}

void print_enrollment(struct enrollment_t _enrollment)
{
    printf("%s|%s|%s|%.2f\n",
           _enrollment.course.code,
           _enrollment.student.id,
           grade_to_text(_enrollment.grade),
           calculate_performance(_enrollment.grade, _enrollment.course.credit));
}

void print_enrollments(struct enrollment_t *_enrollments, unsigned short int _enrollment_size)
{
    for (int i = 0; i < _enrollment_size; ++i)
    {
        print_enrollment(_enrollments[i]);
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

struct enrollment_t create_enrollment(struct course_t _course,
                                      struct student_t _student, char *_year,
                                      enum semester_t _semester)
{
    struct enrollment_t emt;
    emt.course = _course;
    emt.student = _student;
    strncpy(emt.year, _year, sizeof(emt.year));
    emt.semester = _semester;
    emt.grade = GRADE_NONE;
    return emt;
}

void set_enrollment_grade(struct course_t _course, struct student_t _student,
                          struct enrollment_t *_enrollments,
                          unsigned short int _enrollment_size,
                          enum grade_t _grade)
{
    for (int i = _enrollment_size - 1; i >= 0; --i)
    {
        if (strcmp(_enrollments[i].course.code, _course.code) == 0 &&
            strcmp(_enrollments[i].student.id, _student.id) == 0)
        {
            _enrollments[i].grade = _grade;
            break;
        }
    }
}

void calculate_gpa(struct student_t *_student,
                   struct enrollment_t *_enrollments,
                   unsigned short int _enrollment_size)
{
    float total_score = 0.0;
    unsigned short total_credits = 0;

    for (int i = 0; i < _enrollment_size; ++i)
    {
        if (strcmp(_enrollments[i].student.id, _student->id) == 0 &&
            _enrollments[i].grade != GRADE_NONE &&
            _enrollments[i].grade != GRADE_T)
        {
            float performance = calculate_performance(_enrollments[i].grade, _enrollments[i].course.credit);
            total_score += performance;
            total_credits += _enrollments[i].course.credit;
        }
    }

    if (total_credits > 0)
    {
        _student->gpa = total_score / total_credits;
    }
    else
    {
        _student->gpa = 0.0;
    }
}
#include "Grade.h"

Grade::Grade(Course course, int grade)
    : course(course), grade(grade) {}

int Grade::getGrade() const {
    return grade;
}

Course Grade::getCourse() const {
    return course;
}

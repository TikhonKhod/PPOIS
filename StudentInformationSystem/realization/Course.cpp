#include "Course.h"

Course::Course(string courseName, int courseId, Professor professor)
    : courseName(courseName), courseId(courseId), professor(professor) {}

string Course::getCourseName() const {
    return courseName;
}

Professor Course::getProfessor() const {
    return professor;
}

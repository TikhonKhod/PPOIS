#pragma once

#include "Course.h"

class Grade {
private:
    Course course;
    int grade;

public:
    Grade(Course course, int grade);
    int getGrade() const;
    Course getCourse() const;
};


#pragma once

#include <vector>
#include "Course.h"

class Schedule {
private:
    std::vector<Course> courses;

public:
    void addCourse(Course course);
    std::vector<Course> getCourses() const;
};

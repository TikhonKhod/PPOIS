#pragma once

#include <string>
#include <vector>
#include "Course.h"

class Department {
private:
    string departmentName;
    vector<Course> courses;

public:
    Department(string departmentName);
    void addCourse(Course course);
    string getDepartmentName() const;
    vector<Course> getCourses() const;
};


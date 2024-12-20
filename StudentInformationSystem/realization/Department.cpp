#include "Department.h"

Department::Department(string departmentName)
    : departmentName(departmentName) {}

void Department::addCourse(Course course) {
    courses.push_back(course);
}

string Department::getDepartmentName() const {
    return departmentName;
}

vector<Course> Department::getCourses() const {
    return courses;
}

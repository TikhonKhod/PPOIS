#include "Schedule.h"

void Schedule::addCourse(Course course) {
    courses.push_back(course);
}

std::vector<Course> Schedule::getCourses() const {
    return courses;
}

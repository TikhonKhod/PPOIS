#include <gtest/gtest.h>
#include "../realization/Department.h"
#include "../realization/Course.h"
#include "../realization/Professor.h"

TEST(DepartmentTest, AddCourseTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Department department("Computer Science");
    department.addCourse(course);
    EXPECT_EQ(department.getCourses().size(), 1);
    EXPECT_EQ(department.getCourses()[0].getCourseName(), "Algorithms");
}

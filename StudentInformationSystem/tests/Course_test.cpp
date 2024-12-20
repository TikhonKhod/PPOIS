#include <gtest/gtest.h>
#include "../realization/Course.h"
#include "../realization/Professor.h"

TEST(CourseTest, GetCourseNameTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    EXPECT_EQ(course.getCourseName(), "Algorithms");
}

TEST(CourseTest, GetProfessorTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    EXPECT_EQ(course.getProfessor().getName(), "Dr. Smith");
}

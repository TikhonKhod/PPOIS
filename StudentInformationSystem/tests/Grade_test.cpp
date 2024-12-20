#include <gtest/gtest.h>
#include "../realization/Grade.h"
#include "../realization/Course.h"

TEST(GradeTest, GetGradeTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Grade grade(course, 90);
    EXPECT_EQ(grade.getGrade(), 90);
}

TEST(GradeTest, GetCourseTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Grade grade(course, 90);
    EXPECT_EQ(grade.getCourse().getCourseName(), "Algorithms");
}

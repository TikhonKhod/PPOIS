#include <gtest/gtest.h>
#include "../realization/Exam.h"
#include "../realization/Course.h"
#include "../realization/Professor.h"

TEST(ExamTest, GetCourseTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Exam exam(course, "2024-06-15", 100);
    EXPECT_EQ(exam.getCourse().getCourseName(), "Algorithms");
}

TEST(ExamTest, IsPassedTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Exam exam(course, "2024-06-15", 100);
    EXPECT_TRUE(exam.isPassed(60));  // 60 marks is passing
    EXPECT_FALSE(exam.isPassed(40)); // 40 marks is failing
}

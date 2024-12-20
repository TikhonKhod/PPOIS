#include <gtest/gtest.h>
#include "../realization/Student.h"
#include "../realization/Course.h"
#include "../realization/Grade.h"
#include "../realization/Professor.h"

TEST(StudentTest, AddCourseTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    student.addCourse(course);
    EXPECT_EQ(student.getCourses().size(), 1);
}

TEST(StudentTest, AddGradeTest) {
    Professor professor("Dr. Smith", "Computer Science");
    Course course("Algorithms", 101, professor);
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Grade grade(course, 90);
    student.addGrade(grade);
    EXPECT_EQ(student.getGrades().size(), 1);
}

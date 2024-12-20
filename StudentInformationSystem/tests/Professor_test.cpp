#include <gtest/gtest.h>
#include "../realization/Professor.h"

TEST(ProfessorTest, GetNameTest) {
    Professor professor("Dr. Smith", "Computer Science");
    EXPECT_EQ(professor.getName(), "Dr. Smith");
}

TEST(ProfessorTest, GetDepartmentTest) {
    Professor professor("Dr. Smith", "Computer Science");
    EXPECT_EQ(professor.getDepartment(), "Computer Science");
}

#include <gtest/gtest.h>
#include "../realization/DepartmentHead.h"

TEST(DepartmentHeadTest, GetNameTest) {
    DepartmentHead head("Dr. Brown", "Computer Science");
    EXPECT_EQ(head.getName(), "Dr. Brown");
}

TEST(DepartmentHeadTest, GetDepartmentTest) {
    DepartmentHead head("Dr. Brown", "Computer Science");
    EXPECT_EQ(head.getDepartment(), "Computer Science");
}

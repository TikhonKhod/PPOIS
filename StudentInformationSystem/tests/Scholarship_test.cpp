#include <gtest/gtest.h>
#include "../realization/Scholarship.h"
#include "../realization/Student.h"

TEST(ScholarshipTest, AssignScholarshipTest) {
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Scholarship scholarship("Merit Scholarship", 1500.0);
    EXPECT_TRUE(scholarship.assignScholarship(&student));
    EXPECT_EQ(scholarship.getRecipient()->getName(), "John Doe");
    EXPECT_TRUE(scholarship.isAwarded());
}

TEST(ScholarshipTest, AlreadyAwardedTest) {
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Scholarship scholarship("Merit Scholarship", 1500.0);
    scholarship.assignScholarship(&student);
    EXPECT_FALSE(scholarship.assignScholarship(&student)); // Не может быть назначена дважды
}

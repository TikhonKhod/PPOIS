#include <gtest/gtest.h>
#include "../sipipi/LoyaltyProgram.h"

TEST(LoyaltyProgramTest, AddAndRetrievePoints) {
    LoyaltyProgram lp;
    lp.addPoints("Alice", 10);
    EXPECT_EQ(lp.getPoints("Alice"), 10);
}
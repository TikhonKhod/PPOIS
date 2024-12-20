#include <gtest/gtest.h>
#include "../realization/Chef.h"

// Тест создания шеф-повара
TEST(ChefTest, ChefCreation) {
    Chef chef("Gordon", 5000, 15);
    EXPECT_EQ(chef.getYearsOfExperience(), 15);
    EXPECT_DOUBLE_EQ(chef.getSalary(), 5000);
}

// Тест подготовки блюда
TEST(ChefTest, PrepareDish) {
    Chef chef("Gordon", 5000, 15);
    testing::internal::CaptureStdout();
    chef.prepareDish("Beef Wellington");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Gordon is preparing the dish: Beef Wellington\n");
}

// Тест отображения шеф-повара
TEST(ChefTest, DisplayChef) {
    Chef chef("Gordon", 5000, 15);
    testing::internal::CaptureStdout();
    chef.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Gordon"), std::string::npos);
    EXPECT_NE(output.find("Experience: 15 years"), std::string::npos);
}
#include <gtest/gtest.h>
#include "../sipipi/Dish.h"

// Тест создания блюда
TEST(DishTest, DishCreation) {
    Dish dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"});
    EXPECT_EQ(dish.getName(), "Pasta");
    EXPECT_DOUBLE_EQ(dish.getPrice(), 12.5);
    EXPECT_EQ(dish.getIngredients().size(), 2);
}

// Тест отображения блюда
TEST(DishTest, DishDisplay) {
    Dish dish("Burger", 9.99, {"Bun", "Patty", "Cheese"});
    testing::internal::CaptureStdout();
    dish.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Dish: Burger, Price: $9.99\n");
}
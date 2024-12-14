#include <gtest/gtest.h>
#include "../sipipi/Menu.h"

// Тест добавления блюда
TEST(MenuTest, AddDish) {
    Menu menu;
    Dish dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"});
    menu.addDish(dish);

    EXPECT_EQ(menu.getDishes().size(), 1);
    EXPECT_EQ(menu.getDishes()[0].getName(), "Pasta");
}

// Тест удаления блюда
TEST(MenuTest, RemoveDish) {
    Menu menu;
    menu.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));
    menu.addDish(Dish("Burger", 9.99, {"Bun", "Patty", "Cheese"}));

    menu.removeDish("Pasta");

    EXPECT_EQ(menu.getDishes().size(), 1);
    EXPECT_EQ(menu.getDishes()[0].getName(), "Burger");
}

// Тест отображения меню
TEST(MenuTest, DisplayMenu) {
    Menu menu;
    menu.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));
    menu.addDish(Dish("Burger", 9.99, {"Bun", "Patty", "Cheese"}));

    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Pasta"), std::string::npos);
    EXPECT_NE(output.find("Burger"), std::string::npos);
}
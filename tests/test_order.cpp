#include <gtest/gtest.h>
#include "../sipipi/Order.h"

// Тест создания заказа
TEST(OrderTest, CreateOrder) {
    Customer customer("Alice", "123-456-7890");
    Order order(&customer);
    EXPECT_EQ(order.getCustomer()->getName(), "Alice");
}

// Тест добавления блюд
TEST(OrderTest, AddDishes) {
    Customer customer("Alice", "123-456-7890");
    Order order(&customer);

    order.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));
    order.addDish(Dish("Burger", 9.99, {"Bun", "Patty", "Cheese"}));

    testing::internal::CaptureStdout();
    order.displayOrder();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Pasta"), std::string::npos);
    EXPECT_NE(output.find("Burger"), std::string::npos);
}

// Тест подсчета стоимости
TEST(OrderTest, CalculateTotal) {
    Customer customer("Alice", "123-456-7890");
    Order order(&customer);

    order.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));
    order.addDish(Dish("Burger", 9.99, {"Bun", "Patty", "Cheese"}));

    EXPECT_DOUBLE_EQ(order.calculateTotal(), 22.49);
}
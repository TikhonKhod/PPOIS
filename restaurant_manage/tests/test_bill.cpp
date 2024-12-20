#include <gtest/gtest.h>
#include "../realization/Bill.h"

// Тест подсчета итоговой стоимости
TEST(BillTest, CalculateTotal) {
    Customer customer("Alice", "123-456-7890");
    Order order(&customer);
    order.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));
    order.addDish(Dish("Burger", 9.99, {"Bun", "Patty", "Cheese"}));

    Bill bill(&order);
    EXPECT_DOUBLE_EQ(bill.calculateTotal(), 22.49);
}

// Тест печати счета
TEST(BillTest, PrintBill) {
    Customer customer("Alice", "123-456-7890");
    Order order(&customer);
    order.addDish(Dish("Pasta", 12.5, {"Pasta", "Tomato Sauce"}));

    Bill bill(&order);

    testing::internal::CaptureStdout();
    bill.printBill();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Alice"), std::string::npos);
    EXPECT_NE(output.find("Total: $12.5"), std::string::npos);
}
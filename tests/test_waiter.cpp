#include <gtest/gtest.h>
#include "../sipipi/Waiter.h"

// Тест создания официанта
TEST(WaiterTest, WaiterCreation) {
    Waiter waiter("John", 2500, 5);
    EXPECT_EQ(waiter.getTablesAssigned(), 5);
    EXPECT_DOUBLE_EQ(waiter.getSalary(), 2500);
}

// Тест взятия заказа
TEST(WaiterTest, TakeOrder) {
    Waiter waiter("John", 2500, 5);
    testing::internal::CaptureStdout();
    waiter.takeOrder("Pizza and Cola");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "John is taking the order: Pizza and Cola\n");
}

// Тест отображения официанта
TEST(WaiterTest, DisplayWaiter) {
    Waiter waiter("John", 2500, 5);
    testing::internal::CaptureStdout();
    waiter.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("John"), std::string::npos);
    EXPECT_NE(output.find("Tables Assigned: 5"), std::string::npos);
}
#include <gtest/gtest.h>
#include "../sipipi/Customer.h"

// Тест создания клиента
TEST(CustomerTest, CustomerCreation) {
    Customer customer("Alice", "123-456-7890");
    EXPECT_EQ(customer.getName(), "Alice");
    EXPECT_EQ(customer.getPhone(), "123-456-7890");
}

// Тест отображения клиента
TEST(CustomerTest, DisplayCustomer) {
    Customer customer("Bob", "987-654-3210");
    testing::internal::CaptureStdout();
    customer.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Customer: Bob, Phone: 987-654-3210\n");
}
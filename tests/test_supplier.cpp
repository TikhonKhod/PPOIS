#include <gtest/gtest.h>
#include "Supplier.h"

TEST(SupplierTest, TestGetDetails) {
    Supplier supplier("Best Supplier", "123-456", "New York");
    EXPECT_EQ(supplier.getName(), "Best Supplier");
    EXPECT_EQ(supplier.getContact(), "123-456");
    EXPECT_EQ(supplier.getLocation(), "New York");
}
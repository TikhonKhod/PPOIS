#include <gtest/gtest.h>
#include "../realization/Table.h"

// Тест резервирования столика
TEST(TableTest, TableReserve) {
    Table table(1, 4);
    EXPECT_FALSE(table.isReserved());
    table.reserve();
    EXPECT_TRUE(table.isReserved());
}

// Тест освобождения столика
TEST(TableTest, TableFree) {
    Table table(1, 4);
    table.reserve();
    table.free();
    EXPECT_FALSE(table.isReserved());
}
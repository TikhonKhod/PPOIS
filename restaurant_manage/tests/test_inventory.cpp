#include <gtest/gtest.h>
#include "../realization/Inventory.h"

// Тест добавления предметов
TEST(InventoryTest, AddItems) {
    Inventory inventory;
    inventory.addItem("Tomato", 10);
    EXPECT_EQ(inventory.checkStock("Tomato"), 10);
}

// Тест использования предметов
TEST(InventoryTest, UseItems) {
    Inventory inventory;
    inventory.addItem("Tomato", 10);
    inventory.useItem("Tomato", 5);
    EXPECT_EQ(inventory.checkStock("Tomato"), 5);
}

// Тест исключения при недостатке запаса
TEST(InventoryTest, UseItemsInsufficientStock) {
    Inventory inventory;
    inventory.addItem("Tomato", 5);
    EXPECT_THROW(inventory.useItem("Tomato", 10), std::runtime_error);
}

// Тест отображения инвентаря
TEST(InventoryTest, DisplayInventory) {
    Inventory inventory;
    inventory.addItem("Tomato", 10);
    inventory.addItem("Onion", 5);

    testing::internal::CaptureStdout();
    inventory.displayInventory();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Tomato: 10"), std::string::npos);
    EXPECT_NE(output.find("Onion: 5"), std::string::npos);
}
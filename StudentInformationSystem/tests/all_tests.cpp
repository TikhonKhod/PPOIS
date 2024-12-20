#include <gtest/gtest.h>

// Подключаем тесты для всех классов


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

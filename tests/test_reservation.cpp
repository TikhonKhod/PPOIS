#include <gtest/gtest.h>
#include "../sipipi/Reservation.h"

// Тест создания бронирования
TEST(ReservationTest, CreateReservation) {
    Table table(1, 4);
    Customer customer("Alice", "123-456-7890");
    Reservation reservation(&table, &customer);

    EXPECT_EQ(reservation.getTable()->getId(), 1);
    EXPECT_EQ(reservation.getCustomer()->getName(), "Alice");
    EXPECT_TRUE(reservation.getTable()->isReserved());
}

// Тест освобождения бронирования
TEST(ReservationTest, DeleteReservation) {
    Table table(1, 4);
    Customer customer("Alice", "123-456-7890");

    {
        Reservation reservation(&table, &customer);
        EXPECT_TRUE(table.isReserved());
    }

    EXPECT_FALSE(table.isReserved());
}
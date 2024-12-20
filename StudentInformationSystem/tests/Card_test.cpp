#include <gtest/gtest.h>
#include "../realization/Card.h"

TEST(CardTest, TransferFundsTest) {
    Card fromCard("1111-2222-3333-4444", 500.0);
    Card toCard("5555-6666-7777-8888", 100.0);
    
    EXPECT_TRUE(fromCard.transferFunds(toCard, 200.0));
    EXPECT_EQ(fromCard.getBalance(), 300.0);
    EXPECT_EQ(toCard.getBalance(), 300.0);
}

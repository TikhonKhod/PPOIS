#include <gtest/gtest.h>
#include "../realization/BankAccount.h"

TEST(BankAccountTest, TransferFundsTest) {
    BankAccount fromAccount("123456789", 500.0);
    BankAccount toAccount("987654321", 100.0);
    
    EXPECT_TRUE(fromAccount.transferFunds(toAccount, 200.0));
    EXPECT_EQ(fromAccount.getBalance(), 300.0);
    EXPECT_EQ(toAccount.getBalance(), 300.0);
}

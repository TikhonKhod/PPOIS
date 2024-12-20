#include <gtest/gtest.h>
#include "../realization/Payment.h"
#include "../realization/BankAccount.h"
#include "../realization/Student.h"

TEST(PaymentTest, MakePaymentTest) {
    BankAccount fromAccount("12345", 500.0);
    BankAccount toAccount("54321", 100.0);
    Student student("John Doe", 12345, Address("Main St", "New York", "10001"));
    Payment payment(200.0, "2024-12-15", &fromAccount, &student);
    
    EXPECT_TRUE(payment.makePayment(200.0, fromAccount, toAccount));
    EXPECT_EQ(fromAccount.getBalance(), 300.0);
    EXPECT_EQ(toAccount.getBalance(), 300.0);
}

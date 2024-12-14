#include <gtest/gtest.h>
#include "../sipipi/Payment.h"

TEST(PaymentTest, PaymentDetails) {
    Payment p(100.50, "card");
    EXPECT_EQ(p.getAmount(), 100.50);
    EXPECT_EQ(p.getMethod(), "card");
}
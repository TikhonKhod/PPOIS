#include <gtest/gtest.h>
#include "../realization/Adress.h"

TEST(AddressTest, FullAddressTest) {
    Address address("Main St", "New York", "10001");
    EXPECT_EQ(address.getFullAddress(), "Main St, New York, 10001");
}

#include <gtest/gtest.h>
#include "../sipipi/Restaurant.h"
#include "../sipipi/Table.h"
#include "../sipipi/Employee.h"

TEST(RestaurantTest, AddTable) {
    Restaurant r("Testaurant");
    Table t(1, 4);
    r.addTable(t);
}

TEST(RestaurantTest, HireEmployee) {
    Restaurant r("Testaurant");
    Employee e("John", 3000);
    r.hireEmployee(&e);
}
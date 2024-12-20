#include <gtest/gtest.h>
#include "../realization/Restaurant.h"
#include "../realization/Table.h"
#include "../realization/Employee.h"

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
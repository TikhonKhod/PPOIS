#pragma once
#include "Dish.h"
#include "Customer.h"
#include <vector>

class Order {
private:
    std::vector<Dish> dishes;
    Customer *customer;

public:
    Order(Customer *customer);
    void addDish(const Dish &dish);
    void displayOrder() const;
    double calculateTotal() const;
    Customer *getCustomer() const;
};

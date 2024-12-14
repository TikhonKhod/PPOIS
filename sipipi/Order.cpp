#include "Order.h"
#include <iostream>

Order::Order(Customer *customer) : customer(customer) {}

void Order::addDish(const Dish &dish) {
    dishes.push_back(dish);
}

void Order::displayOrder() const {
    std::cout << "Order for " << customer->getName() << ":" << std::endl;
    for (const auto &dish : dishes) {
        dish.display();
    }
}

double Order::calculateTotal() const {
    double total = 0;
    for (const auto &dish : dishes) {
        total += dish.getPrice();
    }
    return total;
}

Customer *Order::getCustomer() const {
    return customer;
}
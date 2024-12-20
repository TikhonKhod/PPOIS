#include "Bill.h"
#include <iostream>

Bill::Bill(Order *order) : order(order) {}

double Bill::calculateTotal() const {
    return order->calculateTotal();
}

void Bill::printBill() const {
    std::cout << "Bill for " << order->getCustomer()->getName() << ":" << std::endl;
    order->displayOrder();
    std::cout << "Total: $" << calculateTotal() << std::endl;
}
#pragma once
#include "Order.h"

class Bill {
private:
    Order *order;

public:
    Bill(Order *order);
    double calculateTotal() const;
    void printBill() const;
};


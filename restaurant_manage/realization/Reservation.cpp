#include "Reservation.h"
#include <iostream>

Reservation::Reservation(Table *table, Customer *customer)
    : table(table), customer(customer) {
    table->reserve();
}

Reservation::~Reservation() {
    table->free();
}

Table *Reservation::getTable() const { return table; }
Customer *Reservation::getCustomer() const { return customer; }

void Reservation::display() const {
    std::cout << "Reservation: Table " << table->getId() 
              << " reserved for " << customer->getName() << std::endl;
}
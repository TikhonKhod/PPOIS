#include "Waiter.h"
#include <iostream>

Waiter::Waiter(std::string name, double salary, int tablesAssigned)
    : Employee(name, salary), tablesAssigned(tablesAssigned) {}

int Waiter::getTablesAssigned() const {
    return tablesAssigned;
}

void Waiter::takeOrder(const std::string &orderDetails) const {
    std::cout << name << " is taking the order: " << orderDetails << std::endl;
}

void Waiter::display() const {
    Employee::display();
    std::cout << "Tables Assigned: " << tablesAssigned << std::endl;
}
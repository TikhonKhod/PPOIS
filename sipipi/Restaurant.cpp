#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant(const std::string& name) : name(name) {}

void Restaurant::addTable(const Table& table) {
    tables.push_back(table);
}

void Restaurant::hireEmployee(Employee* employee) {
    staff.push_back(employee);
}

void Restaurant::displayMenu() const {
    menu.displayMenu();
}

const Inventory& Restaurant::getInventory() const {
    return inventory;
}
#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name, std::string phone) : name(name), phone(phone) {}

std::string Customer::getName() const { return name; }
std::string Customer::getPhone() const { return phone; }

void Customer::display() const {
    std::cout << "Customer: " << name << ", Phone: " << phone << std::endl;
}
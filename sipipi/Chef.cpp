#include "Chef.h"
#include <iostream>

Chef::Chef(std::string name, double salary, int yearsOfExperience)
    : Employee(name, salary), yearsOfExperience(yearsOfExperience) {}

int Chef::getYearsOfExperience() const {
    return yearsOfExperience;
}

void Chef::prepareDish(const std::string &dishName) const {
    std::cout << name << " is preparing the dish: " << dishName << std::endl;
}

void Chef::display() const {
    Employee::display();
    std::cout << "Experience: " << yearsOfExperience << " years" << std::endl;
}
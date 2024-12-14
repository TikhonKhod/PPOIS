#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, double salary) : name(name), salary(salary) {}

void Employee::display() const {
    std::cout << "Employee: " << name << ", Salary: $" << salary << std::endl;
}

double Employee::getSalary() const {
    return salary;
}
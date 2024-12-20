#pragma once
#include <string>

class Employee {
protected:
    std::string name;
    double salary;

public:
    Employee(std::string name, double salary);
    virtual void display() const;
    double getSalary() const;
};


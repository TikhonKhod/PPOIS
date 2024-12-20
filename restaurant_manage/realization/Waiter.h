#pragma once
#include "Employee.h"

class Waiter : public Employee {
private:
    int tablesAssigned;

public:
    Waiter(std::string name, double salary, int tablesAssigned);
    int getTablesAssigned() const;
    void takeOrder(const std::string &orderDetails) const;
    void display() const override;
};

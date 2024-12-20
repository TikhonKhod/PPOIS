#pragma once
#include "Employee.h"

class Chef : public Employee {
private:
    int yearsOfExperience;

public:
    Chef(std::string name, double salary, int yearsOfExperience);
    int getYearsOfExperience() const;
    void prepareDish(const std::string &dishName) const;
    void display() const override;
};


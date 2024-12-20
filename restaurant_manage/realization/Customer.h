#pragma once

#include <string>

class Customer {
private:
    std::string name;
    std::string phone;

public:
    Customer(std::string name, std::string phone);
    std::string getName() const;
    std::string getPhone() const;
    void display() const;
};
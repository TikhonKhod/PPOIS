#pragma once
#include <string>

class Payment {
private:
    double amount;
    std::string method; // "cash", "card", etc.

public:
    Payment(double amount, const std::string& method);
    double getAmount() const;
    std::string getMethod() const;
};


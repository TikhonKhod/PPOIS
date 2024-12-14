#include "LoyaltyProgram.h"
#include <iostream>

void LoyaltyProgram::addPoints(const std::string& customer, int points) {
    customerPoints[customer] += points;
}

int LoyaltyProgram::getPoints(const std::string& customer) const {
    auto it = customerPoints.find(customer);
    if (it != customerPoints.end()) {
        return it->second;
    }
    return 0;
}

void LoyaltyProgram::displayAllPoints() const {
    for (const auto& entry : customerPoints) {
        std::cout << entry.first << ": " << entry.second << " points" << std::endl;
    }
}
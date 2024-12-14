#pragma once
#include <string>
#include <unordered_map>

class LoyaltyProgram {
private:
    std::unordered_map<std::string, int> customerPoints;

public:
    void addPoints(const std::string& customer, int points);
    int getPoints(const std::string& customer) const;
    void displayAllPoints() const;
};


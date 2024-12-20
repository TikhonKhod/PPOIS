#pragma once

#include <string>

class Card {
private:
    std::string cardNumber;
    double balance;

public:
    Card(std::string cardNumber, double balance);
    bool transferFunds(Card& toCard, double amount);
    double getBalance() const;
};

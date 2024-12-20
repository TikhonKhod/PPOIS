#include "Card.h"

Card::Card(std::string cardNumber, double balance) : cardNumber(cardNumber), balance(balance) {}

bool Card::transferFunds(Card& toCard, double amount) {
    if (balance >= amount) {
        balance -= amount;
        toCard.balance += amount;
        return true;
    }
    return false;
}

double Card::getBalance() const {
    return balance;
}

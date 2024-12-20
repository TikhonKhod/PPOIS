#include "BankAccount.h"

BankAccount::BankAccount(std::string accountNumber, double balance)
    : accountNumber(accountNumber), balance(balance) {}

bool BankAccount::transferFunds(BankAccount& toAccount, double amount) {
    if (balance >= amount) {
        balance -= amount;
        toAccount.balance += amount;
        return true;
    }
    return false;
}

double BankAccount::getBalance() const {
    return balance;
}

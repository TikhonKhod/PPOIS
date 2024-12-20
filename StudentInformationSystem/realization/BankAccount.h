#pragma once

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accountNumber, double balance);
    bool transferFunds(BankAccount& toAccount, double amount);
    double getBalance() const;
};

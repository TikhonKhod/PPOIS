#pragma once
#include <string>
#include "BankAccount.h"
#include "Student.h"
class Student;
class Payment {
private:
    double amount;
    std::string paymentDate;
    BankAccount* bankAccount;
    Student* student;
 std::string date;
public:
    Payment(double amount, std::string paymentDate, BankAccount* bankAccount, Student* student);
    double getAmount() const;
    std::string getPaymentDate() const;
    std::string getDate() const { return date; }
    bool makePayment(double amount, BankAccount& fromAccount, BankAccount& toAccount);
    void setStudent(Student* student);
};

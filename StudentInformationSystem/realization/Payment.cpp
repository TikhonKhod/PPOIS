#include "Payment.h"
#include "BankAccount.h"
#include "Student.h"

Payment::Payment(double amount, std::string paymentDate, BankAccount* bankAccount, Student* student)
    : amount(amount), paymentDate(paymentDate), bankAccount(bankAccount), student(student) {}

double Payment::getAmount() const {
    return amount;
}

std::string Payment::getPaymentDate() const {
    return paymentDate;
}

bool Payment::makePayment(double amount, BankAccount& fromAccount, BankAccount& toAccount) {
    return fromAccount.transferFunds(toAccount, amount);
}

void Payment::setStudent(Student* student) {
    this->student = student;
}

#include "Payment.h"

Payment::Payment(double amount, const std::string& method) : amount(amount), method(method) {}

double Payment::getAmount() const {
    return amount;
}

std::string Payment::getMethod() const {
    return method;
}
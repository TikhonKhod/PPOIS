#include "Scholarship.h"
#include "Student.h"

Scholarship::Scholarship(const std::string& name, double amount)
    : scholarshipName(name), amount(amount), awarded(false), recipient(nullptr) {}

bool Scholarship::assignScholarship(Student* student) {
    if (!awarded) {
        recipient = student;
        awarded = true;
        return true;
    }
    return false;
}

bool Scholarship::isAwarded() const {
    return awarded;
}

double Scholarship::getAmount() const {
    return amount;
}

std::string Scholarship::getScholarshipName() const {
    return scholarshipName;
}

Student* Scholarship::getRecipient() const {
    return recipient;
}

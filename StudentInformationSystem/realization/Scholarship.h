#pragma once
#include <string>
#include "Student.h"

class Scholarship {
private:
    std::string scholarshipName;
    double amount;
    bool awarded;
    Student* recipient;

public:
    Scholarship(const std::string& name, double amount);
    bool assignScholarship(Student* student);
    bool isAwarded() const;
    double getAmount() const;
    std::string getScholarshipName() const;
    Student* getRecipient() const;
};


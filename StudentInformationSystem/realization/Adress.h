#pragma once

#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string postalCode;

public:
    Address(string street, string city, string postalCode);
    string getFullAddress() const;
};


#include "Adress.h"

Address::Address(string street, string city, string postalCode)
    : street(street), city(city), postalCode(postalCode) {}

string Address::getFullAddress() const {
    return street + ", " + city + ", " + postalCode;
}

#include "Supplier.h"

Supplier::Supplier(std::string name, std::string contact, std::string location)
    : name(name), contact(contact), location(location) {}

std::string Supplier::getName() const {
    return name;
}

std::string Supplier::getContact() const {
    return contact;
}

std::string Supplier::getLocation() const {
    return location;
}
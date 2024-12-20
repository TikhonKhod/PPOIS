#pragma once
#include <string>

class Supplier {
public:
    Supplier(std::string name, std::string contact, std::string location);
    std::string getName() const;
    std::string getContact() const;
    std::string getLocation() const;

private:
    std::string name;
    std::string contact;
    std::string location;
};
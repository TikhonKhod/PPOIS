#include "Professor.h"

Professor::Professor(string name, string department)
    : name(name), department(department) {}

string Professor::getName() const {
    return name;
}

string Professor::getDepartment() const {
    return department;
}
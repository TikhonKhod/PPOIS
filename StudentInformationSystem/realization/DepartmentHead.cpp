#include "DepartmentHead.h"

DepartmentHead::DepartmentHead(std::string name, std::string department)
    : name(name), department(department) {}

std::string DepartmentHead::getName() const {
    return name;
}

std::string DepartmentHead::getDepartment() const {
    return department;
}

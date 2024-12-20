#pragma once

#include <string>

class DepartmentHead {
private:
    std::string name;
    std::string department;

public:
    DepartmentHead(std::string name, std::string department);
    std::string getName() const;
    std::string getDepartment() const;
};



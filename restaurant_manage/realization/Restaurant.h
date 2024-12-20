#pragma once
#include <vector>
#include <string>
#include "Menu.h"
#include "Table.h"
#include "Employee.h"
#include "Inventory.h"

class Restaurant {
private:
    std::string name;
    std::vector<Table> tables;
    Menu menu;
    std::vector<Employee*> staff;
    Inventory inventory;

public:
    Restaurant(const std::string& name);
    void addTable(const Table& table);
    void hireEmployee(Employee* employee);
    void displayMenu() const;
    const Inventory& getInventory() const;
};


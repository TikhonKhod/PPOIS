#pragma once
#include <string>
#include <map>

class Inventory {
private:
    std::map<std::string, int> items;

public:
    void addItem(const std::string &item, int quantity);
    void useItem(const std::string &item, int quantity);
    int checkStock(const std::string &item) const;
    void displayInventory() const;
};


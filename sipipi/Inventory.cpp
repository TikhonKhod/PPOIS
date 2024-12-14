#include "Inventory.h"
#include <iostream>
#include <stdexcept>

void Inventory::addItem(const std::string &item, int quantity) {
    items[item] += quantity;
}

void Inventory::useItem(const std::string &item, int quantity) {
    if (items[item] < quantity) {
        throw std::runtime_error("Not enough stock!");
    }
    items[item] -= quantity;
}

int Inventory::checkStock(const std::string &item) const {
    if (items.find(item) != items.end()) {
        return items.at(item);
    }
    return 0;
}

void Inventory::displayInventory() const {
    for (const auto &entry : items) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
}
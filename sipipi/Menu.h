#pragma once
#include "Dish.h"
#include <vector>

class Menu {
private:
    std::vector<Dish> dishes;

public:
    void addDish(const Dish &dish);
    void removeDish(const std::string &dishName);
    void displayMenu() const;
    std::vector<Dish> getDishes() const;
};


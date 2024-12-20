#include "Menu.h"
#include <algorithm>
#include <iostream>

void Menu::addDish(const Dish &dish) {
    dishes.push_back(dish);
}

void Menu::removeDish(const std::string &dishName) {
    dishes.erase(
        std::remove_if(dishes.begin(), dishes.end(),
                       [&dishName](const Dish &d) { return d.getName() == dishName; }),
        dishes.end());
}

void Menu::displayMenu() const {
    std::cout << "Menu:" << std::endl;
    for (const auto &dish : dishes) {
        dish.display();
    }
}

std::vector<Dish> Menu::getDishes() const {
    return dishes;
}
#include "Dish.h"

Dish::Dish(std::string name, double price, std::vector<std::string> ingredients)
    : name(name), price(price), ingredients(ingredients) {}

std::string Dish::getName() const { return name; }
double Dish::getPrice() const { return price; }
std::vector<std::string> Dish::getIngredients() const { return ingredients; }

void Dish::display() const {
    std::cout << "Dish: " << name << ", Price: $" << price << std::endl;
}
#pragma once
#include <string>
#include <vector>
#include <iostream>

class Dish {
private:
    std::string name;
    double price;
    std::vector<std::string> ingredients;
    std::string category;
    int calories;
public:
    Dish(std::string name, double price, std::vector<std::string> ingredients);
    std::string getName() const;
    double getPrice() const;
    std::vector<std::string> getIngredients() const;
    void display() const;
};


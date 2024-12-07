#pragma once

#include <iostream>
#include <vector>
#include <string>

class RubikCube {
public:
    std::vector<std::vector<char>> faces; 
    const std::vector<char> colors = { 'R', 'G', 'B', 'Y', 'O', 'W' }; 

    RubikCube(); 

    void initializeCube(); 
    void shuffleCube(); 
    void randomizeColors(); 
    void loadFromFile(const std::string& filename); 
    void rotateFace(int faceIndex); 
    void rotateFace(char face); 
    bool isSolved() const; 
    void printCube() const; 
    const std::vector<char>& getColors() const {
        return colors;
    }
};

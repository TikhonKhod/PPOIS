#include "RubikCube.h"
#include <fstream>
#include <algorithm>
#include <random>
#include <cctype>

void RubikCube::initializeCube() {
    faces.clear(); 
    for (int i = 0; i < 6; ++i) {
        faces.push_back(std::vector<char>(9, colors[i]));
    }
}

RubikCube::RubikCube() {
    initializeCube(); 
}

void RubikCube::shuffleCube() {
    std::random_device rd;
    std::mt19937 g(rd());
    for (int i = 0; i < 20; ++i) { 
        int faceIndex = g() % 6;
        rotateFace(faceIndex);
    }
}

void RubikCube::randomizeColors() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::vector<char> allColors;

    for (char color : colors) {
        allColors.insert(allColors.end(), 9, color);
    }
    std::shuffle(allColors.begin(), allColors.end(), g);

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 9; ++j) {
            faces[i][j] = allColors[i * 9 + j];
        }
    }
}

void RubikCube::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (!(file >> faces[i][j])) {
                std::cerr << "Error reading file!" << std::endl;
                return;
            }
        }
    }

    file.close();
}

void RubikCube::rotateFace(int faceIndex) {
   
    std::vector<char> origFaceColors = faces[faceIndex];
    faces[faceIndex][0] = origFaceColors[6];
    faces[faceIndex][1] = origFaceColors[3];
    faces[faceIndex][2] = origFaceColors[0];
    faces[faceIndex][3] = origFaceColors[7];
    faces[faceIndex][4] = origFaceColors[4];
    faces[faceIndex][5] = origFaceColors[1];
    faces[faceIndex][6] = origFaceColors[8];
    faces[faceIndex][7] = origFaceColors[5];
    faces[faceIndex][8] = origFaceColors[2];


    if (faceIndex == 0) {
        char origFrontColors[3] = { faces[1][0], faces[1][1], faces[1][2] };
        faces[1][0] = faces[4][0];
        faces[1][1] = faces[4][1];
        faces[1][2] = faces[4][2];
        faces[4][0] = faces[3][8];
        faces[4][1] = faces[3][5];
        faces[4][2] = faces[3][2];
        faces[3][8] = faces[2][6];
        faces[3][5] = faces[2][7];
        faces[3][2] = faces[2][8];
        faces[2][6] = tempFront[0];
        faces[2][7] = origFrontColors[1];
        faces[2][8] = origFrontColors[2];
    }
}

void RubikCube::rotateFace(char face) {
    switch (std::toupper(face)) {
        case 'U': rotateFace(0); break;
        case 'D': rotateFace(1); break;
        case 'L': rotateFace(2); break;
        case 'R': rotateFace(3); break;
        case 'F': rotateFace(4); break;
        case 'B': rotateFace(5); break;
        default: std::cout << "Invalid command!" << std::endl; break;
    }
}

bool RubikCube::isSolved() const {
    for (const auto& face : faces) {
        if (!std::all_of(face.begin(), face.end(), [&](char c) { return c == face[0]; })) {
            return false;
        }
    }
    return true;
}

void RubikCube::printCube() const {
    for (int i = 0; i < 6; ++i) {
        std::cout << "Face " << i << ": ";
        for (int j = 0; j < 9; ++j) {
            std::cout << faces[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

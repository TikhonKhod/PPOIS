#include "RubikCube.h"
#include <gtest/gtest.h>
#include <fstream>
#include <algorithm>

TEST(RubikCubeTest, InitializationTest) {
    RubikCube cube;

    for (int i = 0; i < 6; ++i) {
        char color = cube.getColors()[i];
        for (int j = 0; j < 9; ++j) {
            EXPECT_EQ(cube.faces[i][j], color);
        }
    }
}

TEST(RubikCubeTest, ShuffleTest) {
    RubikCube cube;
    auto initialFaces = cube.faces;

    cube.shuffleCube();

    EXPECT_NE(initialFaces, cube.faces); 
}

TEST(RubikCubeTest, RandomizeColorsTest) {
    RubikCube cube;
    cube.randomizeColors();

    std::vector<int> colorCounts(6, 0);
    for (const auto& face : cube.faces) {
        for (char color : face) {
            auto it = std::find(cube.getColors().begin(), cube.getColors().end(), color);
            ASSERT_NE(it, cube.getColors().end());
            ++colorCounts[std::distance(cube.getColors().begin(), it)];
        }
    }

    for (int count : colorCounts) {
        EXPECT_EQ(count, 9);
    }
}

TEST(RubikCubeTest, RotateFaceTest) {
    RubikCube cube;
    auto initialTop = cube.faces[0];

    cube.rotateFace('U');

    EXPECT_EQ(cube.faces[0][0], initialTop[6]);
    EXPECT_EQ(cube.faces[0][1], initialTop[3]);
    EXPECT_EQ(cube.faces[0][2], initialTop[0]);
    EXPECT_EQ(cube.faces[0][3], initialTop[7]);
    EXPECT_EQ(cube.faces[0][4], initialTop[4]);
    EXPECT_EQ(cube.faces[0][5], initialTop[1]);
    EXPECT_EQ(cube.faces[0][6], initialTop[8]);
    EXPECT_EQ(cube.faces[0][7], initialTop[5]);
    EXPECT_EQ(cube.faces[0][8], initialTop[2]);
}

TEST(RubikCubeTest, IsSolvedTest) {
    RubikCube cube;

    EXPECT_TRUE(cube.isSolved());

    cube.shuffleCube();
    EXPECT_FALSE(cube.isSolved());
}

TEST(RubikCubeTest, LoadFromFileTest) {
    RubikCube cube;

    std::ofstream file("test_cube.txt");
    file << "R R R R R R R R R\n";
    file << "G G G G G G G G G\n";
    file << "B B B B B B B B B\n";
    file << "Y Y Y Y Y Y Y Y Y\n";
    file << "O O O O O O O O O\n";
    file << "W W W W W W W W W\n";
    file.close();

    cube.loadFromFile("test_cube.txt");

    EXPECT_EQ(cube.faces[0], std::vector<char>(9, 'R'));
    EXPECT_EQ(cube.faces[1], std::vector<char>(9, 'G'));
    EXPECT_EQ(cube.faces[2], std::vector<char>(9, 'B'));
    EXPECT_EQ(cube.faces[3], std::vector<char>(9, 'Y'));
    EXPECT_EQ(cube.faces[4], std::vector<char>(9, 'O'));
    EXPECT_EQ(cube.faces[5], std::vector<char>(9, 'W'));
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();                
}
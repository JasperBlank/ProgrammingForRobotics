#include <iostream>
#include <array>

const size_t mazeRows = 12;
const size_t mazeColumns = 12;
void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> maze);
std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > *mazepointer);
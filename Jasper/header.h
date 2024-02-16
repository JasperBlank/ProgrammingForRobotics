//=============================================
// Filename : header.h
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include <iostream>
#include <array>

enum class Direction {
    
  //Defining the 4 possible directions
  North, //assigned 0
  East, //assigned 1
  South, //assigned 2
  West, //assigned 3
  
};

const size_t mazeRows = 12;
const size_t mazeColumns = 12;
void printMaze(int x, int y, std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer);
std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > maze);
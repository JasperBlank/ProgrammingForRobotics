<<<<<<< HEAD
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
void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> maze);
std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > *mazepointer);

=======
//=============================================
// Filename : header.h
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================
#include <iostream>
#include <array>

<<<<<<< HEAD
const size_t rows = 12;
const size_t columns = 12;
void printMaze(std::array<std::array<char, columns>, rows> maze);
>>>>>>> 57f886b (implemented printMaze function)
=======
const size_t mazeRows = 12;
const size_t mazeColumns = 12;
<<<<<<< HEAD
void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> maze);
std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > maze);
>>>>>>> f5e49e6 (added findStart function)
=======
void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer);
std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > maze);
>>>>>>> bf9036b (final version)

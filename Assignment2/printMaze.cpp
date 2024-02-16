//=============================================
// Filename : printMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> maze){
    for (size_t row = 0; row < mazeRows; row++){
            for (size_t column = 0; column < mazeColumns; column++){
                std::cout << maze[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}
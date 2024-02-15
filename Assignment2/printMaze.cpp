//=============================================
// Filename : printMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include "header.h"

void printMaze(std::array<std::array<char, columns>, rows> maze){
    for (size_t row = 0; row < rows; row++){
            for (size_t column = 0; column < columns; column++){
                std::cout << maze[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}
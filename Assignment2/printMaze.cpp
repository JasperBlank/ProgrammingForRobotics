//=============================================
// Filename : printMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer){
    //(*mazepointer)[y][x] = 'x';
    for (size_t row = 0; row < mazeRows; row++){ // run through rows
            for (size_t column = 0; column < mazeColumns; column++){ // run through columns
                std::cout << (*mazepointer)[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}
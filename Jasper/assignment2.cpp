//=============================================
// Filename : assignment2.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

// change to class format
// add headers

#include <iostream>
#include <array>
#include "header.h"

void traverseMaze(int x, int y, Direction direction, std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer);




int main(){ // change to class format


    std::array<std::array< char, mazeColumns>, mazeRows> maze{{
        {'#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','.','.','.','#','.','.','.','.','.','.','#'},
        {'.','.','#','.','#','.','#','#','#','#','.','#'},
        {'#','#','#','.','#','.','.','.','.','#','.','#'},
        {'#','.','.','.','.','#','#','#','.','#','.','x'},
        {'#','#','#','#','.','#','.','#','.','#','.','#'},
        {'#','.','.','#','.','#','.','#','.','#','.','#'},
        {'#','#','.','#','.','#','.','#','.','#','.','#'},
        {'#','.','.','.','.','.','.','.','.','#','.','#'},
        {'#','#','#','#','#','#','.','#','#','#','.','#'},
        {'#','.','.','.','.','.','.','.','.','.','.','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#'}
    }};
   
    int startx = findStart(maze)[0];
    int starty = findStart(maze)[1];

    std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer = &maze;

    Direction CurrentDirection = Direction::North;

    traverseMaze(startx, starty, CurrentDirection, mazepointer);
}







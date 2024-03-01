//=============================================
// Filename : test.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include <iostream>
#include "header.h"

<<<<<<<< HEAD:Assignment2/generateMaze.cpp


void generateMaze(){ // include input maze and adapt variables to a class format
    std::array<std::array< char, mazeColumns>, mazeRows> maze{{
========
int main(void){
    std::array<std::array<char, mazeColumns>, mazeRows> testMaze{{ // creates the maze
>>>>>>>> origin/lucas:Assignment2/assignment2.cpp
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
    std::array<std::array<char, 12>, 12> *testPointer = &testMaze;
    printMaze(testPointer);
    std::cout << findStart(testMaze)[0] << " " << findStart(testMaze)[1] << std::endl;
}
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
<<<<<<< HEAD
    std::array<std::array<char, columns>, rows> test_maze{{ // creates the maze
>>>>>>>> 57f886b (implemented printMaze function):Assignment2/assignment2.cpp
=======
    std::array<std::array<char, mazeColumns>, mazeRows> testMaze{{ // creates the maze
>>>>>>>> origin/lucas:Assignment2/assignment2.cpp
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445
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
<<<<<<< HEAD
    printMaze(test_maze);
=======
    std::array<std::array<char, 12>, 12> *testPointer = &testMaze;
    printMaze(testPointer);
    std::cout << findStart(testMaze)[0] << " " << findStart(testMaze)[1] << std::endl;
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445
}
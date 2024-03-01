//=============================================
<<<<<<< HEAD
// Filename : assignment2.cpp
=======
// Filename : test.cpp
>>>>>>> origin/lucas
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

<<<<<<< HEAD
// change to class format
// add headers

#include <iostream>
#include <array>
#include "header.h"

void traverseMaze(int x, int y, Direction direction, std::array<std::array<char, 12>, 12>* mazepointer);




int main(){ // change to class format


    std::array<std::array< char, mazeColumns>, mazeRows> maze{{
=======
#include <iostream>
#include "header.h"

<<<<<<<< HEAD:Assignment2/generateMaze.cpp


void generateMaze(){ // include input maze and adapt variables to a class format
    std::array<std::array< char, mazeColumns>, mazeRows> maze{{
========
int main(void){
    std::array<std::array<char, mazeColumns>, mazeRows> testMaze{{ // creates the maze
>>>>>>>> origin/lucas:Assignment2/assignment2.cpp
>>>>>>> origin/lucas
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

    for (size_t row = 0; row < mazeRows; row++){
        for (size_t column = 0; column < mazeColumns; column++){
            std::cout << maze[row][column] << " ";
        }
        std::cout << std::endl;
    }

    int startx = 10;
    int starty = 4;
    std::array<std::array<char, 12>, 12>* mazepointer = &maze;

    Direction CurrentDirection = Direction::North;

    traverseMaze(startx, starty, CurrentDirection, mazepointer);

}






=======
    std::array<std::array<char, 12>, 12> *testPointer = &testMaze;
    printMaze(testPointer);
    std::cout << findStart(testMaze)[0] << " " << findStart(testMaze)[1] << std::endl;
}
>>>>>>> origin/lucas

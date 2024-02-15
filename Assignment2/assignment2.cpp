//=============================================
<<<<<<< HEAD
// Filename : assignment2.cpp
=======
// Filename : test.cpp
>>>>>>> 57f886b (implemented printMaze function)
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
    std::array<std::array<char, columns>, rows> test_maze{{ // creates the maze
>>>>>>>> 57f886b (implemented printMaze function):Assignment2/assignment2.cpp
>>>>>>> 57f886b (implemented printMaze function)
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
    printMaze(test_maze);
}
>>>>>>> 57f886b (implemented printMaze function)

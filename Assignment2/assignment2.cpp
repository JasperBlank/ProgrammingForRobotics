//=============================================
<<<<<<< HEAD
// Filename : assignment2.cpp
=======
// Filename : test.cpp
<<<<<<< HEAD
>>>>>>> 57f886b (implemented printMaze function)
=======
>>>>>>> origin/lucas
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445
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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    std::array<std::array<char, columns>, rows> test_maze{{ // creates the maze
>>>>>>>> 57f886b (implemented printMaze function):Assignment2/assignment2.cpp
>>>>>>> 57f886b (implemented printMaze function)
=======
    std::array<std::array<char, mazeColumns>, mazeRows> test_maze{{ // creates the maze
>>>>>>> f5e49e6 (added findStart function)
=======
    std::array<std::array<char, mazeColumns>, mazeRows> testMaze{{ // creates the maze
>>>>>>> bf9036b (final version)
=======
    std::array<std::array<char, mazeColumns>, mazeRows> testMaze{{ // creates the maze
>>>>>>>> origin/lucas:Assignment2/assignment2.cpp
>>>>>>> origin/lucas
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445

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
<<<<<<< HEAD
    printMaze(test_maze);
<<<<<<< HEAD
}
>>>>>>> 57f886b (implemented printMaze function)
=======
    std::cout << findStart(test_maze)[0] << " " << findStart(test_maze)[1] << std::endl;
}
>>>>>>> f5e49e6 (added findStart function)
=======
=======
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445
    std::array<std::array<char, 12>, 12> *testPointer = &testMaze;
    printMaze(testPointer);
    std::cout << findStart(testMaze)[0] << " " << findStart(testMaze)[1] << std::endl;
}
<<<<<<< HEAD
>>>>>>> bf9036b (final version)
=======
>>>>>>> origin/lucas
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445

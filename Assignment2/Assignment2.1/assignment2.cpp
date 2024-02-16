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

void traverseMaze(int x, int y, int direction, std::array<std::array<char, 12>, 12>* mazepointer);

enum Direction {
  //Defining the 4 possible directions
  North, //assigned 0
  East, //assigned 1
  South, //assigned 2
  West, //assigned 3
};

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

    for (size_t row = 0; row < mazeRows; row++){
        for (size_t column = 0; column < mazeColumns; column++){
            std::cout << maze[row][column] << " ";
        }
        std::cout << std::endl;
    }

    int startx = 10;
    int starty = 4;
    std::array<std::array<char, 12>, 12>* mazepointer = &maze;

    traverseMaze(startx, starty, North, mazepointer);

}


//
int repetitionsofrighthandrule;


void traverseMaze(int x, int y, int CurrentDirection, std::array<std::array<char, 12>, 12>* mazepointer){

    //The code gives a vieuw of the current location and the current direction. This vieuw was really helpful for bug fixing.
    std::cout << "The symbol at " << x << y << " is " << (*mazepointer)[y][x]  << " And the direction is " << CurrentDirection;
    std::cout << std::endl;

    //stops the function if this function is called more than 1000 times, which prevents memory overflow.
    repetitionsofrighthandrule += 1;
    if (repetitionsofrighthandrule > 100){
        std::cout << "test took too long" << std::endl;
    return;
    }

    
    //Showing out of bounds error
    if (x >= 13 || y >= 13 || x < 0 || y < 0){
        std::cout << "Out of bounds error" << std::endl;
    return;
    }

    //A boolean that makes sure only one step is taken before the Maze is drawn again
    bool madestep = false;

    //run North
    if (CurrentDirection == North && madestep == false){
        
        //Check if there is space to the right
        if ((*mazepointer)[y][x+1] != '#'){
            //Change direction to that space
            CurrentDirection = East;
            // Move to that available space
            x = x + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y -1 ][x] != '#'){
            //Move forward
            y = y - 1;

        } else {
            //Turn left if there is no other option
            CurrentDirection = West;
        }
        madestep = true;
    }

    //run East
    if (CurrentDirection == East && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y+1][x] != '#'){
            //Change direction to that space
            CurrentDirection = South;
            // Move to that available space
            y = y + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x + 1] != '#'){
            //Move forward
            x = x + 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = North;
        }
        madestep = true;
    }

    //run South
    if (CurrentDirection == South && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y][x-1] != '#'){
            //Change direction to that space
            CurrentDirection = West;
            // Move to that available space
            x = x - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y +1 ][x] != '#'){
            //Move forward
            y = y + 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = East;
        }

        madestep = true;
    }

    //run west
    if (CurrentDirection == West && madestep == false){

        //Check if there is space to the right
        if ((*mazepointer)[y-1][x] != '#'){
            //Change direction to that space
            CurrentDirection = North;
            // Move to that available space
            y = y - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x - 1] != '#'){
            //Move forward
            x = x - 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = South;
        }

        madestep = true;
        
    }


    //Change the current location to an x on the array
    (*mazepointer)[y][x] = 'x';
    
    // printMaze(maze)
    //printMaze(*mazepointer);

    //Print the array
    for (size_t row = 0; row < mazeRows; row++){
        for (size_t column = 0; column < mazeColumns; column++){
            std::cout << (*mazepointer)[row][column] << " ";
        }
        std::cout << std::endl;
    }
    
    //

    //Ends the program once 
    if (x == 0 && y == 2){
        std::cout << "Found the end of the maze" << std::endl;
    return;
    }
    

    traverseMaze(x, y, CurrentDirection, mazepointer);

}



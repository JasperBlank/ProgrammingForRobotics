#include<iostream>
#include<array>
#include "header.h"




//
int repetitionsofrighthandrule;


void traverseMaze(int x, int y, Direction CurrentDirection, std::array<std::array<char, 12>, 12>* mazepointer){

    //The code gives a vieuw of the current location and the current direction. This vieuw was really helpful for bug fixing.
    std::cout << "The symbol at " << x << "," << y << " is " << (*mazepointer)[y][x];
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
    if (CurrentDirection == Direction::North && madestep == false){
        
        //Check if there is space to the right
        if ((*mazepointer)[y][x+1] != '#'){
            //Change direction to that space
            CurrentDirection = Direction::East;
            // Move to that available space
            x = x + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y -1 ][x] != '#'){
            //Move forward
            y = y - 1;

        } else {
            //Turn left if there is no other option
            CurrentDirection = Direction::West;
        }
        madestep = true;
    }

    //run East
    if (CurrentDirection == Direction::East && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y+1][x] != '#'){
            //Change direction to that space
            CurrentDirection = Direction::South;
            // Move to that available space
            y = y + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x + 1] != '#'){
            //Move forward
            x = x + 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = Direction::North;
        }
        madestep = true;
    }

    //run South
    if (CurrentDirection == Direction::South && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y][x-1] != '#'){
            //Change direction to that space
            CurrentDirection = Direction::West;
            // Move to that available space
            x = x - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y +1 ][x] != '#'){
            //Move forward
            y = y + 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = Direction::East;
        }

        madestep = true;
    }

    //run west
    if (CurrentDirection == Direction::West && madestep == false){

        //Check if there is space to the right
        if ((*mazepointer)[y-1][x] != '#'){
            //Change direction to that space
            CurrentDirection = Direction::North;
            // Move to that available space
            y = y - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x - 1] != '#'){
            //Move forward
            x = x - 1;
        } else {
            //Turn left if there is no other option
            CurrentDirection = Direction::South;
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
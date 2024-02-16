//=============================================
// Filename : traverseMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include<iostream>
#include<array>
#include "header.h"




//
int repetitionsofrighthandrule;


void traverseMaze(int x, int y, Direction CurrentDirection, std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer){

    //The code gives a vieuw of the current location and the current direction. This vieuw was really helpful for bug fixing.
    std::cout << "The symbol at " << x << "," << y << " is " << (*mazepointer)[x][y];
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

    printMaze(x, y, mazepointer);
    
    //

    //Ends the program once 
    if (x == 0 && y == 2){
        std::cout << "Found the end of the maze" << std::endl;
    return;
    }
    

    traverseMaze(x, y, CurrentDirection, mazepointer);

}
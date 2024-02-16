//=============================================
// Filename : assignment2.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

// change to class format
// add headers

#include<iostream>
#include<array>

void Righthandrule(int x, int y, int direction, std::array<std::array<char, 12>, 12>* mazepointer);
int turnleft(int direction);
int turnright(int direction);

const size_t mazeRows {12};
const size_t mazeColumns {12};

enum Directions {
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

    Righthandrule(startx, starty, West, mazepointer);

}



int i;


void Righthandrule(int x, int y, int Direction, std::array<std::array<char, 12>, 12>* mazepointer){

    //The code gives a vieuw of the current location and the current direction. This vieuw was really helpful for bug fixing.
    std::cout << "The symbol at " << x << y << " is " << (*mazepointer)[y][x]  << " And the direction is " << Direction;
    std::cout << std::endl;

    //stops the function if this function is called more than 1000 times, which prevents memory overflow.
    i += 1;
    if (i > 1000){
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
    if (Direction == North && madestep == false){
        
        //Check if there is space to the right
        if ((*mazepointer)[y][x+1] == '.'){
            //Change direction to that space
            Direction = East;
            // Move to that available space
            x = x + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y -1 ][x] == '.'){
            //Move forward
            y = y - 1;

        } else {
            //Turn left if there is no other option
            Direction = West;
        }
        madestep = true;
    }

    //run East
    if (Direction == East && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y+1][x] == '.'){
            //Change direction to that space
            Direction = South;
            // Move to that available space
            y = y + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x + 1] == '.'){
            //Move forward
            x = x + 1;
        } else {
            //Turn left if there is no other option
            Direction = North;
        }
        madestep = true;
    }

    //run South
    if (Direction == South && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y][x-1] == '.'){
            //Change direction to that space
            Direction = West;
            // Move to that available space
            x = x - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y +1 ][x] == '.'){
            //Move forward
            y = y + 1;
        } else {
            //Turn left if there is no other option
            Direction = East;
        }

        madestep = true;
    }

    //run west
    if (Direction == West && madestep == false){

        //Check if there is space to the right
        if ((*mazepointer)[y-1][x] == '.'){
            //Change direction to that space
            Direction = North;
            // Move to that available space
            y = y - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x - 1] == '.'){
            //Move forward
            x = x - 1;
        } else {
            //Turn left if there is no other option
            Direction = South;
        }

        madestep = true;
        
    }
    



    for (size_t row = 0; row < mazeRows; row++){
        for (size_t column = 0; column < mazeColumns; column++){
            
            if (row == y && column == x){std::cout << "X ";
            } else{
            std::cout << (*mazepointer)[row][column] << " ";
            }
        }
        std::cout << std::endl;
    }

    if (x == 0 && y == 2){
        std::cout << "Found the end of the maze" << std::endl;
    return;
    }
    

    Righthandrule(x, y, Direction, mazepointer);

}



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

    Righthandrule(startx, starty, 3, mazepointer);

}



int i;


void Righthandrule(int x, int y, int Direction, std::array<std::array<char, 12>, 12>* mazepointer){

    
    std::cout << "The symbol at " << x << y << " is " << (*mazepointer)[y][x]  << " And the direction is " << Direction;
    std::cout << std::endl;

    int newx;
    int newy;

    i += 1;
    if (i > 5000){
        std::cout << "test took too long" << std::endl;
    return;
    }
    
    newx = x;
    newy = y;

    

    if (x >= 13 || y >= 13 ){
        std::cout << "Out of bounds error" << std::endl;
    return;
    }

    bool madestep = false;

    //run North
    if (Direction == 0 && madestep == false){
        
        //Check if there is space to the right
        if ((*mazepointer)[y][x+1] == '.'){
            //Change direction to that space
            Direction = 1;
            // Move to that available space
            newx = x + 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y -1 ][x] == '.'){
            //Move forward
            newy = y - 1;
            std::cout << "I am moving up North" << std::endl;

        } else {
            //Turn left if there is no other option
            Direction = 3;
        }
        madestep = true;
    }

    //run East
    if (Direction == 1 && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y+1][x] == '.'){
            //Change direction to that space
            Direction = 2;
            // Move to that available space
            newy = y + 1;
            std::cout << "Rotating East to South" << std::endl;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x + 1] == '.'){
            //Move forward
            newx = x + 1;
        } else {
            //Turn left if there is no other option
            Direction = 0;
        }
        madestep = true;
    }

    //run South
    if (Direction == 2 && madestep == false){
        //Check if there is space to the right
        if ((*mazepointer)[y][x-1] == '.'){
            //Change direction to that space
            Direction = 3;
            // Move to that available space
            newx = x - 1;

            //Check if there is space in front
        } else if ((*mazepointer)[y +1 ][x] == '.'){
            //Move forward
            newy = y + 1;
        } else {
            //Turn left if there is no other option
            Direction = 1;
            std::cout << "Rotating back south to East" << std::endl;
        }

        madestep = true;
    }

    //run west
    if (Direction == 3 && madestep == false){

        //Check if there is space to the right
        if ((*mazepointer)[y-1][x] == '.'){
            //Change direction to that space
            Direction = 0;
            // Move to that available space
            newy = y - 1;
            std::cout << "Truning right west to north" << std::endl;

            //Check if there is space in front
        } else if ((*mazepointer)[y][x - 1] == '.'){
            //Move forward
            newx = x - 1;
        } else {
            //Turn left if there is no other option
            Direction = 2;
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
        std::cout << "Found th end of the maze" << std::endl;
    return;
    }

    x = newx;
    y = newy;
    

    Righthandrule(x, y, Direction, mazepointer);

}

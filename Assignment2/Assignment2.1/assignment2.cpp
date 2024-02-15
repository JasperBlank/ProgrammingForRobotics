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

int main(){ // change to class format
    const size_t mazeRows {12};
    const size_t mazeColumns {12};

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
    if (i > 20){
        std::cout << "test took too long" << std::endl;
    return;
    }

    newx = x;
    newy = y;

    if (x == 1 && y == 1){
        std::cout << "Found th end of the maze" << std::endl;
    return;
    }

    if (x >= 13 || y >= 13 ){
        std::cout << "Out of bounds error" << std::endl;
    return;
    }

    //run North
    if (Direction == 0){
        
        //Check if it can turn
        if ((*mazepointer)[y][x+1] == '.'){
        Direction = turnright(Direction);
        //Check if the place in front of it is empty
        }else if ((*mazepointer)[y-1][x] == '.'){
        newy -= 1;
        //Turn if stuck
        }else{
        Direction = turnleft(Direction);
        }
        
    }

    //run East
    if (Direction == 1){


        //Check if it can turn
        if ((*mazepointer)[y+1][x] == '.'){
        Direction = turnright(Direction);
        //Check if the place in front of it is empty
        }else if ((*mazepointer)[y][x+1] == '.'){
        newx += 1;
        //Turn if stuck
        }else{
        Direction = turnleft(Direction);
        }
    }

    //run South
    if (Direction == 2){
        //Check if it can turn
        if ((*mazepointer)[y][x-1] == '.'){
        Direction = turnright(Direction);
        //Check if the place in front of it is empty
        }else if ((*mazepointer)[y+1][x] == '.'){
        newy += 1;
        //Turn if stuck
        }else{
        Direction = turnleft(Direction);
        }
    }

    //run west
    if (Direction == 3){
        //Check if it can turn to the right
        if ((*mazepointer)[y-1][x] == '.'){
        Direction = turnright(Direction);
        //Check if the place in front of it is empty
        }else if ((*mazepointer)[y][x-1] == '.'){
        newx -= 1;
        //Turn if stuck
        }else{
        Direction = turnleft(Direction);
        }
    }
    
    x = newx;
    y = newy;

    Righthandrule(x, y, Direction, mazepointer);
    



    



    /* Older recursive waterfall code
    if (x >= 0 && x <= 12 && y >= 0 && y <= 12){
    //Run recursive waterfall for the tile to the right
    Recursivewaterfall(x+1, y, Distance + 1, mazepointer);
    
    //Run recursive waterfall for the tile to the left
    Recursivewaterfall(x-1, y, Distance + 1, mazepointer);
    //Run recursive waterfall for the tile above
    Recursivewaterfall(x, y+1, Distance + 1, mazepointer);
    //Run recursive waterfall for the tile below
    Recursivewaterfall(x, y-1, Distance + 1, mazepointer);
    }
    
    */

}

int turnleft(int Direction){
    Direction -= 1;
    if (Direction == -1){
        Direction == 3;
    }
    return Direction;
}

int turnright(int Direction){
    if (Direction >= 3){
        Direction == -1;
    }
    Direction += 1;
    return Direction;
}
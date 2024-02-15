#include<iostream>

void printMaze(){ // include input maze and adapt variables to a class format
    for (size_t row = 0; row < mazeRows; row++){
            for (size_t column = 0; column < mazeColumns; column++){
                std::cout << maze[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}

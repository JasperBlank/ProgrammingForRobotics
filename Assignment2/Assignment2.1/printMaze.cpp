#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows>*mazepointer){
    for (size_t row = 0; row < mazeRows; row++){
            for (size_t column = 0; column < mazeColumns; column++){
                std::cout << (*mazepointer)[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}

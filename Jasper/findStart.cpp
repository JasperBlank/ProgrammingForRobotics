#include <iostream>
#include "header.h"
#include <array>

std::array<int, 2> findStart(std::array<std::array<char, mazeColumns>, mazeRows > maze){
    std::array<int, 2> startingPosition;
    for (size_t row = 0; row < mazeRows; row++){
            for (size_t column = 0; column < mazeColumns; column++){
                if (maze[row][column] == 'x'){
                    startingPosition[0] = row;
                    startingPosition[1] = column;
                }
            }
        }
    return startingPosition;    
}
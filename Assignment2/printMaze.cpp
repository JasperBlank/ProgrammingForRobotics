<<<<<<< HEAD
#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows>*mazepointer){
    for (size_t row = 0; row < mazeRows; row++){
            for (size_t column = 0; column < mazeColumns; column++){
=======
//=============================================
// Filename : printMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer){
    //(*mazepointer)[y][x] = 'x';
    for (size_t row = 0; row < mazeRows; row++){ // run through rows
            for (size_t column = 0; column < mazeColumns; column++){ // run through columns
>>>>>>> origin/lucas
                std::cout << (*mazepointer)[row][column] << " ";
            }
            std::cout << std::endl;
        }    
<<<<<<< HEAD
}
=======
<<<<<<< HEAD
//=============================================
// Filename : printMaze.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include "header.h"

void printMaze(std::array<std::array<char, mazeColumns>, mazeRows> *mazepointer){
    //(*mazepointer)[y][x] = 'x';
    for (size_t row = 0; row < mazeRows; row++){ // run through rows
            for (size_t column = 0; column < mazeColumns; column++){ // run through columns
                std::cout << (*mazepointer)[row][column] << " ";
            }
            std::cout << std::endl;
        }    
}
>>>>>>> 57f886b (implemented printMaze function)
=======
}
>>>>>>> origin/lucas
>>>>>>> c65352ba8a49f194cbc5bff152853830325ae445

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

    //Righthandrule(startx, starty, 3, mazepointer);

}

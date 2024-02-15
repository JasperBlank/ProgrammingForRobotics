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
#include <array>

const int arrayRows = 3;
const int arrayColumns = 3;
void printArray(std::array<std::array<int, arrayColumns>, arrayRows > &arr){
    for (auto const& row : arr){ // runs through the rows of the array 
        for (auto const& arrayElement : row){ // runs through the elements of each row
            std::cout << arrayElement << " ";
        }
        std::cout << std::endl;
    }
}
int main(){
    std::array<std::array<int, arrayColumns>, arrayRows> a{{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }}; 
    printArray(a);
}
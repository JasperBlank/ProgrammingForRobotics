//=============================================
// Filename : arrays.cpp
// Authors : Jasper Blank, Lucas Junji Koreeda
// Group :
// License :
// Description :
//=============================================

#include<iostream>
#include<array>
using namespace std;

int main(){
    const size_t mazeRows {12};
    const size_t mazeColumns {12};

    array<array<int, mazeColumns>, mazeRows> maze{
        {{1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12}}
        };

    for (size_t row = 0; row < mazeRows; row++){
        for (size_t column = 0; column < mazeColumns; column++){
            std::cout << maze[row][column] << " ";
        }
        cout << endl;
    }
}
 
/*
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include <ranges>
int main()
{
    // Construction uses aggregate initialization
    std::array<int, 3> a1{{1, 2, 3}}; // Double-braces required in C++11 prior to
                                      // the CWG 1270 revision (not needed in C++11
                                      // after the revision and in C++14 and beyond)
 
    std::array<int, 3> a2 = {1, 2, 3}; // Double braces never required after =
 
    // Container operations are supported
    std::sort(a1.begin(), a1.end());
    std::ranges::reverse_copy(a2, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    // Ranged for loop is supported
    std::array<std::string, 2> a3{"E", "\u018E"};
    for (const auto& s : a3)
        std::cout << s << ' ';
    std::cout << '\n';
 
    // Deduction guide for array creation (since C++17)
    [[maybe_unused]] std::array a4{3.0, 1.0, 4.0}; // std::array<double, 3>
 
    // Behavior of unspecified elements is the same as with built-in arrays
    [[maybe_unused]] std::array<int, 2> a5; // No list init, a5[0] and a5[1]
                                            // are default initialized
    [[maybe_unused]] std::array<int, 2> a6{}; // List init, both elements are value
                                              // initialized, a6[0] = a6[1] = 0
    [[maybe_unused]] std::array<int, 2> a7{1}; // List init, unspecified element is value
                                               // initialized, a7[0] = 1, a7[1] = 0
}

 */
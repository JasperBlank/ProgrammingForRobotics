//==============================================================
// Filename    : main.cpp
// Authors     : Lucas & Jasper
// Group       : 8
// License     :  N.A. or opensource license like LGPL
// Description : Main file for 3.1
//==============================================================

#include <iostream>
#include "List.h"
#include "header.h"

int main() {
    // Instantiate two empty linked lists
    List<char> listA;
    List<char> listB;

    // Define strings
    const std::string stringA = "singlylinkedlist";
    const std::string stringB = "abcdefg";

    // Fill lists with strings
    fillList(stringA, listA);
    fillList(stringB, listB);

    // Print lists
    listA.print();   
    listB.print();    
    
    // Create two new lists
    List<char> listC;
    List<char> listD;

    // Define new strings
    const std::string stringC = "hijklmnop";
    const std::string stringD = "qrstuvw";

    // Fill lists with strings
    fillList(stringC, listC);
    fillList(stringD, listD);

    // Append the two new lists to the list that contains "abcdefg"
    listB.concatenate(listC);
    listB.concatenate(listD);
    listB.print();
    
    return 0;
}

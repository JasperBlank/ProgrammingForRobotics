//==============================================================
// Filename    : fillList.cpp
// Authors     : Lucas & Jasper
// Group       : 8
// License     :  N.A. or opensource license like LGPL
// Description : Function for filling the list for 3.1
//==============================================================

#include <iostream>
#include "List.h"

void fillList(const std::string& stringArgument, List<char>& linkedList){
    for (char letter : stringArgument) { // range-based for loop because the indexes don't need to be accessed
        linkedList.insertAtBack(letter); 
    }
}


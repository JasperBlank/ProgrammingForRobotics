//==============================================================
// Filename    : 
// Authors     : 
// Group       : 
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include <iostream>
#include "List.h"

void fillList(const std::string& stringArgument, List<char>& linkedList){
    for (char letter : stringArgument) { // range-based for loop because the indexes don't need to be accessed
        linkedList.insertAtBack(letter); // why insertAtBack and not insertAtFront?
    }
}


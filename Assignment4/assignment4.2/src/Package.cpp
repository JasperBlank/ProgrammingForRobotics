//==============================================================
// Filename    : Package.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the Package, link to the Customer class
//==============================================================

#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "Customer.h"

/* (THIS IS COMMENTED BECAUSE THE IMPLEMENTATION WAS UNSUCCESSFUL)
// constructor definition
Package::Package(const std::string& argumentWeight, Customer* senderPtr, Customer* receiverPtr){
    sender = senderPtr;
    receiver = receiverPtr;    
    setWeight(std::stod(argumentWeight));
}
*/

// printCost function definition
void Package::printCosts() const{
    std::cout << "Cost of package is: " << calculateCost() << std::endl;
}

// get and set functions:

// getweight function, gets the weight out of the class
double Package::getWeight(){
    return weight;
}

// setweight funciton
void Package::setWeight(double newWeight) {
    if (newWeight > 0) {
        weight = newWeight;
    }   else{
        std::cout << "Inserted weight negative" << std::endl;
    }
}

// get option function, gets the option out of the class
std::string Package::getOption(){
    return option;
}

// set option function
void Package::setOption(std::string newOption) {
    if (newOption == "twoDay") {
        option = "twoDay";
    }   else if(newOption == "overnight"){
        option = "overnight";
    } else {
        std::cout << "Pleae select either overnight, or twoDay" << std::endl;
    }
}
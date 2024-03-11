//==============================================================
// Filename    : Customer.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the Customer class
//==============================================================

#include <iostream>
#include <string>
#include "Customer.h"

// Constructor
Customer::Customer(const std::string& argumentName, const std::string& argumentAddress){
    setName(argumentName);
    setAddress(argumentAddress);
};

// get name function, gets the name of the receiver out of the class
std::string Customer::getName() {
    return name;
}

// set name function for the receiver
void Customer::setName(std::string newName) {
    name = newName;
}

// get address function, gets the name of the receiver out of the class
std::string Customer::getAddress() {
    return address;
}

// set address function for the receiver
void Customer::setAddress(std::string newName) {
    address = newName;
}

/*
// Print function
void Customer::printCustomerInfo(){
    std::cout << name << " | " << address << " | " << contact << std::endl;
};

// Print Christmas cards function
void Customer::printChristmasCardContactPersons(){};
*/
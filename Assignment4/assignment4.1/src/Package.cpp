//==============================================================
// Filename    : Package.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the Package base class
//==============================================================

#include <iostream>
#include <string>
#include <vector>
#include "Package.h"

// constructor definition
Package::Package(const std::string& argumentWeight){
    setWeight(std::stod(argumentWeight));
}

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

// get name function, gets the name out of the class
std::string Package::getNameSender(){
    return nameSender;
}

// set name function
void Package::setNameSender(std::string newnameSender) {
    nameSender = newnameSender;
}

// get address function, gets the address of the sender out of the class
std::string Package::getAddressSender() {
    return addressSender;
}

// set address function for the sender
void Package::setAddressSender(std::string newAddressSender) {
    addressSender = newAddressSender;
}

// get name function, gets the name of the receiver out of the class
std::string Package::getNameReceiver() {
    return nameReceiver;
}

// set name function for the receiver
void Package::setNameReceiver(std::string newNameReceiver) {
    nameReceiver = newNameReceiver;
}

// get address function, gets the address of the receiver out of the class
std::string Package::getAddressReceiver() {
    return addressReceiver;
}

// set address function for the receiver
void Package::setAddressReceiver(std::string newAddressReceiver) {
    addressReceiver = newAddressReceiver;
}
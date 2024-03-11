#include <iostream>
#include <string>
#include <vector>
#include "Package.h"


// Constructor
Package::Package(const std::string& argumentOption, const std::string& argumentWeight){
    option = argumentOption;
    weight = std::stod(argumentWeight);
};


void Package::printCosts() const{
    std::cout << "Cost of package is: " << calculateCost() << std::endl;
}

//All of the set and get functions:

//Getweight function, gets the weight out of the class
double Package::getWeight(){
    return weight;
}

//Setweight funciton
void Package::setWeight(double newWeight) {
    if (newWeight > 0) {
        weight = newWeight;
    }   else{
        std::cout << "Inserted weight negative" << std::endl;
    }
}

//get option function, gets the option out of the class
std::string Package::getOption(){
    return option;
}

//Set option function
void Package::setOption(std::string newOption) {
    if (newOption == "twoDay") {
        option = "twoDay";
    }   else if(newOption == "overnight"){
        option = "overnight";
    } else {
        std::cout << "Pleae select either overnight, or twoDay" << std::endl;
    }
}

//get name function, gets the name out of the class
std::string Package::getnameSender(){
    return nameSender;
}

//Set name function
void Package::setnameSender(std::string newnameSender) {
    nameSender = newnameSender;
}

// Get address function, gets the address of the sender out of the class
std::string Package::getAdressSender() {
    return addressSender;
}

// Set address function for the sender
void Package::setAdressSender(std::string newAddressSender) {
    addressSender = newAddressSender;
}

// Get name function, gets the name of the receiver out of the class
std::string Package::getNamereceiver() {
    return nameReceiver;
}

// Set name function for the receiver
void Package::setNamereceiver(std::string newNameReceiver) {
    nameReceiver = newNameReceiver;
}

// Get address function, gets the address of the receiver out of the class
std::string Package::getaddressReceiver() {
    return addressReceiver;
}

// Set address function for the receiver
void Package::setaddressReceiver(std::string newAddressReceiver) {
    addressReceiver = newAddressReceiver;
}



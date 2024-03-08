#include <iostream>
#include <string>
#include "Package.h"

// Constructor
Package::Package(const std::string& argumentOption, const std::string& argumentWeight){
    option = argumentOption;
    weight = std::stod(argumentWeight);
};

//Getweight function, gets the weight out of the class
double Package::getWeight(){
    return weight;
}

void Package::setWeight(double newWeight) {
    if (newWeight > 0) {
        weight = newWeight;
    }   else{
        std::cout << "Inserted weight negative" << std::endl;
    }
}
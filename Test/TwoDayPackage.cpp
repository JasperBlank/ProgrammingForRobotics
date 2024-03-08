#include <iostream>
#include <string>
#include "TwoDayPackage.h"

// Constructor
TwoDayPackage::TwoDayPackage(const std::string& argumentOption, const std::string& argumentWeight):Package(argumentOption,argumentWeight){};

double TwoDayPackage::calculateCost() const{
    double getWeight = std::stod(weight); // change it to a getFunction
    return (costPerKg* + getWeight) + flatFee;
};


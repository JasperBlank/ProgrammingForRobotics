#include <iostream>
#include <string>
#include "OvernightPackage.h"

// Constructor
OvernightPackage::OvernightPackage(const std::string& argumentOption, const std::string& argumentWeight):Package(argumentOption,argumentWeight){};

double OvernightPackage::calculateCost() const{
    double getWeight = std::stod(weight); // change it to a getFunction
    return (costPerKg* + getWeight) + flatFee;
};
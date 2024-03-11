#include <iostream>
#include <string>
#include "OvernightPackage.h"

// Constructor
OvernightPackage::OvernightPackage(const std::string& argumentOption, const std::string& argumentWeight):TwoDayPackage(argumentOption, argumentWeight){};

double OvernightPackage::calculateCost() const{
    return TwoDayPackage::calculateCost() + (additionalCost * weight * weight);
};
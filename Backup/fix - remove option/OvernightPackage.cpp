#include <iostream>
#include <string>
#include "OvernightPackage.h"

// Constructor
OvernightPackage::OvernightPackage(const std::string& argumentWeight):TwoDayPackage(argumentWeight){};

double OvernightPackage::calculateCost() const{
    return TwoDayPackage::calculateCost() + (additionalCost * weight * weight);
};
#include <iostream>
#include <string>
#include "TwoDayPackage.h"

// Constructor
TwoDayPackage::TwoDayPackage(const std::string& argumentWeight):Package(argumentWeight){};

double TwoDayPackage::calculateCost() const{
    return (costPerKg * weight) + flatFee;
};


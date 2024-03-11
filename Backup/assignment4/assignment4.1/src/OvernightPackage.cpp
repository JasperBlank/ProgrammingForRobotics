//==============================================================
// Filename    : OvernightPackage.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the OvernightPackage class
//==============================================================

#include <iostream>
#include <string>
#include "OvernightPackage.h"

// constructor definition
OvernightPackage::OvernightPackage(const std::string& argumentWeight):TwoDayPackage(argumentWeight){
    setOption("overnight"); // sets the package option
}

// calculateCost function for OvernightPackage
double OvernightPackage::calculateCost() const{
    // reuse of the calculateCost function defined for the TwoDayPackage
    return TwoDayPackage::calculateCost() + (additionalCost * weight * weight); 
}
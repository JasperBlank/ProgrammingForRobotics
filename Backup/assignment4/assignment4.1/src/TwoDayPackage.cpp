//==============================================================
// Filename    : TwoDayPackage.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the TwoDayPackage class
//==============================================================

#include <iostream>
#include <string>
#include "TwoDayPackage.h"

// constructor definition
TwoDayPackage::TwoDayPackage(const std::string& argumentWeight):Package(argumentWeight){
    setOption("twoDay"); // sets the package option
}

// calculateCost function for TwoDayPackage
double TwoDayPackage::calculateCost() const{
    return (costPerKg * weight) + flatFee;
}


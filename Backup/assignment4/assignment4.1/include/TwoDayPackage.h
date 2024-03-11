//==============================================================
// Filename    : TwoDayPackage.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the TwoDayPackage.cpp
//==============================================================

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(const std::string&); // constructor declaration
    virtual ~TwoDayPackage() = default; // virtual destructor

    double costPerKg = 2.50; // cost/kg
    double flatFee = 5.00; // flat fee

    virtual double calculateCost() const override;
};

#endif
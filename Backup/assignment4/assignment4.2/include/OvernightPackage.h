//==============================================================
// Filename    : OvernightPackage.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the OvernightPackage.cpp
//==============================================================

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "TwoDayPackage.h"

class OvernightPackage : public TwoDayPackage{
public:
    OvernightPackage(const std::string&); // constructor declaration
    virtual ~OvernightPackage() = default; // virtual destructor

    double additionalCost = 1.10; // additional factor that multiplies the weight^2

    virtual double calculateCost() const override;
};

#endif
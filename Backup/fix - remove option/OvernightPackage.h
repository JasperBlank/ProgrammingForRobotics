#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "TwoDayPackage.h"

class OvernightPackage : public TwoDayPackage{
public:
    OvernightPackage(const std::string&); // constructor declaration
    virtual ~OvernightPackage() = default; // virtual destructor

    double additionalCost = 1.10;

    virtual double calculateCost() const override;
    //virtual std::string printCosts() const override; 
};

#endif
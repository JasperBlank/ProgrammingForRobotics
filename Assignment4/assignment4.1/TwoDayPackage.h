#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(const std::string&, const std::string&); // constructor declaration
    virtual ~TwoDayPackage() = default; // virtual destructor

    double costPerKg = 2.50;
    double flatFee = 5.00;

    virtual double calculateCost() const override;
    //virtual std::string printCosts() const override; 
};

#endif
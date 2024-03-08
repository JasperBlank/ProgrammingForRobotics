#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

class OvernightPackage : public Package{
public:
    OvernightPackage(const std::string&, const std::string&); // constructor declaration
    virtual ~OvernightPackage() = default; // virtual destructor

    virtual double calculateCost() const override;
    //virtual std::string printCosts() const override; 
};

#endif
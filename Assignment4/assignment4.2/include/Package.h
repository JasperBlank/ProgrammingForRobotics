//==============================================================
// Filename    : Package.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the Package.cpp
//==============================================================

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"

class Package{

protected:
    std::string option;
    Customer* sender;
    Customer* receiver;
    double weight; 

public:
    Package(const std::string&, Customer* sender, Customer* receiver); // constructor declaration
    virtual ~Package() = default; // virtual destructor

    //get and Set functions

    //Weight
    double getWeight();
    void setWeight(double);

    //Option
    std::string getOption();
    void setOption(std::string);

    // sender
    Customer* getSender();    

    // receiver
    Customer* getReceiver();
    
    // Function to calculate the cost
    virtual double calculateCost() const = 0; // pure virtual
    
    // Function to print the cost
    void printCosts() const;
};

#endif

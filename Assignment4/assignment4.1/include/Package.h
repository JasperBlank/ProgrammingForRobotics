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

class Package{

protected:
std::string option;
std::string nameSender;
std::string addressSender;
std::string nameReceiver;
std::string addressReceiver;
double weight; 

public:
    Package(const std::string&); // constructor declaration
    virtual ~Package() = default; // virtual destructor

    //get and Set functions

    //Weight
    double getWeight();
    void setWeight(double);

    //Option
    std::string getOption();
    void setOption(std::string);

    //NameSender
    std::string getNameSender();
    void setNameSender(std::string);

    //AddressSender
    std::string getAddressSender();
    void setAddressSender(std::string);

    //NameReceiver
    std::string getNameReceiver();
    void setNameReceiver(std::string);

    //AddressReceiver
    std::string getAddressReceiver();
    void setAddressReceiver(std::string);
    
    // Function to calculate the cost
    virtual double calculateCost() const = 0; // pure virtual
    
    // Function to print the cost
    void printCosts() const;
};

#endif

//==============================================================
// Filename    : Customer.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the Customer.cpp
//==============================================================

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer{
protected:
    std::string name;
    std::string address;    

public:
    Customer(const std::string&, const std::string&);
    ~Customer() = default;

    // get and set functions

    // name
    std::string getName();
    void setName(std::string);

    // address
    std::string getAddress();
    void setAddress(std::string);

    //virtual void printCustomerInfo();
    //virtual void printChristmasCardContactPersons();
};

#endif
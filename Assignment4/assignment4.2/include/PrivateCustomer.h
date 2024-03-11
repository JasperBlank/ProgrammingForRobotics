//==============================================================
// Filename    : PrivateCustomer.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the PrivateCustomer.cpp
//==============================================================

#ifndef PRIVATECUSTOMER_H
#define PRIVATECUSTOMER_H

#include <iostream>
#include <string>
#include "Customer.h"

class PrivateCustomer : Customer{
public:
    PrivateCustomer(const std::string&, const std::string&);
    ~PrivateCustomer() = default;

    //virtual void printCustomerInfo();
    //virtual void printChristmasCardContactPersons();
};

#endif
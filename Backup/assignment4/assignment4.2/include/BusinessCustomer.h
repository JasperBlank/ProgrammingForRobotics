//==============================================================
// Filename    : BusinessCustomer.h
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header file for the BusinessCustomer.cpp
//==============================================================

#ifndef BUSINESSCUSTOMER_H
#define BUSINESSCUSTOMER_H

#include <iostream>
#include <string>
#include "Customer.h"

class BusinessCustomer : public Customer{
protected:
    std::string companyName;
    std::string contactPerson;

public:
    BusinessCustomer(const std::string&, const std::string&, const std::string&);
    ~BusinessCustomer() = default;

    // get and set functions

    // companyName
    std::string getCompanyName();
    void setCompanyName(std::string);

    // contactPerson
    std::string getContactPerson();
    void setContactPerson(std::string);

    //virtual void printCustomerInfo();
    //virtual void printChristmasCardContactPersons();
};

#endif
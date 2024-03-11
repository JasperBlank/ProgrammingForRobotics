//==============================================================
// Filename    : BusinessCustomer.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : File for the BusinessCustomer class
//==============================================================

#include <iostream>
#include <string>
#include "BusinessCustomer.h"

// Constructor
BusinessCustomer::BusinessCustomer(const std::string& argumentCompanyName, const std::string& argumentAddress, const std::string& argumentContactPerson):Customer(argumentCompanyName, argumentAddress){
    setCompanyName(argumentCompanyName);
    setContactPerson(argumentContactPerson);
};

// get company name function, gets the name of the receiver out of the class
std::string BusinessCustomer::getCompanyName() {
    return companyName;
}

// set company name function for the receiver
void BusinessCustomer::setCompanyName(std::string newCompanyName) {
    companyName = newCompanyName;
}

// get contact person function, gets the name of the receiver out of the class
std::string BusinessCustomer::getContactPerson() {
    return contactPerson;
}

// set contact person function for the receiver
void BusinessCustomer::setContactPerson(std::string newContactPerson) {
    contactPerson = newContactPerson;
}
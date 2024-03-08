#include <iostream>
#include <string>
#include "Customer.h"

// Constructor
Customer::Customer(const std::string& argumentName, const std::string& argumentAddress, const std::string& argumentContact){
    name = argumentName;
    address = argumentAddress;
    contact = argumentContact;
};

// Print function
void Customer::printCustomerInfo(){
    std::cout << name << " | " << address << " | " << contact << std::endl;
};
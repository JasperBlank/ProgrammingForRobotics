#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer{
public:
    Customer(const std::string&, const std::string&, const std::string&);
    ~Customer() = default;

    std::string name;
    std::string address;
    std::string contact;

    virtual void printCustomerInfo();
};

#endif
#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package{
public:
    Package(const std::string&, const std::string&); // constructor declaration
    virtual ~Package() = default; // virtual destructor

    std::string option;
    std::string weight; // easier to manipulate!
    
    //Virtual is needed because of polymorphism
    virtual double calculateCost() const = 0; // pure virtual
    //virtual std::string printCosts() const; // virtual
};

#endif

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package{

protected:
std::string option;
double weight; // easier to manipulate!

public:
    Package(const std::string&, const std::string&); // constructor declaration
    virtual ~Package() = default; // virtual destructor
    
    

    //Set and Get functions
    double getWeight();
    void setWeight(double);
    
    //Virtual is needed because of polymorphism
    virtual double calculateCost() const = 0; // pure virtual
    //virtual std::string printCosts() const; // virtual
};

#endif

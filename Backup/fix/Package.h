#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <vector>

class Package{

protected:
std::string option;
double weight; // easier to manipulate!
std::string nameSender;
std::string addressSender;
std::string nameReceiver;
std::string addressReceiver;

public:
    Package(const std::string&, const std::string&); // constructor declaration
    virtual ~Package() = default; // virtual destructor

    void printCosts() const;
    
    //Set and Get functions
    //Weight
    double getWeight();
    void setWeight(double);

    //Option
    std::string getOption();
    void setOption(std::string);

    //Namesender
    std::string getnameSender();
    void setnameSender(std::string);

    
    //AdressSender
    std::string getAdressSender();
    void setAdressSender(std::string);

    //Namereceiver
    std::string getNamereceiver();
    void setNamereceiver(std::string);

    //addressReceiver
    std::string getaddressReceiver();
    void setaddressReceiver(std::string);
    
    //Virtual is needed because of polymorphism
    virtual double calculateCost() const = 0; // pure virtual
    //virtual std::string printCosts() const; // virtual
};

#endif

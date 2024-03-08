#ifndef COSTUMER_H
#define COSTUMER_H

#include <iostream>
#include <string>

class Costumer{
public:
    Costumer(const std::string&, const std::string&);
    ~Costumer() = default;

    std::string name;
    std::string address;
};

#endif
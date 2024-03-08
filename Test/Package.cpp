#include <iostream>
#include <string>
#include "Package.h"

// Constructor
Package::Package(const std::string& argumentOption, const std::string& argumentWeight){
    option = argumentOption;
    weight = std::stod(argumentWeight);
};


//==============================================================
// Filename    : main.cpp
// Authors     : Lucas Junji & Jasper Blank
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Main file
//==============================================================

#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include "Customer.h"
#include "PrivateCustomer.h"
#include "BusinessCustomer.h"

int main() {
    std::vector<std::vector<std::string>> list = { // list of packages
        {"Allice", "Northstreet", "Edward", "Mainstreet", "100", "overnight"},
        {"Bob", "Southstreet", "Florence", "Outerstreet", "200", "twoDay"},
        {"Charlie", "Eaststreet", "Gerald", "Planetstreet", "50","overnight"},
        {"Devin", "Weststreet", "Hagrid", "Birdstreet", "20","twoDay"},
    };
    size_t listRows = list.size();

    for(size_t i{0}; i < listRows; i++) {
        Package* order; // Pointer to Package object
        
        // identify the type of package
        if(list[i][5] == "twoDay") {
            order = new TwoDayPackage(list[i][4]); // creates a new TwoDayPackage object
        } else if(list[i][5] == "overnight") {
            order = new OvernightPackage(list[i][4]); // creates a new OvernightPackage object
        } else {
            std::cout << "package type not valid" << std::endl;
            continue;
        }

        // sets the variables to the object
        order->setNameSender(list[i][0]);
        order->setAddressSender(list[i][1]);
        order->setNameReceiver(list[i][2]);
        order->setAddressReceiver(list[i][3]);
        order->printCosts();

        delete order; // deallocate memory
    }

        std::vector<std::vector<std::string>> customerList = {
        // Private customers
        {"Anna", "37 Boulevard Saint-Germain, Paris, France", ""},
        {"Bob", "10 Downing Street, London, United Kingdom", ""},
        {"Carol", "1600 Pennsylvania Avenue NW, Washington, DC 20500, USA", ""},
        // Business customers
        {"Amazon", "1 Piazza San Marco, Venice, Italy", "Devin"},
        {"Samsung", "3-1-1 Kasumigaseki, Chiyoda City, Tokyo, Japan", "Erika"},
        {"Tesla", "1 Circular Quay East, Sydney NSW 2000, Australia", "Ferdinand"}
    };

    size_t customerListRows = customerList.size();
    for(size_t i{0}; i < customerListRows; i++){

    }
    return 0;
}


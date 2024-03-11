#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
/*
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
*/

int main(){

    std::vector<std::vector<std::string>> customerList = {
        // Private customers
        {"Anna"     , "37 Boulevard Saint-Germain, Paris, France"               , ""},
        {"Bob"      , "10 Downing Street, London, United Kingdom"               , ""},
        {"Carol"    , "1600 Pennsylvania Avenue NW, Washington, DC 20500, USA"  , ""},
        // Business customers
        {"Amazon"   , "1 Piazza San Marco, Venice, Italy"                       , "Devin"},
        {"Samsung"  , "3-1-1 Kasumigaseki, Chiyoda City, Tokyo, Japan"          , "Erika"},
        {"Tesla"    , "1 Circular Quay East, Sydney NSW 2000, Australia"        , "Ferdinand"}
    };

    size_t customerListRows = customerList.size();
    size_t customerListColumns = customerList[0].size();

    for(size_t i{0}; i < customerListRows; i++){
        //Costumer sender(list[i][0], list[i][1]); //sender
        //Costumer receiver(list[i][2], list[i][3]); //receiver
        Customer client(customerList[i][0], customerList[i][1], customerList[i][2]);
        client.printCustomerInfo();
    }

    return 0;
}

/*
int main(){

    std::vector<std::vector<std::string>> Packagelist = {
        {"twoDay", "100"},
        {"overnight", "200"}
    };

    size_t listRows = Packagelist.size();
    size_t listColumns = Packagelist[0].size();

    for(size_t i{0}; i < listRows; i++){
        //Costumer sender(list[i][0], list[i][1]); //sender
        //Costumer receiver(list[i][2], list[i][3]); //receiver
        OvernightPackage order(Packagelist[i][4], Packagelist[i][5]);
        std::cout << order.calculateCost() << std::endl;
    }

    return 0;
}
*/
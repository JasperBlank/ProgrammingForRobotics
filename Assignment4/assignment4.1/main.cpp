#include <iostream>
#include <string>
#include <vector>
#include "Costumer.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main(){

    std::vector<std::vector<std::string>> list = {
        {"nameSender1", "addressSender1", "nameReceiver1", "addressReceiver1", "twoDay", "100"},
        {"nameSender2", "addressSender2", "nameReceiver2", "addressReceiver2", "overnight", "200"}
    };

    size_t listRows = list.size();
    size_t listColumns = list[0].size();

    for(size_t i{0}; i < listRows; i++){
        //Costumer sender(list[i][0], list[i][1]); //sender
        //Costumer receiver(list[i][2], list[i][3]); //receiver
        OvernightPackage order(list[i][4], list[i][5]);
        std::cout << order.calculateCost() << std::endl;
    }

    return 0;
}
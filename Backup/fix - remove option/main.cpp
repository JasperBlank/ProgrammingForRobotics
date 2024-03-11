#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main(){

    std::vector<std::vector<std::string>> list = {
        {"Allice", "Northstreet", "Edward", "Mainstreet", "100", "overnight"},
        {"Bob", "Southstreet", "Florence", "Outerstreet", "200", "twoDay"},
        {"Charlie", "Eaststreet", "Gerald", "Planetstreet", "50","overnight"},
        {"Devin", "Weststreet", "Hagrid", "Birdstreet", "20","twoDay"},
    };

    size_t listRows = list.size();
    size_t listColumns = list[0].size();
    
    for(size_t i{0}; i < listRows; i++){
        
        if(list[i][5] == "twoDay"){
            TwoDayPackage order(list[i][4]);
            order.printCosts();
        }
        else if(list[i][5] == "overnight"){
            OvernightPackage order(list[i][4]);
            order.printCosts();
        }
        else {
            std::cout << "package type not valid" << std::endl;
        }
    }
    return 0;
}



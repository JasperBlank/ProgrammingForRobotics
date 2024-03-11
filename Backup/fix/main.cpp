#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main(){

    std::vector<std::vector<std::string>> list = {
        {"Allice", "Northstreet", "Edward", "Mainstreet", "overnight", "100"},
        {"Bob", "Southstreet", "Florence", "Outerstreet", "twoDay", "200"},
        {"Charlie", "Eaststreet", "Gerald", "Planetstreet", "overnight", "50"},
        {"Devin", "Weststreet", "Hagrid", "Birdstreet", "twoDay", "20"},
    };

    size_t listRows = list.size();
    size_t listColumns = list[0].size();
    
    for(size_t i{0}; i < listRows; i++){
        
        if(list[i][4] == "twoDay"){
            TwoDayPackage order(list[i][4], list[i][5]);
            order.printCosts();
        }
        else if(list[i][4] == "overnight"){
            OvernightPackage order(list[i][4], list[i][5]);
            order.printCosts();
        }
        else {
            std::cout << "package type not valid" << std::endl;
        }
    }
    return 0;
}



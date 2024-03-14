//==============================================================
// Filename    : DrawContourScanningThreaded.cpp
// Authors     : Jasper Blank & Lucas Koreeda
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Multithreaded Scanning algorithm
//==============================================================

#include "DrawContourScanningThreaded.h" 

// draw contour
void DrawContourScanningThreaded::drawContour(float threshold) {
    //MENTION EDUCATIVE.IO MULITHREADING STRUCTURE
    std::vector<std::thread> threads; // create multiple threads

    for (float yPoint = yTop+1; yPoint <= yBottom; yPoint++){
        // MENTION CHAT GPT FOR THIS LINE 
        threads.push_back(std::thread([this, yPoint, threshold]() { this->printRow(&yPoint, threshold); }));  
    }

    for (auto &th : threads){
        th.join();
    }
}

void DrawContourScanningThreaded::printRow (const float *y, float threshold){
    // x is only inside this function
    for (float x = xLeft+1; x <= xRight; x++){ 
            if (isDifferent(&x, y, threshold) == true){
                std::lock_guard<std::mutex> lock(myMutex); // synchronization
                ui->drawPixel(x, *y); 
            }
    }
}
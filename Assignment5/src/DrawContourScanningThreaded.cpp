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
    
    std::vector<std::thread> threads; // vector with multiple threads

    for (float yPoint = yTop+1; yPoint <= yBottom; yPoint++){
        // each thread calls the printRow function
        threads.push_back(std::thread([this, yPoint, threshold]() { this->printRow(&yPoint, threshold); }));  
    }

    for (auto &th : threads){
        th.join(); // join all threads
    }
}

// print a row
void DrawContourScanningThreaded::printRow (const float *y, float threshold){
    
    for (float x = xLeft+1; x <= xRight; x++){ // x is only needed inside this function
            if (isDifferent(&x, y, threshold) == true){
                std::lock_guard<std::mutex> lock(myMutex); // synchronization to draw the pixels
                ui->drawPixel(x, *y); 
            }
    }
}
//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include "DrawContourScanningThreaded.h" 

// draw contour
void DrawContourScanningThreaded::drawContour(float threshold) {

    std::vector<std::thread> threads; // create multiple threads
    for (float yPoint = yTopLeft+1; yPoint <= yBottomRight; yPoint++){
        threads.push_back(std::thread([this, yPoint, threshold]() { this->printRow(&yPoint, threshold); }));
    }
    for (auto &th : threads){
        th.join();
    }
}

bool DrawContourScanningThreaded::isDifferent (const float *x, const float *y, float threshold){
    
    // true if pixel is above threshold
    bool previousPixel = blob->potential(*x-1, *y-1) > threshold;
    bool currentPixel = blob->potential(*x, *y) > threshold;

    if (previousPixel != currentPixel){
        return true;}
    else{
        return false;}
}

void DrawContourScanningThreaded::printRow (const float *y, float threshold){

    for (float x = xTopLeft+1; x <= xBottomRight; x++){
            if (isDifferent(&x, y, threshold) == true){
                ui->drawPixel(x, *y);
            }
    }
}
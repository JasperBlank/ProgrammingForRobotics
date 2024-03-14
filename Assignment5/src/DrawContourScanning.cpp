//==============================================================
// Filename    : DrawContourScanning.cpp
// Authors     : Jasper Blank & Lucas Koreeda
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Scanning algorithm
//==============================================================

#include "DrawContourScanning.h" 

// draw contour
void DrawContourScanning::drawContour(float threshold) {

    // evaluate each pixel starting from the top left
    for (float yPoint = yTop+1; yPoint <= yBottom; yPoint++){ 
        for (float xPoint = xLeft+1; xPoint <= xRight; xPoint++){
            if (isDifferent(&xPoint, &yPoint, threshold) == true){
                ui->drawPixel(xPoint, yPoint); 
            } // draws the pixel if the threshold is crossed
        }
    }
}

// verify if the threshold is crossed
bool DrawContourScanning::isDifferent (const float *x,const float *y, float threshold){
    
    // true if pixel is above threshold
    bool previousPixel = blob->potential(*x-1, *y-1) > threshold;
    bool currentPixel = blob->potential(*x, *y) > threshold;

    if (previousPixel != currentPixel){
        return true;
    }
    else{
        return false;
    }
}
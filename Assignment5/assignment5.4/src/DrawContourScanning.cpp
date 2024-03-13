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

    // evaluate each pixel
    for (float yPoint = yTopLeft+1; yPoint <= yBottomRight; yPoint++){ 
        for (float xPoint = xTopLeft+1; xPoint <= xBottomRight; xPoint++){
            if (isDifferent(&xPoint, &yPoint, threshold) == true){
                ui->drawPixel(xPoint, yPoint);
            }
        }
    }
}

bool DrawContourScanning::isDifferent (const float *x, const float *y, float threshold){
    
    // true if pixel is above threshold
    bool previousPixel = blob->potential(*x-1, *y-1) > threshold;
    bool currentPixel = blob->potential(*x, *y) > threshold;

    if (previousPixel != currentPixel){
        return true;}
    else{
        return false;}
}

   /* TEST ----------------------------------------------------------------

   +++ POTENTIAL EVALUATION +++
    for (float yPoint = yTopLeft; yPoint <= yBottomRight; yPoint++){ 
        for (float xPoint = xTopLeft; xPoint <= xBottomRight; xPoint++){
            if (blob->potential(xPoint,yPoint) > threshold){
                ui->drawPixel(xPoint, yPoint);
            }
        }
    }

    */
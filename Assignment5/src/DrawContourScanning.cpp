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

    // YOUR CODE HERE ------------------------------------------

    // pixel location (the y-axis is inverted)
    // ui is the pointer to the object of the class UI

    // top left pixel
    float xTopLeft = -(*ui).sizeX/2;
    float yTopLeft = -(*ui).sizeY/2;

    // bottom right pixel
    float xBottomRight = (*ui).sizeX/2;
    float yBottomRight = (*ui).sizeY/2;

    // evaluate each pixel
    for (float yPoint = yTopLeft+1; yPoint <= yBottomRight; yPoint++){ 
        for (float xPoint = xTopLeft+1; xPoint <= xBottomRight; xPoint++){
            if (isDifferent(&xPoint, &yPoint, threshold) == true){
                ui->drawPixel(xPoint, yPoint);
            }
        }
    }
}

bool DrawContourScanning::isDifferent (float *x, float *y, float threshold){
    
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
//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include "DrawContourScanning.h" 

// draw contour
void DrawContourScanning::drawContour(float threshold) {

    // YOUR CODE HERE ------------------------------------------

    // ui is the pointer to the object of the class UI

    // top-left pixel
    float xTopLeft = -(*ui).sizeX/2; // increasing values go the right
    float yTopLeft = -(*ui).sizeY/2; // increasing values go downwards
    // OBS: the y-axis is inverted
    

    ui->drawPixel(0, 0); // Dummy code only
}
//==============================================================
// Filename    : DrawContourScanning.h
// Authors     : Jasper Blank & Lucas Koreeda
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header for the Scanning algorithm
//==============================================================

// DrawContourScanning class derived from class
// DrawContour.
#ifndef DRAWCONTOURSCANNING_H
#define DRAWCONTOURSCANNING_H

#include "DrawContour.h" // DrawContour class declaration

// DrawContourScanning class definition
class DrawContourScanning : public DrawContour
{
public:
    // constructor
    DrawContourScanning(UI &ui, Blob &blob): DrawContour(ui, blob) {};

    // top left pixel
    float xTopLeft = -(*ui).sizeX/2;
    float yTopLeft = -(*ui).sizeY/2;

    // bottom right pixel
    float xBottomRight = (*ui).sizeX/2;
    float yBottomRight = (*ui).sizeY/2;

    // draw contour
    virtual void drawContour(float threshold);

    virtual bool isDifferent (float *x, float *y, float threshold);
}; // end class DrawContourScanning

#endif
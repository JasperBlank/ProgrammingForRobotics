//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

// DrawContourScanningThreaded class derived from class
// DrawContour.
#ifndef DRAWCONTOURSCANNINGTHREADED_H
#define DRAWCONTOURSCANNINGTHREADED_H

#include "DrawContour.h" // DrawContour class declaration+
#include <thread>
#include <vector>

// DrawContourScanningThreaded class definition
class DrawContourScanningThreaded : public DrawContour
{
public:
    // constructor
    DrawContourScanningThreaded(UI &ui, Blob &blob): DrawContour(ui, blob) {};

    // top left pixel
    float xTopLeft = -(*ui).sizeX/2;
    float yTopLeft = -(*ui).sizeY/2;

    // bottom right pixel
    float xBottomRight = (*ui).sizeX/2;
    float yBottomRight = (*ui).sizeY/2;

    // draw contour
    virtual void drawContour(float threshold);

    virtual bool isDifferent (const float *x, const float *y, float threshold);

    virtual void printRow (const float *y, float threshold);
}; // end class DrawContourScanningThreaded

#endif
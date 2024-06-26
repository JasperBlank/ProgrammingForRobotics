//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

// DrawContourMarching class derived from class
// DrawContour.
#ifndef DRAWCONTOURMARCHING_H
#define DRAWCONTOURMARCHING_H

#include "DrawContour.h" // DrawContour class declaration

// DrawContourMarching class definition
class DrawContourMarching : public DrawContour
{
public:
    // constructor
    DrawContourMarching(UI &ui, Blob &blob): DrawContour(ui, blob) {};
    Point findCurve(float threshold);
    bool isDifferent(float *x, float *y, float threshold) override;

    // draw contour
    virtual void drawContour(float threshold);
}; // end class DrawContourMarching

#endif
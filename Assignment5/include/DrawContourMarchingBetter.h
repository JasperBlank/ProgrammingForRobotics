//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

// DrawContourMarchingBetter class derived from class
// DrawContour.
#ifndef DRAWCONTOURMARCHINGBETTER_H
#define DRAWCONTOURMARCHINGBETTER_H

#include "DrawContourMarching.h" // DrawContour class declaration

// DrawContourMarchingBetter class definition
class DrawContourMarchingBetter : public DrawContourMarching
{
public:
    // constructor
    DrawContourMarchingBetter(UI &ui, Blob &blob): DrawContourMarching(ui, blob) {};
    virtual bool isDifferent(float *x, float *y, float threshold) override;

    // draw contour
    virtual void drawContour(float threshold);

}; // end class DrawContourMarchingBetter

#endif
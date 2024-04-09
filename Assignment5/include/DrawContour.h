// DrawContour class definition.
#ifndef DRAWCONTOUR_H
#define DRAWCONTOUR_H

#include "UI.h" // UI class declaration
#include "Blob.h" // Blob class declaration

#include <iostream>

// DrawContour class definition
class DrawContour
{
public:

    DrawContour(UI &ui, Blob &blob): ui(&ui), blob(&blob) {} // constructor

    virtual void drawContour(float threshold) = 0; // draw contour

    // verify if the threshold is crossed
    virtual bool isDifferent(float *x, float *y, float threshold);

protected:
    UI*   ui;
    Blob* blob;
    
    // top left pixel
    float xLeft = -(*ui).sizeX/2;
    float yTop = -(*ui).sizeY/2;

    // bottom right pixel
    float xRight = (*ui).sizeX/2;
    float yBottom = (*ui).sizeY/2;

    // OBS: considering that x = 0 and y = 0 are defined in the middle of the screen

}; // end class DrawContour

#endif
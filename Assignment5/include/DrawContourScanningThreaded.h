//==============================================================
// Filename    : DrawContourScanningThreaded.h
// Authors     : Jasper Blank & Lucas Koreeda
// Group       : 8
// License     : N.A. or opensource license like LGPL
// Description : Header for the Multithreaded Scanning algorithm
//==============================================================

// DrawContourScanningThreaded class derived from class
// DrawContour.
#ifndef DRAWCONTOURSCANNINGTHREADED_H
#define DRAWCONTOURSCANNINGTHREADED_H

#include "DrawContourScanning.h" // DrawContour class declaration+
#include <thread>
#include <vector>
#include <mutex>

// DrawContourScanningThreaded class definition
class DrawContourScanningThreaded : public DrawContourScanning
{

private:
    std::mutex myMutex; // used for mutual exclusion

public:
    // constructor
    DrawContourScanningThreaded(UI &ui, Blob &blob): DrawContourScanning(ui, blob) {};

    // draw contour
    virtual void drawContour(float threshold);

    // draw one row
    void printRow (const float *y, float threshold);

}; // end class DrawContourScanningThreaded

#endif
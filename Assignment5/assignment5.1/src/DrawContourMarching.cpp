//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include "DrawContourMarching.h"
#include <queue>

// draw contour
void DrawContourMarching::drawContour(float threshold) {    
    
    //Finding the first point
    Point Firstpoint = findCurve(threshold);

    std::queue<Point>;

    

    //Testing
    ui->drawPixel(Firstpoint.x, Firstpoint.y);

}


Point DrawContourMarching:: findCurve(float threshold){
// evaluate each pixel, return the first pixel
    for (float yPoint = yTop+1; yPoint <= yBottom; yPoint++){ 
        for (float xPoint = xLeft+1; xPoint <= xRight; xPoint++){
            if (isDifferent(&xPoint, &yPoint, threshold) == true){
                
                //Instansiate and return point
                return Point(xPoint, yPoint);
            }
        }
    }

    return Point(0,0);
}

bool DrawContourMarching::isDifferent (float *x, float *y, float threshold){
    
    // true if pixel is above threshold
    bool previousPixel = blob->potential(*x-1, *y-1) > threshold;
    bool currentPixel = blob->potential(*x, *y) > threshold;

    if (previousPixel != currentPixel){
        return true;}
    else{
        return false;}
}

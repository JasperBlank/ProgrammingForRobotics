//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include "DrawContourMarching.h"
#include <queue>
#include <vector>
#include <algorithm>

// draw contour
void DrawContourMarching::drawContour(float threshold) {    
    
    //Finding the first point
    Point Firstpoint = findCurve(threshold);

    std::queue<Point> worklist;
    std::vector<Point> visitedlist;

    worklist.push(Firstpoint);

    while (!worklist.empty())
    {
        //Getting first element
        Point p = worklist.front();
        //Removing element from queue
        worklist.pop();

    
   
    
    
        
        /*
        //Creating the pixel to the left and adding it to the work list
        if(p.x > -100 ){
        Point leftp = Point(p.x-1,p.y);
        worklist.push(leftp);
        }
        */

        //Drawing the current pixel
        ui->drawPixel(p.x, p.y);

        visitedlist.push_back(p);  

        
    }
    
    

    
    

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

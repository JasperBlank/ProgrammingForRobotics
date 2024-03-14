//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================

#include "DrawContourMarching.h"
#include <queue>
#include <set>

// draw contour
void DrawContourMarching::drawContour(float threshold) {    
    
    //Finding the first point
    Point Firstpoint = findCurve(threshold);

    std::queue<Point> worklist;
    std::set<Point> visitedlist;

    worklist.push(Firstpoint);

    while (!worklist.empty())
    {
        //Getting first element
        Point p = worklist.front();
        //Removing element from queue
        worklist.pop();


        //Check if this pixel has already been visited
        if (visitedlist.find(p) == visitedlist.end()){
        visitedlist.insert(p);  
        } else {
            continue;
        }

        
        
        bool Ptopleft = blob->potential(p.x - 0.5, p.y -0.5) >= threshold;
        bool Ptopright = blob->potential(p.x + 0.5, p.y -0.5) >= threshold;
        bool Pbottomright = blob->potential(p.x + 0.5, p.y +0.5) >= threshold;
        bool Pbottomleft = blob->potential(p.x - 0.5, p.y +0.5) >= threshold;



        //Check if the pixel is on the curve
        if (!(Ptopleft == Ptopright && Ptopright == Pbottomright && Pbottomright == Pbottomleft)) {

            //Drawing the current pixel
            ui->drawPixel(p.x, p.y);

            // Instantiating the points around this point
            Point pleft = Point(p.x - 1, p.y);
            Point pright = Point(p.x + 1, p.y);
            Point pup = Point(p.x, p.y + 1);
            Point pdown = Point(p.x, p.y - 1);

            // Instantiating diagonal points
            Point ptopright = Point(p.x + 1, p.y - 1);
            Point pbottomright = Point(p.x + 1, p.y + 1);
            Point pbottomleft = Point(p.x - 1, p.y + 1);
            Point ptopleft = Point(p.x - 1, p.y - 1);

            // Adding them to the worklist
            worklist.push(pleft);
            worklist.push(pright);
            worklist.push(pup);
            worklist.push(pdown);
            worklist.push(ptopright);
            worklist.push(pbottomright);
            worklist.push(pbottomleft);
            worklist.push(ptopleft);

            

        }    
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

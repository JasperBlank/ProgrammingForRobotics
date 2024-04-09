//==============================================================
// Filename    : DrawContourScanning.cpp
// Authors     : Jasper Blank & Lucas Koreeda
// Group       : 8
// License     : LGPL
// Description : Better Contour marching algorithm
//==============================================================

#include "DrawContourMarchingBetter.h" 
#include <queue>
#include <set>

// draw contour
void DrawContourMarchingBetter::drawContour(float threshold) {
    
    //Finding the first point to the right
    float currentX = 0;
    float currentY = 0;
    //Point FirstpointLeft;

    while(currentX > xLeft ){
        currentX -= 1;
        
        if (DrawContourMarching::isDifferent(&currentX, &currentY, threshold))
        {
            break;
        }
        
    }
    Point FirstpointLeft1 = Point(currentX,currentY);
    Point FirstpointLeft2 = Point(currentX-1,currentY);
    Point FirstpointLeft3 = Point(currentX-2,currentY);

    currentX = 0;
    currentY = 0;
    
    while(currentX < xRight){
        currentX += 1;
        
        if (DrawContourMarching::isDifferent(&currentX, &currentY, threshold))
        {
            break;
        }         
    }
    Point FirstpointRight1 = Point(currentX-1,currentY);
    Point FirstpointRight2 = Point(currentX,currentY);
    Point FirstpointRight3 = Point(currentX+1,currentY);

    //Finding the first point to the left


    std::queue<Point> worklist;
    std::set<Point> visitedlist;

    worklist.push(FirstpointLeft1);
    worklist.push(FirstpointLeft2);
    worklist.push(FirstpointLeft3);
    worklist.push(FirstpointRight1);
    worklist.push(FirstpointRight2);
    worklist.push(FirstpointRight3);

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

bool DrawContourMarchingBetter::isDifferent (float *x, float *y, float threshold){
    
    // true if pixel is above threshold
    bool previousPixel = blob->potential(*x-1, *y) > threshold;
    bool currentPixel = blob->potential(*x, *y) > threshold;

    if (previousPixel != currentPixel){
        return true;}
    else{
        return false;}
}

#pragma once
#include"Shape.h"
#include"Point.h"

class Circle
{
    public :    
                Circle(Point Center ,int Radius);
                void plot(Point Center,int Radius);

    private :
                Point mCenter;
                int mRadius;    
              
};
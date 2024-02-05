#pragma once
class Shape
{  
    public :
    Shape();
    ~Shape();
 
    virtual void plot() = 0;
};
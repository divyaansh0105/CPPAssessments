#pragma once 

class Point
{
    public :    Point();
                Point(float x,float y,float z);
                Point(float x, float y);
                float get_x();
                float get_y();
                float get_z();

    private :
                float mX ;
                float mY ;
                float mZ ;
};
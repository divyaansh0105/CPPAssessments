#pragma once
#include"Point.h"
#include"Shape.h"


class Line
{
    public :
                Line();
                void plot(Point m1 , Point m2);
    private :
                Point m1;
                Point m2;
};
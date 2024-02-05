#pragma once
#include"Shape.h"
#include"Point.h"

class Recatangle 
{
    public :     
                Recatangle();
                Recatangle(Point P1,Point P2,Point P3,Point P4);
                void plot(Point P1,Point P2,Point P3,Point P4);
    
    private :   
                Point mP1,mP2,mP3,mP4;
};
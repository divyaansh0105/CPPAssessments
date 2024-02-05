#pragma once
#include"Shape.h"
#include"Point3D.h"

class Triangle
{
    private:
            Point3D mP1,mP2,mP3;
    public:
            Triangle();
            Triangle(Point3D P1,Point3D P2,Point3D P3);
            ~Triangle();
            void plot(Point3D P1,Point3D P2,Point3D P3);
};

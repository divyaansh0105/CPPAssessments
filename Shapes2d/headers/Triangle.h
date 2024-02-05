#include"Shape.h"
#include"Point.h"

class Triangle
{

public:
        Triangle(Point P1,Point P2 ,Point P3);
        void plot(Point P1,Point P2 ,Point P3);
private:
        Point mP1,mP2,mP3;
};



#include <cmath>
#include "../headers/Square.h"
using namespace std;

Square::Square() : areaSquare(0), perimeterSquare(0){}

void Square::dimSquare(int side)
{
    
    this->sideSquare = side;

    areaSquare = pow(sideSquare, 2);
    perimeterSquare = 4 * (sideSquare);
}

 int Square::areaOfSquare()
 {
    return areaSquare;
 }

int Square::perimeterOfSquare()
{
    return perimeterSquare;
}

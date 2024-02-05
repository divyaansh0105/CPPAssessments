#include "../headers/Rectangle.h"
using namespace std;

Rectangle::Rectangle() : areaRec(0), perimeterRec(0){}

void Rectangle::dimRec(int len, int wid)
{
    // Assign length & breadth
    this->lengthRec = len;
    this->breadthRec = wid;

    areaRec = lengthRec * breadthRec;
    perimeterRec = 2 * (lengthRec + breadthRec);
}

 int Rectangle::areaOfRec()
 {
    return areaRec;
 }

int Rectangle::perimeterOfRec()
{
    return perimeterRec;
}

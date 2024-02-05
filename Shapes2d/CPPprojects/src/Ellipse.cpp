#include <cmath>
#include "../headers/Ellipse.h"
using namespace std;

Ellipse::Ellipse() : areaEll(0), circumferenceEll(0){}

void Ellipse::dimEll(float majorAx, float minorAX)
{
    // Assign length & breadth
    this->majorAxisEll = majorAx;
    this->minorAxisEll = minorAX;

    areaEll = M_PI * majorAxisEll * minorAxisEll;
    circumferenceEll = M_PI * (3 * (majorAxisEll + minorAxisEll) - sqrt((3 * majorAxisEll + minorAxisEll) * (majorAxisEll + 3 * minorAxisEll)));

}
float Ellipse::areaOfEll()
 {
    return areaEll;
 }

float Ellipse::circumferenceOfEll()
{
    return circumferenceEll;
}

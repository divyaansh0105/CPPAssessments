#include<cmath>
#include "../headers/Circle.h"
using namespace std;

Circle::Circle() : areaCir(0.0f), circumferenceCir(0.0f){}

void Circle::dimCir(float rad)
{
    // Assign radius
    this->radiusCir = rad;

    areaCir = M_PI * pow(radiusCir, 2);
    circumferenceCir = 2 * M_PI * radiusCir;
}

float Circle::areaOfCir()
 {
    return areaCir;
 }

float Circle::circumferenceOfCir()
{
    return circumferenceCir;
}

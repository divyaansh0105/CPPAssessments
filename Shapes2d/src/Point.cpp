#include"../headers/Point.h"

using namespace std;

Point::Point()
{
    mX = 0 ;
    mY = 0 ;
    mZ = 0;
}

Point::Point(float x , float y)
{
    mX = x ;
    mY = y ;
   // mZ = z;
} 

Point::Point(float x , float y,float z)
{
    mX = x ;
    mY = y ;
    mZ = z;
} 

float Point::get_x()
{
    return this->mX;
}

float Point::get_y()
{
    return this->mY;
}

// float Point::get_z()
// {
//     return this->mZ;
// }
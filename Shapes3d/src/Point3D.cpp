#include"../headers/Point3D.h"

using namespace std;

Point3D::Point3D()
{
    mX = 0 ;
    mY = 0 ;
    mZ = 0;
}

Point3D::Point3D(float x , float y,float z)
{
    this->mX = x ;
    this->mY = y ;
    this->mZ = z;
} 

float Point3D::get_x()
{
    return this->mX;
}

float Point3D::get_y()
{
    return this->mY;
}

float Point3D::get_z()
{
    return this->mZ;
}

void Point3D::set_x(float x)
{
    mX = x;
}
void Point3D::set_y(float y)
{
    mY = y;
}
void Point3D::set_z(float z)
{
    mZ= z;
}
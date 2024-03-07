#include "../headers/Point2D.h"

Point2D::Point2D() : mX(0), mY(0) {}

Point2D::Point2D(double x, double y) : mX(x), mY(y) {}

double Point2D::x() const {
    return mX;
}

double Point2D::y() const {
    return mY;
}


void Point2D ::setX(double x)
{
    mX = x;
}
void Point2D ::setY(double y)
{
    mY = y;
}


Point2D::~Point2D() {}

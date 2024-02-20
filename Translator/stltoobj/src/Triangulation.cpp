#include "..\headers\Triangulation.h"
#include "..\headers\Triangle.h"
#include "..\headers\Point3D.h"
#include <vector>

// using namespace Shape3D;

Shape3D::Triangulation::Triangulation()
{
}
Shape3D::Triangulation::~Triangulation()
{
}

vector<Shape3D::Triangle> &Shape3D::Triangulation::triangles()
{
    return mTriangles;
}

vector<Shape3D::Point3D> &Shape3D::Triangulation::uniquePoints()
{
    return mUniquePoints;
}

vector<Shape3D::Point3D> &Shape3D::Triangulation :: uniqueNormals()
{
    return mUniqeNormals;
}
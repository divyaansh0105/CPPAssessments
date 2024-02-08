#pragma once
#include<vector>
#include<map>
#include"Triangle.h"
#include "Point3D.h"
using namespace std;

namespace Shape3D
{
class Triangulation
{
    public:
        Triangulation();
        ~Triangulation();
        vector<Triangle>& triangles();
        vector<Point3D>& uniquePoints();
        vector<Point3D>& uniqueNormals();
        
        
    private:
        vector<Triangle> mTriangles;
        vector<Point3D> mUniquePoints;
        vector<Point3D>mUniqeNormals;

};
}
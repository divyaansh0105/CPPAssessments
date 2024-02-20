#pragma once
#include<vector>
#include"Point3D.h"
#include"Point2D.h"
using namespace std;

class ConvexHull
{
     public :


                  vector<Point2D> convexHull(vector<Point2D>&points);
    //             vector<Point3D> convexHull(vector<Point3D>& points);
    //             void findHull(Point3D p1, Point3D p2, vector<Point3D>& points, vector<Point3D>& hull);
    //             double distance(Point3D p1, Point3D p2, Point3D p);
    //             int orientation(Point3D p, Point3D q, Point3D r);
    //             vector<Point3D>quickhull(vector<Point3D>& points); // public :
    private :
};
#include<iostream>
#include "./headers/Point3D.h"
#include "./headers/Triangle.h"
#include "./headers/Triangulation.h"
#include "./headers/STLreader.h"
#include "./headers/STLwriter.h"
#include "./headers/Point2D.h"
#include"./headers/ConvexHull.h"
using namespace std;

int main()
{

    ConvexHull convex;
    string filepath1 = "D:/Divyaansh_Workspace/c++/Convex Hull/Convex/Input/Pointsinput.txt";
    STLReader reader;
    vector<Point2D> points = reader.readpoints(filepath1);
    cout<<"\nSize of points:-"<<points.size();
    //vector<Point3D> points = {{0, 3, 0}, {2, 2, 0}, {1, 1, 1}, {2, 1, 0}, {3, 0, 0}, {0, 0, 0}, {3, 3, 3}};
    // vector<Point3D> points = {{0, 0, 0}, {1,1,1}, {2,0,1}, {0,2,1}, {1,0,2}, {0,1,2}, {2,2,0}};
    vector<Point2D> convexHullPoints = convex.convexHull(points);
    string filepath = "D:/Divyaansh_Workspace/c++/Convex Hull/Convex/output/Convex.txt";
    STLWriter writeintxt;
    writeintxt.writeintxt(filepath,convexHullPoints);
    // cout << "Convex Hull Points:\n";
    // for (const auto& p : convexHullPoints) {
    //     cout << "(" << p.x() << ", " << p.y() << ", " << p.z() << ")\n";
    // }

}
#include"../headers/Point3D.h"
#include"../headers/ConvexHull.h"
#include<iostream>
#include<math.h>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point2D p, Point2D q, Point2D r)
{   

    int val = (q.y() - p.y()) * (r.x() - q.x()) - (q.x() - p.x()) * (r.y() - q.y());
    if (val == 0)
        return 0; // colinear
    return (val > 0) ? 1 : 2; // clock or counterclock wise
}
// Prints convex hull of a set of n points.
vector<Point2D> ConvexHull:: convexHull(vector<Point2D>&points)
{
    // There must be at least 3 points
    int n  = points.size();
    // if (n < 3)
    //     return 0;
    // // Initialize Result
    int next[n];
    for (int i = 0; i < n; i++)
        next[i] = -1;
    // Find the leftmost point
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x() < points[l].x())
            l = i;
    // Start from leftmost point, keep moving counterclockwise
    // until reach the start point again
    int p = l, q;
    do
    {
        // Search for a point 'q' such that orientation(p, i, q) is
        // counterclockwise for all points 'i'
        q = (p + 1) % n;
        for (int i = 0; i < n; i++)
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        next[p] = q; // Add q to result as a next point of p
        p = q; // Set p as q for next iteration
    }
    while (p != l);
    // Print Result
    vector<Point2D>newpoints;

    for (int i = 0; i < n; i++)
    {
        if (next[i] != -1)
            {   
                double x ,y;
              x = points[i].x(); 
              y = points[i].y() ;
              Point2D P(x,y);
              newpoints.push_back(P);
            
           }
    }
    return newpoints;
}





























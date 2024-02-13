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




























// //  vector<Point3D> ConvexHull::convexHull(vector<Point3D>& points)
// //  {
// //     if (points.size() < 3) return vector<Point3D>();
// //     vector<Point3D> hull;
// //     int min_x = 0, max_x = 0;
// //     for (int i = 1; i < points.size(); i++) {
// //         if (points[i].x() < points[min_x].x()) min_x = i;
// //         if (points[i].x() > points[max_x].x()) max_x = i;
// //     }
// //     cout<< "mini x "<<points[min_x].x()<<points[min_x].y()<<points[min_x].z()<<" "<<"maxi x"<<points[max_x].x()<<points[max_x].y()<<points[max_x].z()<<endl;
// //     findHull(points[min_x], points[max_x], points, hull);
// //     hull.push_back(points[min_x]); // Add min_x to the hull
// //     findHull(points[max_x], points[min_x], points, hull);
// //     return hull;
// //  }

// //  void ConvexHull::findHull(Point3D p1, Point3D p2, vector<Point3D>& points, vector<Point3D>& hull)
// //  {
// //     if (points.empty()) return;
// //     int index = -1;
// //     double max_dist = 0;
// //     for (int i = 0; i < points.size(); i++) {
// //         double dist = distance(p1, p2, points[i]);
// //         if (dist > max_dist) {
// //             index = i;
// //             max_dist = dist;
// //         }
// //     }
// //     cout<<"index of points :"<<index<<endl;
// //     cout<<"max-dist"<<max_dist<<endl;
// //     if (index == -1) {
// //         // No point found, return without modifying the hull
// //         return;
// //     }
// //     Point3D p_max = points[index];
// //     vector<Point3D> s1, s2;
// //     for (int i = 0; i < points.size(); i++) {
// //         if (i != index && orientation(p1, p_max, points[i]) == 1)
// //             s1.push_back(points[i]);
// //     }
// //     for (int i = 0; i < points.size(); i++) {
// //         if (i != index && orientation(p_max, p2, points[i]) == 1)//
// //             s2.push_back(points[i]);
// //     }
 
 
// //     cout << "Intermediate point p_max: (" << p_max.x() << ", " << p_max.y() << ", " << p_max.z() << ")\n";
// //     // cout << "Points in s1: ";
// //     // for (const auto& p : s1) {
// //     //     cout << "(" << p.x() << ", " << p.y() << ", " << p.z() << ") ";
// //     // }
// //     // cout << "\nPoints in s2: ";
// //     // for (const auto& p : s2) {
// //     //     cout << "(" << p.x() << ", " << p.y() << ", " << p.z() << ") ";
// //     // }
// //     cout << endl;
// //     findHull(p1, p_max, s1, hull);
// //     hull.push_back(p_max); // Add p_max to the hull
// //     findHull(p_max, p2, s2, hull);
// //  }

// //  double ConvexHull::distance(Point3D p1, Point3D p2, Point3D p)
// //  {
// //     double area = abs((p.y() - p1.y()) * (p2.x() - p1.x()) - (p2.y() - p1.y()) * (p.x() - p1.x()));
// //     double base = sqrt((p2.x() - p1.x()) * (p2.x() - p1.x()) + (p2.y() - p1.y()) * (p2.y() - p1.y()));
// //     return area / base;
// //  }

// //  int ConvexHull::orientation(Point3D p, Point3D q, Point3D r) 
// //  {
// //     double val = (q.y() - p.y()) * (r.x() - q.x()) - (q.x() - p.x()) * (r.y() - q.y());
// //     if (val == 0) return 0; // Colinear
// //     return (val > 0) ? 1 : 2; // Clockwise or counterclockwise
// // }





// /// @brief //////////////////////////
// /// 
// void quickHull(const vector<Point3D>& v, const Point3D& a, const Point3D& b, 
// 			   vector<Point3D>& hull) {
// 	if (v.empty()) {
// 		return;
// 	}
 
// 	point f = v[getFarthest(a, b, v)];
 
// 	// Collect points to the left of segment (a, f)
// 	vector<point> left;
// 	for (auto p : v) {
// 		if (ccw(a, f, p) > 0) {
// 			left.push_back(p);
// 		}
// 	}
// 	quickHull(left, a, f, hull);
// 	// Add f to the hull
// 	hull.push_back(f);
 
// 	// Collect points to the left of segment (f, b)
// 	vector<point> right;
// 	for (auto p : v) {
// 		if (ccw(f, b, p) > 0) {
// 			right.push_back(p);
// 		}
// 	}
// 	quickHull(right, f, b, hull);
// }
// vector<Point3D> ConvexHull::quickhull(vector<Point3D>& v)
// {
// 	vector<point> hull;
// 	// Start with the leftmost and rightmost points.
// 	point a = *min_element(v.begin(), v.end(), isLeftOf);
// 	point b = *max_element(v.begin(), v.end(), isLeftOf);
 
// 	// Split the points on either side of segment (a, b)
// 	vector<point> left, right;
// 	for (auto p : v) {
// 		ccw(a, b, p) > 0 ? left.push_back(p) : right.push_back(p);
// 	}
// 	// Be careful to add points to the hull
// 	// in the correct order. Add our leftmost point.
// 	hull.push_back(a);
 
// 	// Add hull points from the left (top)
// 	quickHull(left, a, b, hull);
 
// 	// Add our rightmost point
// 	hull.push_back(b);
 
// 	// Add hull points from the right (bottom)
// 	quickHull(right, b, a, hull);
 
// 	return hull;
// }



#include "../headers/ObjToStl.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void Shape3D :: ObjToStl::objToStlConversion(std::string &filePath, Triangulation &triangulation)
{
    ofstream outFile(filePath);

    if (!outFile.is_open())
    {
        cout << "Error while opening text file." << endl;
        return;
    }

    // Extract points and triangles from the triangulation
    vector<Point3D> &points = triangulation.uniquePoints();
    vector<Triangle> &triangles = triangulation.triangles();
    vector<Point3D> &normals = triangulation.uniqueNormals();
    outFile << "solid" << endl;
    // Write each triangle to the STL file
    for (const Triangle &triangle : triangles)
    {
        // Write facet information
        outFile << "facet normal " << normals[triangle.normalIndex()].x()<<" "<<normals[triangle.normalIndex()].y()<<" "<<normals[triangle.normalIndex()].z()<<endl;
        outFile << "outer loop" << endl;

        // Write vertex information for each point of the triangle
        outFile << "  vertex"
                << " " << points[triangle.v1()].x() << " " << points[triangle.v1()].y() << " " << points[triangle.v1()].z() << endl;
        outFile << "  vertex"
                << " " << points[triangle.v2()].x() << " " << points[triangle.v2()].y() << " " << points[triangle.v2()].z() << endl;
        outFile << "  vertex"
                << " " << points[triangle.v3()].x() << " " << points[triangle.v3()].y() << " " << points[triangle.v3()].z() << endl;

        outFile << "endloop" << endl;
        outFile << "endfacet" << endl;
    }

    outFile << "endsolid";
    outFile.close();

    cout << "Data writing from .obj to .stl file successful!" << endl;
}

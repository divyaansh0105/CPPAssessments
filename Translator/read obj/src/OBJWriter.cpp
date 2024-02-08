#include "../headers/OBJWriter.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "../headers/Point3D.h"
using namespace std;

void Shape3D :: OBJWriter::  writeOBJ(std::string &filePath,Triangulation &triangulation)
{
     std::ofstream outFile(filePath);
 
    if (!outFile.is_open())
    {
        cout << "Error while opening the file for writing." << endl;
    }
 
    vector<Point3D> &points = triangulation.uniquePoints();
    vector<Triangle> &triangles = triangulation.triangles();

    // Write each triangle's vertices to the OBJ file
    for (const Triangle &triangle : triangles)
    {
        // Triangle vertices are 1-based, so subtract 1 to get the correct index
        outFile << points[triangle.v1()].x() << " " << points[triangle.v1()].y() << " " << points[triangle.v1()].z() << endl;
        outFile << points[triangle.v2()].x() << " " << points[triangle.v2()].y() << " " << points[triangle.v2()].z() << endl;
        outFile << points[triangle.v3()].x() << " " << points[triangle.v3()].y() << " " << points[triangle.v3()].z() << endl;
    }

    // Close the OBJ file
    outFile.close();

    cout << "Data written from OBJ to text file successfully!" << endl;
}
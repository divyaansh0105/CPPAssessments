
#pragma once
#include <string>
#include <vector>
#include "Triangle.h"
#include"Triangulation.h"
#include"Point2D.h"
#include<map>

class STLWriter
{
    public:
        // Function to write geometry data to an STL file
        void writeSTLToFile(std::string &filePath, Triangulation &triangulationObj);
        void writeintxt(std::string &filePath, vector<Point2D>&points);
};

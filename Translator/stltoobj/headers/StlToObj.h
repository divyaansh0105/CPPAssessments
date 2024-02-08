#pragma once
#include <vector>
#include<string>
#include "Triangle.h"
#include"Triangulation.h"

namespace Shape3D
{
    class StlToObj
    {
    public:
        // Function to convert STL file to OBJ format
        void stlToObjConversion(std::string &filePath, Triangulation &triangulation);
    };
}
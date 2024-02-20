#pragma once

#include <map>
#include <string>
#include <vector>
#include "Triangulation.h"

namespace Shape3D
{
    class STLReader
    {
    public:
        // Function to read data from an STL file and populate a Triangulation object
        void readSTL(std::string &filePath, Triangulation &triangulation);
    };
}
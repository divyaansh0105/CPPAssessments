#pragma once
#include <string>
#include <vector>
#include "GeomVector.h"
namespace Geometry
{
    class Writer
    {
    public:
        // Function to write geometry data to an STL file
        void write(std::string &filePath,std::vector<GeomVector> &vectors);
    };
}
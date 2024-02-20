#pragma once

#include <vector>
#include <string>
#include "Triangulation.h"

namespace Shape3D
{
    class OBJReader
    {
    public:
        // Reads an OBJ file
        void readOBJ(std::string &filePath, Triangulation &triangulation);
    };
}

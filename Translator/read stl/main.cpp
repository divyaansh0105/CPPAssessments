#include <iostream>
#include <vector>
#include "./headers/Point3D.h"
#include "./headers/Triangulation.h"
#include "./headers/STLReader.h"
#include "./headers/STLWriter.h"
int main()
{
    try
    {
        string filepath = "D:/Divyaansh_Workspace/c++/Translator/read stl/inputfiles/cube.stl";
        string filepath1 = "D:/Divyaansh_Workspace/c++/Translator/read stl/outputfiles/writeSTL.txt";
        Shape3D::Triangulation triangulation;
        Shape3D::STLReader stlReader;
        stlReader.readSTL(filepath, triangulation);

        Shape3D::STLWriter stlWriter;
        stlWriter.writeSTLToFile(filepath1, triangulation);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
#include <iostream>
#include "./headers/OBJReader.h"
#include "./headers/Triangulation.h"
#include "./headers/ObjToStl.h"

int main()
{
    try
    {
        string filepath = "D:/Divyaansh_Workspace/c++/Translator/objtostl/inputfiles/cube1.obj";
        string filepath1 = "D:/Divyaansh_Workspace/c++/Translator/objtostl/outputfiles/objtostl.stl";
        Shape3D::Triangulation triangulation;
        Shape3D::OBJReader objReader;
        objReader.readOBJ(filepath, triangulation);

        Shape3D::ObjToStl objToStl;
        objToStl.objToStlConversion(filepath1, triangulation);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
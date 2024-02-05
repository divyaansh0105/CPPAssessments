#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include "../headers/Point3D.h"
#include "../headers/StlReader.h"
#include "../headers/Triangle.h"

using namespace std;

Stlreader::Stlreader()
{
    ;
}

Stlreader::~Stlreader()
{
    ;
}

void Stlreader::readfile()
{
    std::ifstream readFromFile("Sphere.stl");
    std::ofstream WriteToFile("Cube1.txt");

    if (readFromFile.is_open() || WriteToFile.is_open())
    {
        vector<Triangle> vertexData;
        vector<Point3D> points;
        string line;
        while (getline(readFromFile, line))
        {
            Point3D p1(0,0,0);
            if (line.find("vertex") != std::string::npos)
            {
                istringstream iss(line);
                string keyword;
                double x, y, z;
                iss >> keyword >> x >> y >> z;
                p1.set_x(x);
                p1.set_y(y);
                p1.set_z(z);
                 //Point3D p1(x, y, z);
                points.push_back(p1);
            }
        }

        for (size_t i = 0; i < points.size(); i+= 3)
        {
            Triangle triangl1(points[i],points[i+1],points[i+2]);
            vertexData.push_back(triangl1);
        }
        
        for (size_t i = 0; i < vertexData.size(); i ++)
        {
            WriteToFile << vertexData[i].mP1().get_x() << " " << vertexData[i].mP1().get_y() << " " << vertexData[i].mP1().get_z() << std::endl;
            WriteToFile << vertexData[i].mP2().get_x() << " " << vertexData[i].mP2().get_y() << " " << vertexData[i].mP2().get_z() << std::endl;
            WriteToFile << vertexData[i].mP3().get_x() << " " << vertexData[i].mP3().get_y() << " " << vertexData[i].mP3().get_z() << std::endl;

        }
        std::cout << "Data extraction and writing completed successfully." << std::endl;
        readFromFile.close();
        WriteToFile.close();
    }
    else
    {
        std::cerr << "Error opening files!" << std::endl;
    }
}

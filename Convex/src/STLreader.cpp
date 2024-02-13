#include "../headers/STLreader.h"
#include"../headers/Point2D.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void STLReader ::readSTL(std::string &filePath,Triangulation &triangulation)
{
    std::ifstream inputFile(filePath);
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file: " << std::endl;
        return;
    }
    // Map to store unique points and their corresponding indices
    std::map<Point3D, int> mappedCoordinates;
    std::map<Point3D, int> mappedNormals;
    // Read each line of the STL file
    std::string line;
    int count = 1;
    int normalIndex;
    int index1;
    int index2;
    int index3;

    while (std::getline(inputFile, line))
    {
        
        if (line.find("facet normal") != std::string::npos)
        {
            double x;
            double y;
            double z;
            istringstream iss(line);
            string token1;
            string token2;
            iss >>token1>>token2 >> x >> y >> z;
            // Create a Point3D object
            Point3D point(x, y, z);

            // Check if the point is already mapped
            auto iterator = mappedNormals.find(point);

            // If not mapped, add to uniquePoints and update the mapping
            if (iterator == mappedNormals.end())
            {
                mappedNormals[point] = triangulation.uniqueNormals().size();
                triangulation.uniqueNormals().push_back(point);
            }

            normalIndex = mappedNormals[point];
        }
        // Check if the line contains "vertex"
        if (line.find("vertex") != std::string::npos)
        {
            // Extract x, y, z coordinates from the line
            double x;
            double y;
            double z;
            istringstream iss(line);
            string token;
            iss >> token >> x >> y >> z;

            // Create a Point3D object
            Point3D point(x, y, z);

            // Check if the point is already mapped
            auto iterator = mappedCoordinates.find(point);

            // If not mapped, add to uniquePoints and update the mapping
            if (iterator == mappedCoordinates.end())
            {
                mappedCoordinates[point] = triangulation.uniquePoints().size();
                triangulation.uniquePoints().push_back(point);
            }

            // Assign indices based on the mapping
            if (count == 1)
            {
                index1 = mappedCoordinates[point];
                count++;
            }
            else if (count == 2)
            {
                index2 = mappedCoordinates[point];
                count++;
            }
            else if (count == 3)
            {
                index3 = mappedCoordinates[point];
                count++;
            }
        }

        // When three vertices are processed, create a triangle and reset count
        if (count == 4)
        {
            triangulation.triangles().push_back(Triangle(index1, index2, index3, normalIndex));
            count = 1;
        }
    }
    // Close the STL file
    inputFile.close();
}



vector<Point2D> STLReader::readpoints(std::string &filePath)
{   

    std::fstream CoordinatesFile(filePath);
    // if (!CoordinatesFile.is_open())
    // {
    //     std::cerr << "Error opening file: " << std::endl;
    //     return 0;
    // }

    vector<Point2D> Points;
    char ch;
    cout<<"\n Do you want to add points(need atleast 3 points):-"<<endl<<"Y for yes / N for no:-";
    cin>>ch;

    while(ch=='y'|| ch=='Y')
    {   
        double x, y;
        cout<<"\nEnter Coordinates of the points:- "<<endl;
        cin>>x>>y;

        Point2D P(x,y);

        Points.push_back(P);
        CoordinatesFile<<P.x()<<" "<<P.y()<<endl;

        cout<<"\n Do you want to add more points(need atleast 3) ?"<<endl<<"y for yes / n for no:-";
        cin>>ch;
    }

CoordinatesFile<<Points[0].x()<<" "<<Points[0].y()<<" "<<endl;
CoordinatesFile.close();
return Points;
}
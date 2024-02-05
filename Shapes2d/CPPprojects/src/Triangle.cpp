#include "../headers/Triangle.h"
#include<fstream>
using namespace std;

Triangle::Triangle() : areaTri(0.0f), perimeterTri(0){}

void Triangle::dimTri(int s1, int s2, int s3, int ht)
{
    // Assign length & breadth
    this->sideOneTri = s1;
    this->sideTwoTri = s2;
    this->baseTri = s3;
    this->heightTri = ht;

    areaTri = (float)((1 / 2) * baseTri * heightTri);
    perimeterTri = sideOneTri + sideTwoTri + baseTri;
}

 float Triangle::areaOfTri()
 {
    return areaTri;
 }

int Triangle::perimeterOfTri()
{
    return perimeterTri;
}

void Triangle::draw_Tri(int x1,int y1,int x2,int y2,int x3,int y3)
{
            ofstream outputFile("triangle.txt");
            outputFile<<x1<<" "<<y1<<endl;
            outputFile<<x2<<" "<<y2<<endl;
            outputFile<<x3<<" "<<y3<<endl;
            outputFile.close();

            
           
            
}
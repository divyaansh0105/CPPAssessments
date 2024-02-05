#include<cmath>
#include<iostream>
#include<fstream>
#include "../headers/Line.h"
using namespace std;

Line::Line() : lengthOfLine(0){}

void Line::dimLine(int cord1x, int cord1y, int cord2x, int cord2y)
{
    // Assign length & breadth
    this->point1x = cord1x;
    this->point1y = cord1y  ;
    this->point2x = cord2x;
    this->point2y = cord2y;
    
     lengthOfLine = sqrt(pow((point2x - point1x), 2) + pow((point2y - point1y), 2));
     

}

int Line::lineLen()
{
    
    return lengthOfLine;
    
}

void Line::draw(int cord1x, int cord1y, int cord2x, int cord2y) 
{           
            ofstream outputFile("line.txt");

            outputFile<<cord1x<<" "<<cord1y<<endl;
            outputFile<<cord2x<<" "<<cord2y<<endl;

            outputFile.close();

}

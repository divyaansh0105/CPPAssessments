
#include <iostream>

class Triangle
{
    public:
        float areaTri;
        Triangle();
        void dimTri(int s1, int s2, int s3, int ht);
        float areaOfTri();
        int perimeterOfTri();
        void draw_Tri(int x1,int y1,int x2,int y2,int x3,int y3);
    
    private :
         int sideOneTri, sideTwoTri, baseTri, heightTri, perimeterTri;
};


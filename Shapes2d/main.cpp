#include<iostream>
#include"./headers/Point.h"
#include"./headers/Line.h"
#include"./headers/Square.h"
#include"./headers/Rectangle.h"
#include"./headers/Triangle.h"
#include"./headers/Circle.h"

using namespace std;

int main()
{   
    char ch;
    
    while(1)
    {
        cout<<"\n Enter your choice"
        <<endl<<"1)Line"
        <<endl<<"2)Square"
        <<endl<<"3)Recatangle"
        <<endl<<"4)Triangle"
        <<endl<<"5)Circle"
        <<endl<<"6)Ellipse"
        <<endl<<"7)Exit"
        <<endl;
        cin>>ch;
            switch(ch)
        {
            case '1': 
                        {   
                            
                            int x,y;
                            cout<<"\n Enter the coordinates of the second point:-";
                            cin>>x>>y;
                            Point P1,P2(x,y);
                            Line L;
                            L.plot(P1,P2);
                            break;
                        }
            case '2': 
                        {   int side;
                            cout<<"\n Enter the length of side of square:-";
                            cin>>side;
                            Point P1,P2(side,0),P3(side,side),P4(0,side);
                            Square S1(P1,P2,P3,P4);
                            cout<<"\n Here";
                            break;
                        }
            case '3': 
                        {
                            int length,breadth;
                            cout<<"\n Enter the length and breadth of Rectangle:-";
                            cin>>length>>breadth;
                            Point P1,P2(breadth,0),P3(breadth,length),P4(0,length);
                            Recatangle R1(P1,P2,P3,P4);
                            cout<<"\n Here";
                            break;
                            
                        }
            case '4': 
                         {   
                            int x1,y1,x2,y2;
                            cout<<"\n Enter coordinates of 2 sides of triangle(1st is at origin):-";
                            cin>>x1>>y1>>x2>>y2;
                            Point P1,P2(x1,y1),P3(x2,y2);
                            Triangle T(P1,P2,P3);
                            cout<<"\nHere";

                           break;
                        }
  
            case '5': 
                        {   
                            int x,y,r;
                            cout<<"\nEnter the coordinates of center and radius of circle:-";
                            cin>>x>>y>>r;
                            Point P(x,y);
                            Circle C(P,r);
                            cout<<"\nHere";


                            break;
                        }
  
            case '6': 
                        {   int x,y,r;
                            cout<<"\nEnter the coordinates of center and radius of circle:-";
                            cin>>x>>y>>r;
                            Point P(x,y);
                            Circle C(P,r);
                            cout<<"\nHere";
                            break;
                        }
  
            case '7': 
                        {
                            exit(1);
                        }
            default :
                        {
                            cout<<"\n Please enter correct choice";
                        }
  
        }
    }
    return 1;
}
#include <iostream>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Square.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"

using namespace std;

int main()
{

         
    while(1)
    {
        cout << "Select one of following shape to get geometric dimensions" << endl;
        cout << "(1) Line" << endl
             << "(2) Triangle" << endl
             << "(3) Square" << endl
             << "(4) Rectangle" << endl
             << "(5) Circle" << endl
             << "(6) Ellipse" << endl
             << "(7)Exit"<<endl;

        // Variable declarations
        int Shape;
        cin >> Shape;

        switch (Shape)
        {
        // Line
        case 1: {
            Line lin;
            cout<< endl;
            cout << "Please provide coordinates for Point1 & Point2 : " << endl;

            // Local variables for Line
              
            int lP1x, lP1y, lP2x, lP2y;
            cin >> lP1x >> lP2y >> lP2x >> lP2y;
            lin.draw(lP1x, lP1y, lP2x, lP2y);
            //cout << "Length of Line is " << lin.lineLen() << endl;

            break;
        }

        // Triangle
        case 2:
        {   system("CLS");
            Triangle tri;
            cout << endl;
            char choice;
            cout<<"\n Select :-"<<endl<<"1)Area & Perimeter "<<endl<<"2)Draw"<<endl<<"-";
            cin>>choice;
            if(choice == '1')
            {
            cout << "Please provide side1, side2, base & height for getting geometrical dimension:- " << endl;
            // Local variables for Triangle
            int tS1, tS2, tBase, tHt;
            cin >>tS1>>tS2>>tBase>>tHt ;
            //cin>>lHt;
            tri.dimTri(tS1,tS2,tBase,tHt);
            cout << "Area of Triangle is " << tri.areaOfTri() << endl;
            cout << "Perimeter of Triangle is " << tri.perimeterOfTri() << endl;
            }
            else if (choice == '2')
            {
                int x1,y1,x2,y2,x3,y3;

                cout<<"\n Enter the x and y coordinates for the 3 points of the triangle :-";
                cin>>x1>>y1>>x2>>y2>>x3>>y3;
                tri.draw_Tri(x1,y1,x2,y2,x3,y3);
                cout<<"\n The Dimensions have been recorded.";
                
            }
            else
            {
                cout<<"\n Pick the correct option.";
            }
            break;
        }

        // Square
        case 3:
        {
            Square squ;
            cout << endl;
            cout << "Please provide side for getting Square: " << endl;
            
            
            // Local variables for Square
            int lSide;
            cin >> lSide;

            squ.dimSquare(lSide);

            cout << "Area of Square is " << squ.areaOfSquare() << endl;
            cout << "Perimeter of Square is " << squ.perimeterOfSquare() << endl;

            break;
        }
        
        case 4:{
            Rectangle rec;
            cout << endl;
            cout << "Please provide length & breadth for Rectangle: " << endl;
           
            // Local variables for rectangle
            int lRecLen, lRecBre;
            cin >> lRecLen >> lRecBre;

            rec.dimRec(lRecLen, lRecBre);

            cout << "Area of Rectangle is " << rec.areaOfRec() << endl;
            cout << "Perimeter of Rectangle is " << rec.perimeterOfRec() << endl;

            break;
        }
        
        case 5:
        {
            Circle cir;
            cout << endl;
            cout << "Please provide radius for Circle: " << endl;
            
            // Local variables for Circle
            float lRadius;
            cin >> lRadius;

            cir.dimCir(lRadius);

            cout << "Area of Circle is " << cir.areaOfCir() << endl;
            cout << "Circumference of Circle is " << cir.circumferenceOfCir() << endl;

            break;
        }
       
        case 6:{
            cout << endl;
            cout << "Please provide major & minor axis for Ellipse : " << endl;
            
             Ellipse ell;
            // Local variables for Ellipse
            float lMajorAx, lMinorAx;
            cin >> lMajorAx >> lMinorAx;

            ell.dimEll(lMajorAx, lMinorAx);

            cout << "Area of Ellipse is " << ell.areaOfEll() << endl;
            cout << "Circumference of Ellipse is " << ell.circumferenceOfEll() << endl;

            break;
        }
        case 7 :
                {
                    exit(1);
                }
        default:
            break;
        }
        
    }

    return(0);
}
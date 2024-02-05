#include"../headers/Circle.h"
#include<fstream>
#include<iostream>

using namespace std;

Circle::Circle(Point Center,int Radius)
{
    mCenter = Center;
    mRadius = Radius;

    plot(mCenter,mRadius);
}

void Circle::plot(Point Center,int Radius)
{
    // ofstream output_file("Circles.dat");
     
    // output_file<<Center.get_x()<<" "<<Center.get_y()<<" "<<Radius<<endl;
    // output_file.close();
    
    ofstream gnuplotScript("Circles.gnuplot");
    gnuplotScript <<"set xrange [-10:10]"<<endl
                  <<"set yrange [-10:10]"<<endl
                  <<"set size square"<<endl
                  <<"set object 1 circle front at "<<Center.get_x()<<","<<Center.get_y()<<" size " <<Radius
                  <<" fillcolor rgb \"black\" lw 1"<<endl
                  <<"f(x) = 0"<<endl
                  <<"plot f(x)"<<endl;

    // ofstream gnuplotScript("Circles.gnuplot");
    // gnuplotScript << "set xrange [0:1]"<<endl
    //               <<"set yrange [0:1]"<<endl
    //               <<"set size square"<<endl
    //               <<" set object 1 circle front at 0.5,0.5 size 0.5 fillcolor rgb \"black\" lw 1"<<endl
    //               <<"f(x) = x"<<endl
    //               <<"plot f(x)"<<endl;
    gnuplotScript.close();
    
    system("gnuplot -persist Circles.gnuplot");
    cout<<"\nPlotted";

}
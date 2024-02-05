#include"../headers/Line.h"
#include<fstream>
#include<iostream>

using namespace std;

Line ::Line()
{
       cout<<"";
}

void Line::plot(Point m1 , Point m2)
{
    ofstream output_file("Line.dat");

    output_file<<m1.get_x()<<" "<<m1.get_y()<<endl;
    output_file<<m2.get_x()<<" "<<m2.get_y();

    output_file.close();
    ofstream gnuplotScript("line.gnuplot");
    gnuplotScript << "plot 'Line.dat' with lines" << std::endl;
    gnuplotScript.close();
    system("gnuplot -persist Line.gnuplot");
    cout<<"\nPlotted";

}
#include"../headers/Triangle.h"
#include<fstream>
#include<iostream>

using namespace std;

Triangle::Triangle(Point P1,Point P2 ,Point P3)
{
    mP1 = P1;
    mP2 = P2;
    mP3 = P3;

    plot(mP1,mP2,mP3);
}

void Triangle::plot(Point P1,Point P2,Point P3)
{
     ofstream output_file("Triangle.dat");

    output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;
    output_file<<P2.get_x()<<" "<<P2.get_y()<<endl;
    output_file<<P3.get_x()<<" "<<P3.get_y()<<endl;
    output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;
    
    output_file.close();
    
    ofstream gnuplotScript("Triangle.gnuplot");
    gnuplotScript << "plot 'Triangle.dat' with lines \n" <<endl;
    
    gnuplotScript.close();
    
    system("gnuplot -persist Triangle.gnuplot");
    cout<<"\nPlotted";
}

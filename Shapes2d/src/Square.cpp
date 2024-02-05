#include"../headers/Square.h"
#include<fstream>
#include<iostream>

using namespace std;


Square::Square()
{
    cout<<" ";
}

Square::Square(Point P1,Point P2,Point P3,Point P4)
{
    mP1 = P1;
    mP2 = P2;
    mP3 = P3;
    mP4 = P4;

    Square::plot(mP1,mP2,mP3,mP4);

}

void Square::plot(Point P1,Point P2,Point P3,Point P4)
{
     ofstream output_file("Square.dat");

    output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;
    output_file<<P2.get_x()<<" "<<P2.get_y()<<endl;
    output_file<<P3.get_x()<<" "<<P3.get_y()<<endl;
    output_file<<P4.get_x()<<" "<<P4.get_y()<<endl;
    output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;

    output_file.close();
    
    ofstream gnuplotScript("Square.gnuplot");
    gnuplotScript << "plot 'Square.dat' with lines" <<endl;
    
    gnuplotScript.close();
    
    system("gnuplot -persist Square.gnuplot");
    cout<<"\nPlotted";
}
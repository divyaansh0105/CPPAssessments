#include"../headers/Rectangle.h"
#include<fstream>
#include<iostream>

using namespace std;

Recatangle::Recatangle()
{

}

Recatangle::Recatangle(Point P1,Point P2,Point P3,Point P4)
{   mP1 = P1;
    mP2 = P2;
    mP3 = P3;
    mP4 = P4;

    plot(mP1,mP2,mP3,mP4);
}

void Recatangle::plot(Point P1,Point P2,Point P3,Point P4)
{
    //  ofstream output_file("Rectangle.dat");

    // output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;
    // output_file<<P2.get_x()<<" "<<P2.get_y()<<endl;
    // output_file<<P3.get_x()<<" "<<P3.get_y()<<endl;
    // output_file<<P4.get_x()<<" "<<P4.get_y()<<endl;
    // output_file<<P1.get_x()<<" "<<P1.get_y()<<endl;

    // output_file.close();
    
    // ofstream gnuplotScript("Rectangle.gnuplot");
    // gnuplotScript << "plot 'Rectangle.dat' with lines \n" <<endl;
    
    // gnuplotScript.close();
    ofstream gnuplotScript("Rectangle.gnuplot");
    
    gnuplotScript <<"set xrange [-10:10]"<<endl
                  <<"set yrange [-10:10]"<<endl
                  <<"set size square"<<endl
                  <<"set object 1 rectangle from "<<P1.get_x()<<","<<P1.get_y()<<" to " <<P3.get_x()<<","<<P3.get_y()
                  <<" fillcolor rgb \"black\" lw 1"<<endl
                  <<"f(x) = 0"<<endl
                  <<"plot f(x)"<<endl;
    gnuplotScript.close();
    system("gnuplot -persist Rectangle.gnuplot");
    cout<<"\nPlotted";
}

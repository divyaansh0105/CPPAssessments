#pragma once 

namespace LinearAlgebra
{
    class Matrix
    {
    public:
        Matrix();
        Matrix(double input_matrix[][3]);
 
        double element(int row, int col) const;
 
        ~Matrix();
 
    private:
        double mMatrix[3][3];
    };
}
#include <iostream>
#include<vector>
#include "../headers/matrix.h"
 
LinearAlgebra::Matrix::Matrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mMatrix[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }
}
 
LinearAlgebra::Matrix::Matrix(double input_matrix[3][3])
{
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0  ; j<3 ;j++ )
        {
            mMatrix[i][j] = input_matrix[i][j];
        }
    }
}
 
double LinearAlgebra::Matrix::element(int row, int col) const
{
    return mMatrix[row][col];
}
 
LinearAlgebra::Matrix::~Matrix() {}

#include <iostream>

/*
    Напишете функция, която приема матрица NxМ (N,М<=100) и две цели числа i и j и която разменя ред i с ред j.
*/ 

void swapRows(int matrix[100][100], int rows, int cols, int i, int j)
{
    if(i < 0 || i >= rows || j < 0 || j >= cols)
    {
        return;
    }

    for (int k = 0; k < cols; k++)
    {
        int temp = matrix[i][k];
        matrix[i][k] = matrix[j][k];
        matrix[j][k] = temp;
    }
}
int main()
{
    int matrix[100][100] = 
    {
        {3, 4, 5},
        {6, 2, 6},
        {1, 5, 7}
    };
    swapRows(matrix, 3, 3, 0, 2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "matrix[" << i << "][" << j << "]: " << matrix[i][j] << std::endl;
        }
        
    }
    

}
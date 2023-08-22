#include <iostream>

/*
    Напишете булева функция, която приема матрица NxN (N<=100), и която връща true,
    ако всички елементи под главния диагонал на матрицата са равни на нула и false в противен случай.
*/

bool isUpperTriangular(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int matrix[100][100] = 
    {
        {1, 2, 3, 8},
        {0, 5, 2, 4},
        {0, 0, 3, 4},
        {0, 0, 0, 10}
    };
    std::cout << isUpperTriangular(matrix, 4) << std::endl;

}
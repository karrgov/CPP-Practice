#include <iostream>

/*
    Напишете булева функция, която приема матрица NxN (N<=100), и която връща true,
    ако елементите по главния диагонал на матрицата са равни на елементите по вторичния диагонал и false в противен случай.
*/

void printMainDiagonal(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << matrix[i][i];
    }
}
void printSecondaryDiagonal(int matrix[100][100], int n)
{
    int i = 0;
    int j = n - 1;
    while(i < n && j >= 0)
    {
        std::cout << matrix[i][j];
        i++;
        j--;
    }
}
bool equalDiagonals(int matrix[100][100], int n)
{
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        int mainDiagonalElement = matrix[i][i];
        int secondaryDiagonalElement = matrix[i][j];
        if(mainDiagonalElement != secondaryDiagonalElement)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int matrix[100][100] = 
    {
        {1, 2, 1},
        {1, 2, 4},
        {4, 2, 4}
    };
    std::cout << equalDiagonals(matrix, 3) << std::endl;

}
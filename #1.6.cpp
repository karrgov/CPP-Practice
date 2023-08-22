#include <iostream>

/*
    Нека е дадена матрица NxМ (N,М<=100), която е съставена само от 0 и 1 и за която има един единствен път от клетката с координати (0, 0)
    до клетка с координати (N - 1, M - 1) съставен само от 1ици(движението от една клетка в друга става по диагонал, вертикал и хоризонтал).
    Напишете програма, която намира този път и отпечатва координатите му на екрана.
*/

bool isNextMoveValid(bool matrix[100][100], int rows, int cols, int i, int j)
{
    if(i < 0 || i >= rows || j < 0 || j >= cols)
    {
        return false;
    }
    return matrix[i][j];
}
void printPath(bool matrix[100][100], int rows, int cols)
{
    int i = 0;
    int j = 0;

    while(i != rows - 1 || j != cols - 1)
    {
        std::cout << "(" << i << ", " << j << ")" << " --> ";

        if(isNextMoveValid(matrix, rows, cols, i + 1, j))
        {
            i += 1;
        }
        else if(isNextMoveValid(matrix, rows, cols, i, j + 1))
        {
            j += 1;
        }
        else if(isNextMoveValid(matrix, rows, cols, i + 1, j + 1))
        {
            i += 1;
            j += 1;
        }
        else
        {
            std::cout << "Dead end!" << std::endl;
            return;
        }
    }

    std::cout << "(" << i << ", " << j << ")" << std::endl;
}
int main()
{
    bool matrix[100][100] = 
    {
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 0, 0, 1, 1}
    };
    printPath(matrix, 5, 5);

    return 0;
    
}
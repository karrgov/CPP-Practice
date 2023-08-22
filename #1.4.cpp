#include <iostream>

/*
    Напишете функция, която приема матрица NxМ (N,М<=100) и отпечатва на екрана на нови редове най-големия елемент на всеки ред на матрицата.
*/

int maxElement(int array[], int size)
{
    int maxEl = array[0];
    for (int i = 1; i < size; i++)
    {
        if(maxEl < array[i])
        {
            maxEl = array[i];
        }
    }
    return maxEl;
}
void printMaxElementOnEachRow(int matrix[100][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        std::cout << maxElement(matrix[i], cols) << std::endl;
    }
}
int main()
{
    int matrix[100][100] = 
    {
        {1, 5, 6},
        {2, 5, 7},
        {8, 3, 2}
    };
    printMaxElementOnEachRow(matrix, 3, 3);

}
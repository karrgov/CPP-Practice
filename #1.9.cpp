#include <iostream>
void deleteElement(int * arr, int &size, int index)
{
    if(index < 0 || index >= size)
    {
        return;
    }
    for(int i = index; i < size - 1; i++)
    {
        *(arr + i) = *(arr + i + 1); 
    }
    size--;
}
int main()
{
    int arr[] = {2, 4, 5, 6, 3, 5, 9};
    int size = 7;

    deleteElement(arr, size, 4);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
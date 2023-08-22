#include <iostream>
int main()
{
    char array[255];
    int n = 0;
    std::cin >> n;
    std::cout << "Enter char array:" << std::endl;
    //std::cin.getline(array, 6);
    std::cin >> array;
    for (int i = 0; i < n; i++)
    {
        if(array[i] >= '1' && array[i] <= '9')
        {
            std::cout << array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(array[i] >= 'a' && array[i] <= 'z')
        {
            std::cout << array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(array[i] >= 'A' && array[i] <= 'Z')
        {
            std::cout << array[i];
        }
    }
}
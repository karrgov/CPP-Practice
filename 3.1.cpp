#include <iostream>
int main()
{
    int * arr = new int;
    int n = 0;
    std::cin >> n;
    int smallestNum;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(arr + i);
    }
    smallestNum = *arr;
    for (int i = 0; i < n; i++)
    {
        if(smallestNum >= *(arr + i))
        {
            smallestNum = *(arr + i);
        }
    }
    std::cout << smallestNum << std::endl;
    delete arr;
}
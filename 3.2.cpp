#include <iostream>

int main()
{
    int * arr = new int; 
    int n = 0;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        if(((*(arr + i)) / 2) % 2 == 1)
        {
            sum += *(arr + i);
        }
    }
    std::cout << sum << std::endl;
}
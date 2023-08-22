#include <iostream>
int main()
{
    int * arr = new int; 
    int n = 0;
    bool flag = false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        if(*(arr + i) == *(arr + i + 1))
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        std::cout << "Yes";
        
    }
    else 
    {
        std::cout << "No";
    }

}
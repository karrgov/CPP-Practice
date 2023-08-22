#include <iostream>

/*
    Да се напише функция `void capitalizeChars (char* word)`, която приема указател към `char` и която променя всички малки букви в главни.
*/

bool isLower(char a)
{
    return a >= 'a' && a <= 'z';
}
char toUpper(char a)
{
    return a + ('A' - 'a');
}
void capitaliseChars(char * word)
{
    int i = 0;
    while(*(word + i) != 0)
    {
        if(isLower(*(word + i)))
        {
            *(word + i) = toUpper(*(word + i));
        }
        i++;
    }
}
int main()
{
    char array[] = "asasjJsaBbb";
    capitaliseChars(array);
    std::cout << array << std::endl;

}
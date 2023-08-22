#include <iostream>

/*
    Да се напише функция void trim(char original[], char trimmed[]), която копира original в trimmed без всички space-ове в началото и края на низа.
*/

void substring(char source[], int beginIndex, int endIndex, char target[])
{
    int i = 0;
    while(beginIndex <= endIndex)
    {
        target[i] = source[beginIndex];
        i++;
        beginIndex++;
    }
    target[i] = 0;

}
void trim(char original[], char trimmed[])
{
    int length = strlen(original);
    int firstNoneSpaceIndex = 0;
    int lastNoneSpaceIndex = length - 1;
    while(original[firstNoneSpaceIndex] == ' ')
    {
        firstNoneSpaceIndex++;
    }
    while(original[lastNoneSpaceIndex] == ' ')
    {
        lastNoneSpaceIndex--;
    }
    substring(original, firstNoneSpaceIndex, lastNoneSpaceIndex, trimmed);
}
int main()
{
    char array[30] = "     hello world      ";
    char trimmed[30];
    std::cout << strlen(array) << std::endl;
    trim(array, trimmed);
    std::cout << trimmed << std::endl;
    std::cout << strlen(trimmed) << std::endl;

}
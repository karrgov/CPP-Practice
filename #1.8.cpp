#include <iostream>

/*
    Напишете функция `char* nextSentence(char* text)`,
    която връща указател към елемента след първото срещане на препинателния знак точка.
*/

char * findSentence(char * text)
{
    if(text == nullptr)
    {
        return nullptr;
    }

    while(*text != 0 && *text != '.')
    {
        text++;
    }
    if(*text != 0)
    {
        return text + 1;
    }

    return nullptr;
}

int main()
{
    char array[] = "How are you. The weather is amazing!";
    std::cout << findSentence(array) << std::endl;
    return 0;
}
#include <iostream>

using namespace std;

void evaluate(const char* src)
{
    size_t smallLetters = 0, bigLetters = 0, digits = 0;
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            bigLetters++;
        }
        else if( *src >= 'a' && *src <= 'z')
        {
            smallLetters++;
        }
        else if( *src >= '0' && *src <= '9')
        {
            digits++;
        }
        src++;
    }
    cout << "Number of small letters: " << smallLetters << endl;
    cout << "Number of big letters: " << bigLetters << endl;
    cout << "Number of digits: " << digits << endl;
}

int main()
{
    evaluate("3 Doors Down");
    return 0;
}

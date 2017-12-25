#include <iostream>

using namespace std;

void swapcase(char* src)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *src -= ('a' - 'A');
        }
        else if( *src >= 'A' && *src <= 'Z')
        {
            *src += ('a' - 'A');
        }
        src++;
    }
}

int main()
{
    char str[20] = "Yellow Submarine";
    cout << "str before call of swapcase: " << str << endl;
    swapcase(str);
    cout << "str after call of swapcase: " << str << endl;
    return 0;
}

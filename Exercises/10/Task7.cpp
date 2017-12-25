#include <iostream>

using namespace std;

void replace(char* src, char from, char to)
{
    while(*src != '\0')
    {
        if(*src == from)
        {
            *src = to;
        }
        src++;
    }
}

int main()
{
    char str[] = "We_love_C  ";
    replace(str, ' ', '+');
    cout << str << endl;
    return 0;
}

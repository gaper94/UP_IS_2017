#include <iostream>

using namespace std;

int strLen(const char* src)
{
    int len = 0;
    while(*src != '\0')
    {
        len++;
        src++;
    }
    return len;
}

void deleteChar(char* src, char toDelete)
{
    while(*src != '\0')
    {
        if(*src == toDelete)
        {
            int len = strLen(src);
            for( int i = 1; i <= len; i++)
            {
                src[i - 1] = src[i];
            }
        }
        else
        {
            src++;
        }
    }
}

int main()
{
    char str[] = "the* qu*ick* bro*wn ***fox **jumped o**ver **the lazy *d*og";
    deleteChar(str, '*');
    cout << str << endl;
    return 0;
}

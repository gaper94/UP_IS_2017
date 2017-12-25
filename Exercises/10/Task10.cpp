#include <iostream>
using namespace std;

int strLen(const char* src)
{
    int len = 0;
    while(*src != 0)
    {
        len++;
        src++;
    }
    return len;
}

bool startsWith(const char* src, const char* start)
{
    int lenSrc = strLen(src);
    int lenStart = strLen(start);
   
    if(lenStart > lenSrc)
    {
        return false;
    }

    for(int i = 0; i < lenStart; i++)
    {
        if(src[i] != start[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[] = "Fear of the Dark";
    if(startsWith(str, "Fea"))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}

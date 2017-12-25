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

void truncate(char* src, int len)
{
    int stringLength = strLen(src);
    if(stringLength > len)
    {
        src[len] = '\0';
    }
}

int main()
{
    char str[] = "The Dark Knight Rises";
    truncate(str, 15);
    cout << str << endl;
    return 0;
}

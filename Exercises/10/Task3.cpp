#include <iostream>

using namespace std;

size_t stringLength(const char* src)
{
    size_t strLen = 0;
    while(*src != '\0')
    {
        strLen++;
        src++;
    }
    return strLen;
}

bool areSameLetters(char l1, char l2)
{
    if(l1 >= 'a' && l1 <= 'z')
    {
        l1 -= ('a' - 'A');
    }
    
    if(l2 >= 'a' && l2 <= 'z')
    {
        l2 -= ('a' - 'A');
    }
    return l1 == l2;
}

bool equalsIgnoreCase(const char* str1, const char* str2)
{
    size_t len1 = stringLength(str1);
    size_t len2 = stringLength(str2);
    
    if(len1 != len2)
    {
        return false;
    }

    for(int i = 0; i < len1; i++)
    {
        if(!areSameLetters(str1[i], str2[i]))
        {
            return false;
        }
    }
    return true;
}

#define STREQUAL(str1, str2)                          \
if(equalsIgnoreCase(str1, str2))                      \
{                                                     \
    cout << str1 << " matches " << str2 << endl;      \
}                                                     \
else                                                  \
{                                                     \
    cout << str1 << " differs from " << str2 << endl; \
}                                                     \

int main()
{
    STREQUAL("HeLLo world", "HELLO WORLD")
    STREQUAL("HeLo world", "HELLO WORLD")
    return 0;
}

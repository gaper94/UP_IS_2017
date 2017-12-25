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

int main()
{
    cout << "The length of 'C++ rocks' is " << stringLength("C++ rocks") << endl;
    return 0;
}

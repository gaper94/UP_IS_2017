#include <iostream>

using namespace std;

size_t wordsCount(const char* src)
{
    size_t wrdsCnt = 0;
    while(*src != '\0')
    {
        if(    (*src != ' ' && *(src + 1) == ' ') 
            || (*src != ' ' && *(src + 1) == '\0') )
        {
            wrdsCnt++;
        }
        src++;
    }
    return wrdsCnt;
}

int main()
{
    cout << "The words in 'C++ rocks' are " << wordsCount("C++ rocks") << endl;
    cout << "The words in '   C always rocks ' are " << wordsCount("   C always rocks ") << endl;
    return 0;
}

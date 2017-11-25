#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main()
{
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << n << endl;
        return 0;
    }

    char hexadecimal[MAX_SIZE];
    int hexadecimalDigitsCount = 0;

    char hexadecimalDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                              '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while(n > 0)
    {
        hexadecimal[hexadecimalDigitsCount] = hexadecimalDigits[n % 16];
        n /= 16;
        ++hexadecimalDigitsCount;
    }

    for(int i = hexadecimalDigitsCount - 1; i >= 0; --i)
    {
        cout << hexadecimal[i];
    }

    cout << endl;

    return 0;
}

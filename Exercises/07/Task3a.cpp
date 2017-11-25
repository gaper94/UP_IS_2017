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

    char binary[MAX_SIZE];
    int binaryDigitsCount = 0;

    while(n > 0)
    {
        binary[binaryDigitsCount] = '0' + (n % 2);
        n /= 2;
        ++binaryDigitsCount;
    }

    for(int i = binaryDigitsCount - 1; i >= 0; --i)
    {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}

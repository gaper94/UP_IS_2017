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

    char octal[MAX_SIZE];
    int octalDigitsCount = 0;

    while(n > 0)
    {
        octal[octalDigitsCount] = '0' + (n % 8);
        n /= 8;
        ++octalDigitsCount;
    }

    for(int i = octalDigitsCount - 1; i >= 0; --i)
    {
        cout << octal[i];
    }

    cout << endl;

    return 0;
}

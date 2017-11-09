#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nCopy = n;
    int nReversed = 0;

    while(nCopy > 0)
    {
        nReversed *= 10;
        nReversed += nCopy % 10;
        nCopy /= 10;
    }

    if(n == nReversed)
    {
        cout << "The nuber is a palindrome." << endl;
    }
    else
    {
        cout << "The nuber is NOT a palindrome." << endl;
    }

    return 0;
}


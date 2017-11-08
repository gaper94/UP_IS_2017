#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, nCopy, digitsCount = 0, sumOfPoweredDigits = 0;
    cin >> n;

    nCopy = n;

    while(nCopy > 0)
    {
        ++digitsCount;

        nCopy /= 10;
    }

    nCopy = n;
    while(nCopy > 0)
    {
        sumOfPoweredDigits += pow((nCopy % 10), digitsCount);
        nCopy /= 10;
    }

    if(n == sumOfPoweredDigits)
    {
        cout << "The number is narcissistic." << endl;
    }
    else
    {
        cout << "The number is NOT narcissistic." << endl;
    }

    return 0;
}


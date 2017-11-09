#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxNumber, minNumber, currentNumber;

    for(int i = 0; i < n; ++i)
    {
        cin >> currentNumber;

        if(i == 0)
        {
            maxNumber = currentNumber;
            minNumber =  currentNumber;
            continue;
        }

        if(currentNumber > maxNumber)
        {
            maxNumber = currentNumber;
        }

        if(currentNumber < minNumber)
        {
            minNumber = currentNumber;
        }
    }

    cout << "Min number : " << minNumber << endl;
    cout << "Max number : " << maxNumber << endl;

    return 0;
}


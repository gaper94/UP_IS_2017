#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double arr[100];
    int n;

    do
    {
        cin >> n;
        if(n < 1 || n > 100)
        {
            cout << "Enter size between 1 and 100" << endl;
        }

    }while(n < 1 || n > 100);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    double average;

    for(int i = 0; i < n; ++i)
    {
        if(i == 0)
        {
            if(arr[i] > fabs(arr[i + 1]))
            {
                cout << i << " ";
            }
        }
        else if(i == n - 1)
        {
            if(arr[i] > fabs(arr[i - 1]))
            {
                cout << i << " ";
            }
        }
        else
        {
            average = (arr[i - 1] + arr[i + 1]) / 2.0;
            if(arr[i] > fabs(average))
            {
                cout << i << " ";
            }
        }
    }

    cout << endl;

    return 0;
}


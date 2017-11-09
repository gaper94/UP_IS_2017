#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //a)
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    //б)
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl;

    //в)
    for(int i = 1; i <= n; ++i)
    {
        int asterisksCount, spacesBefore;
        asterisksCount = 2 * i - 1;
        spacesBefore = ((2 * n) - asterisksCount) / 2;

        for(int j = 1; j <= spacesBefore; ++j)
        {
            cout << ' ';
        }

        for(int j = 1; j <= asterisksCount; ++j)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}


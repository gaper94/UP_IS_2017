#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int totalPrinted = 0;

    for(int i = 10; i <= 99 && totalPrinted < n; ++i)
    {
        if(i / 10 != i % 10)
        {
            cout << i << endl;
            ++totalPrinted;
        }
    }

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int previous = 1, prePrevious = 1, current = 1;

    for(int i = 3; i <= n; ++i)
    {
        current = previous + prePrevious;
        prePrevious = previous;
        previous = current;
    }

    cout << current << endl;

    return 0;
}


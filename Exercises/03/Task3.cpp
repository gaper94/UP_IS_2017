#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x coordinate:";
    cin >> x;
    cout << "Enter y coordinate:";
    cin >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            cout << "First quadrant\n";
        }
        else if (y < 0)
        {
            cout << "Fourth quadrant\n";
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            cout << "Second quadrant\n";
        }
        else if (y < 0)
        {
            cout << "Third quadrant\n";
        }
    }
    else
    {
        cout << "Point is on the abcissa\n";
    }

    if (y == 0)
    {
        cout << "Point is on the ordinate\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x coordinate:";
    cin >> x;
    cout << "Enter y coordinate:";
    cin >> y;

    int centerCircleX = 3;
    int centerCircleY = 5;
    const double radiusCircle = 7.0;

    double distance = sqrt(pow(centerCircleX - x, 2) + pow(centerCircleY - y, 2));
    if (distance <= radiusCircle)
    {
        cout << "(" << x << ", " << y << ") is in the circle\n";
    }
    else
    {
        cout << "(" << x << ", " << y << ") is not in the circle\n";
    }
    return 0;
}
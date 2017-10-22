#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Please enter x:";
    cin >> x;
    cout << "Please enter y:";
    cin >> y;
    double distance = sqrt(pow(x,2) + pow(y,2));
    if (distance == 6.0 || distance == 10.0)
    {
        cout << "On the contour\n";
    }
    else if (distance > 6.0 && distance < 10.0)
    {
        cout << "Inside\n";
    }
    else
    {
        cout << "Outside\n";
    }
    return 0;
}
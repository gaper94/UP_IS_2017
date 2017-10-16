#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1;
    cout << "Please enter x1 coordinate: ";
    cin >> x1;
    cout << "Please enter y1 coordinate: ";
    cin >> y1;
    double x2, y2;
    cout << "Please enter x2 coordinate: ";
    cin >> x2;
    cout << "Please enter y2 coordinate: ";
    cin >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance << endl;
    return 0;
}
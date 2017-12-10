#include <iostream>
#include <cmath>
using namespace std;

int flightTime(int hourDepart, int minuteDepart, int hourArrive, int minuteArrive)
{
    return (hourArrive * 60 + minuteArrive) - (hourDepart * 60 + minuteDepart);
}

int main()
{
    cout << flightTime(12, 10, 14, 0) << endl;
    return 0;
}

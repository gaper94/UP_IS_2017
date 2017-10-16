#include <iostream>

using namespace std;

int main()
{
    {
        int celsius;
        cin >> celsius;
        double fahrenheit = celsius * 1.8 + 32;
        cout << celsius << " C = " << fahrenheit << " F" << endl;
    }
    //
    {
        int fahrenheit;
        cin >> fahrenheit;
        double celsius = (fahrenheit - 32) / 1.8;
        cout << fahrenheit << " F = " << celsius << " C" << endl;
    }
    //
    {
        int celsius;
        cin >> celsius;
        double kelvins = celsius + 273.15;
        cout << celsius << " C = " << kelvins << " K" << endl;
    }
    return 0;
}
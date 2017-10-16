#include <iostream>

using namespace std;

int main()
{
    double distance;
    cout << "Please, enter distance(in km): ";
    cin >> distance;
    double usedFuel;
    cout << "Please, enter used fuel: ";
    cin >> usedFuel;
    double pricePerLiter;
    cout << "Please, enter price per liter: ";
    cin >> pricePerLiter;
    double tripDuration;
    cout << "Please, enter trip duration(in minutes): ";
    cin >> tripDuration;
    double consumption = usedFuel / (distance / 100.0);
    double durationInHours = tripDuration / 60;
    double averageSpeed = distance / durationInHours;
    double tripPrice = usedFuel * pricePerLiter;
    //
    printf("Average consumption is %.1f\n", consumption);
    printf("Average speed is %.0f\n", averageSpeed);
    printf("Trip price is %.2f\n", tripPrice);
    return 0;
}
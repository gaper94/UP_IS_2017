#include <iostream>

using namespace std;

int main()
{
    int currentNuber, numbersCount = 0;
    float sum = 0;

    while(true)
    {
        cin >> currentNuber;

        if(currentNuber == 0)
        {
            break;
        }

        sum += currentNuber;
        ++numbersCount;
    }

    if(numbersCount > 0)
    {
        //искаме да сме сигурни, че nubersCount не е нула, защото делението на нула води до недефинирано поведение на
        //програмата (обикновено - до crash)
        cout << "Average : " << (sum / numbersCount) << ". " << endl
        << numbersCount << " numbers were entered before the 0." << endl;
    }
    else
    {
        cout << "No numbers, other than zero, were entered." << endl;
    }

    return 0;
}


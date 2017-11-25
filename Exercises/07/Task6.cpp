#include <random> // C++ 11
#include <iostream>
using namespace std;

unsigned short rollDice()
{
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> unid(1,6);
    return unid(rng);
}

int main()
{
    int diceRollCount;
    cout << "How many times to roll the dice?" << endl;
    cin >> diceRollCount;

    int occurances[7] = {0};

    for(int i = 0; i < diceRollCount; ++i)
    {
        ++occurances[rollDice()];
    }

    cout << "Total rols : " << diceRollCount << endl;

    for(int i = 1; i < 7; ++i)
    {
        cout << occurances[i] << " time(s) " << i << "." << endl;
    }

    cout << endl;

    return 0;
}

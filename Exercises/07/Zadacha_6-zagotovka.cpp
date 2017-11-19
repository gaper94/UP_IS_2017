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
    for(int i = 0; i < 100; i++)
    {
        cout << "The rolled dice is " << rollDice() << endl;
    }
}

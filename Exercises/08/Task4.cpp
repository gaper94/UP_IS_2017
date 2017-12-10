#include <iostream>
#include <cmath>
using namespace std;

void toBinary(int number)
{
    char binaryNumber[32] = { 0 };
    int currentPosition = 31;
    while(number != 0)
    {
        binaryNumber[currentPosition--] = number % 2 == 0 ? '0' : '1';
        number /= 2;
	}
    
    for(int i = 0; i < 32;i++)
    {
        cout << binaryNumber[i];
	}
    cout << endl;
}

int main()
{
    toBinary(255);
	return 0;
}

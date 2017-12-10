#include <iostream>
#include <cmath>
using namespace std;

int invert(int toBeInverted)
{
    int numberLength = 0;
    int numberCopy = toBeInverted;
    
	do
	{
        numberLength++;
		numberCopy /= 10;
	} while(numberCopy != 0);

	int resultNumber = 0;
    for( int i = 0; i < numberLength; i++)
    {
        resultNumber += (toBeInverted % 10) * pow(10, numberLength - i - 1);
        toBeInverted /= 10;
	}
    
	return resultNumber;
}

int main()
{
    cout << invert(3214) << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

void reverse(int x[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        int temp = x[i];
        x[i] = x[size - i - 1];
        x[size - i - 1] = temp;
	}
}

int main()
{
    int numbers[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    reverse(numbers, 10);
    for(int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ' ';
	}
	
    return 0;
}

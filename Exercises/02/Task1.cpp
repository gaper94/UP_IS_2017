#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout << "Please enter first number: ";
    cin >> firstNumber;
    cout << "Please enter second number: ";
    cin >> secondNumber;
    
    // Max
    int max = secondNumber;
    if (firstNumber > secondNumber)
    {
        max = firstNumber;
    }
    std::cout << "Max is " << max << endl;

    // Min
    int min;
    if (firstNumber < secondNumber)
    {
        min = firstNumber;
    }
    else
    {
        min = secondNumber;
    }
    std::cout << "Min is " << min << endl;

    // Divisor
    if (firstNumber != 0 && secondNumber % firstNumber == 0)
    {
        cout << firstNumber << " is divisor of " << secondNumber << endl;
    }
    return 0;
}
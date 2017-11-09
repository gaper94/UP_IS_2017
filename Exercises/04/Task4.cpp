#include <iostream>

using namespace std;

int main()
{
    int currentNumber, accumulator = 0;
    char operation;
    bool isValidOperation = true;

    do
    {
        cin >> currentNumber >> operation;

        switch(operation)
        {
        case '+':
            accumulator += currentNumber;
            break;

        case '-':
            accumulator -= currentNumber;
            break;

        case '*':
            accumulator *= currentNumber;
            break;

        case '/':
            accumulator /=currentNumber;
            break;

        case '%':
            accumulator %= currentNumber;
            break;

        default:
            isValidOperation = false;
            break;
        }

        if(isValidOperation)
        {
            cout << accumulator << endl;
        }

    } while(isValidOperation);

    return 0;
}


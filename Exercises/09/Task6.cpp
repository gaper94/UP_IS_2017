#include <iostream>

bool isSorted(int x[], int size)
{
    int idx = 0;
    while (idx < size - 1)
    {
        // Същото като
        // for(int i = 0; i < size - 1; i++)
        // {
        //      if(x[i] > x[i] + 1)
        //           return false;
        // }
        if (*(x + idx) > *(x + idx + 1))
        {
            return false;
        }
        idx++;
    }
    return true;
}

bool allEven(int x[], int size)
{
    int idx = 0;
    while (idx < size)
    {
        if (*(x + idx) % 2 != 0)
        {
            return false;
        }
        idx++;
    }
    return true;
}

bool isPrime(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool containsPrime(int x[], int size)
{
    int idx = 0;
    while (idx < size)
    {
        if (isPrime(*(x + idx)))
        {
            return true;
        }
        idx++;
    }
    return false;
}

int main()
{
    int arr[] = {4, 4, 4, 4, 4, 4, 4};
    bool sorted = isSorted(arr, 7);
    bool even = allEven(arr, 7);
    bool prime = containsPrime(arr, 7);
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;

    do
    {
        cin >> n;
        if(n < 1 || n > 100)
        {
            cout << "Enter size between 1 and 100" << endl;
        }

    }while(n < 1 || n > 100);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int number;
    cin >> number;

    bool numberIsInArray = false;

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == number)
        {
            numberIsInArray = true;
            cout << i << " ";
        }
    }

    if(!numberIsInArray)
    {
        cout << "The number " << number << " is not in the array.";
    }

    cout << endl;

    return 0;
}


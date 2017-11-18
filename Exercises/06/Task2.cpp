#include <iostream>

using namespace std;

int main()
{
    char arr[100];
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

    bool isPalindrome = true;

    for(int i = 0; i < n / 2; ++i)
    {
        if(arr[i] != arr[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
    {
        cout << "The char sequence is a palindrome." << endl;
    }
    else
    {
        cout << "The char sequence is NOT a palindrome." << endl;
    }

    return 0;
}


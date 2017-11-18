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

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
           arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            for(int j = i; j < n; ++j)
            {
                arr[j] = arr[j + 1];
            }

            --n;
            --i;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

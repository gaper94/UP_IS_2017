#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int index;

    while(n > 0)
    {
        cin >> index;

        if(index < 1)
        {
            break;
        }

        if(index < n)
        {
            for(int i = index + 1; i < n; ++i)
            {
                arr[i - 1] = arr[i];
            }

            --n;
        }

        for(int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

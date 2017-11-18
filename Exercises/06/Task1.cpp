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
    
    int min, max;
    
    min = max = arr[0];
    
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    
    return 0;
}


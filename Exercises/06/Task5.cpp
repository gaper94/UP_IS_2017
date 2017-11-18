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

    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];//намираме сумата на елементите още при въвеждането, за да избегнем излишно обхождане
    }

    int smallerThanAverage[100];
    int biggerThanAverage[100];

    double average = sum / (double)n;

    int smallerThanAverageIndex = 0;
    int biggerThanAverageIndex = 0;

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < average)
        {
            smallerThanAverage[smallerThanAverageIndex] = arr[i];
            ++smallerThanAverageIndex;
        }
        else
        {
            biggerThanAverage[biggerThanAverageIndex] = arr[i];
            ++biggerThanAverageIndex;
        }
    }

    cout << "Smaller than the average :" << endl;
    for(int i = 0; i < smallerThanAverageIndex; ++i)
    {
        cout << smallerThanAverage[i] << " ";
    }
    cout << endl;

    cout << "Bigger than the average :" << endl;
    for(int i = 0; i < biggerThanAverageIndex; ++i)
    {
        cout << biggerThanAverage[i] << " ";
    }
    cout << endl;

    return 0;
}

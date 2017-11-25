#include <iostream>

using namespace std;

int main()
{
    int arr[14] = {5, 6, 7, 8, 9, 8, 4, 5, 6, 7, 1, 1, 4, 5};

    int uniqueElements[14];

    int elementsCount = 14;
    int uniqueElementsCount = 0;
    bool addedToUnique;

    for(int i = 0; i < elementsCount; ++i)
    {
        addedToUnique = false;
        for(int j = 0; j < uniqueElementsCount; ++j)
        {
            if(arr[i] == uniqueElements[j])
            {
                addedToUnique = true;
            }
        }

        if(!addedToUnique)
        {
            uniqueElements[uniqueElementsCount] = arr[i];
            ++uniqueElementsCount;
        }
    }

    for(int i = 0; i < uniqueElementsCount; ++i)
    {
        cout << uniqueElements[i] << " ";
    }

    cout << endl;

    return 0;
}

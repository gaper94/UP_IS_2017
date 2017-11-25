#include <iostream>

using namespace std;

int main()
{
    int matrix[2][7] = { {1, 2, 3, 4, 5, 6, 7},
                         {8, 9, 10, 11, 12, 13, 14}};

    int rows = 2;
    int columns = 7;

    int elementsCount = rows * columns;

    for(int i = elementsCount - 1; i >= 0; --i)
    {
        cout << matrix[i / columns][i % columns] << " ";

        if(i % columns == 0)
        {
            cout << endl;
        }
    }

    return 0;
}

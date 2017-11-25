#include <iostream>

using namespace std;

int main()
{
    int matrix1[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int matrix2[3][3] = {{1, -2, 3},
                         {4,  0, 6},
                         {1, -1, 1}};

    int resultMatrix[3][3];

    int n = 3, m = 3;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cout << resultMatrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

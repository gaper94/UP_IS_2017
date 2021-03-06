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

    int sum;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            sum = 0;

            for (int k = 0; k < m; k++)
            {
              sum += matrix1[i][k] * matrix2[k][j];
            }

            resultMatrix[i][j] = sum;
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

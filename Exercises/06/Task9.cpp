#include <iostream>

using namespace std;

int main()
{
    int matrix[100][100];
    int n, m;

    do
    {
        cin >> n;
        if(n < 1 || n > 100)
        {
            cout << "Enter matrix height between 1 and 100" << endl;
        }

    }while(n < 1 || n > 100);

    do
    {
        cin >> m;
        if(m < 1 || m > 100)
        {
            cout << "Enter matrix width between 1 and 100" << endl;
        }

    }while(n < 1 || n > 100);

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    bool allPositives;

    for(int i = 0; i < n; ++i)
    {
        allPositives = true;

        for(int j = 0; j < m; ++j)
        {
            if(matrix[i][j] <= 0)
            {
                allPositives = false;
                break;
            }
        }

        if(allPositives)
        {
            for(int j = 0; j < m; ++j)
            {
                cout << matrix[i][j] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}

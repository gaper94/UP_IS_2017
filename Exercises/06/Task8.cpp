#include <iostream>

using namespace std;

int main()
{
    int matrix[100][100];
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
        for(int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int minAboveDiaginal;
    int maxAboveDiaginal;
    int minBelowDiaginal;
    int maxBelowDiaginal;
    double sumOfDiagonal = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i < j) // над главния диагонал
            {
                if(i == 0 && j == 1)
                {
                    minAboveDiaginal = maxAboveDiaginal = matrix[i][j];
                }
                else
                {
                    if(minAboveDiaginal > matrix[i][j])
                    {
                        minAboveDiaginal = matrix[i][j];
                    }

                    if(maxAboveDiaginal < matrix[i][j])
                    {
                        maxAboveDiaginal = matrix[i][j];
                    }
                }
            }

            else if(i > j) //под главния диагонал
            {
                if(i == 1 && j == 0)
                {
                    minBelowDiaginal = maxBelowDiaginal = matrix[i][j];
                }
                else
                {
                    if(minBelowDiaginal > matrix[i][j])
                    {
                        minBelowDiaginal = matrix[i][j];
                    }

                    if(maxBelowDiaginal < matrix[i][j])
                    {
                        maxBelowDiaginal = matrix[i][j];
                    }
                }
            }

            else // i == j, на главния диагонал
            {
                sumOfDiagonal += matrix[i][j];
            }
        }
    }

    cout << "Min above diagonal : " << minAboveDiaginal << endl;
    cout << "Max above diagonal : " << maxAboveDiaginal << endl;

    cout << "Min below diagonal : " << minBelowDiaginal << endl;
    cout << "Max below diagonal : " << maxBelowDiaginal << endl;

    cout << "Average on the diagonal : " << sumOfDiagonal / (double)n << endl;

    return 0;
}

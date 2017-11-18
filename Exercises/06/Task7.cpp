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

    bool isSymmetrical = true;

    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
           if(matrix[i][j] != matrix[j][i])
           {
               isSymmetrical = false;
               break;
           }

           if(!isSymmetrical)
           {
               break;
           }
        }
    }

    if(isSymmetrical)
    {
        cout << "The matrix is symmetrical." << endl;
    }
    else
    {
        cout << "The matrix is NOT symmetrical." << endl;
    }

    return 0;
}

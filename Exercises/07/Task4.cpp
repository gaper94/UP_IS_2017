#include <iostream>

using namespace std;

int main()
{
   int matrix[5][5] = {{1,  2,  3,  4,  5},
                       {6,  7,  8,  9,  10},
                       {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20},
                       {21, 22, 23, 24, 25}};

   int n = 5;
   int temp;

   //За ред i, елементът от главния диагонал е в колона j,
   //а от второстепенния - в колона n - i - 1
   for(int i = 0; i < n; ++i)
   {
       temp = matrix[i][i];
       matrix[i][i] = matrix[i][n - i - 1];
       matrix[i][n - i - 1] = temp;
   }

   for(int i = 0; i < n; ++i)
   {
       for(int j = 0; j < n; ++j)
       {
            cout << matrix[i][j] << " ";
       }

       cout << endl;
   }

   return 0;
}

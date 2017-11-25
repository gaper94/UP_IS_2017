#include <iostream>

using namespace std;

int main()
{
    const int m1Rows = 3, m1Columns = 4;
    int m1[m1Rows][m1Columns] =
    {
        { 1, 2, 3, 4 },
        { 0, 1, 5, 6 },
        { 7, 0, 1, 2 }
    };
    
    int longestLength = 1, startIdxByI = 0, startIdxByJ = 0;
    for(int i = 0; i < m1Rows; i++)
    {
        for(int j = 0; j < m1Columns; j++)
        {
            bool breakOutterLoop = false;
            int currentLongestLength = 1;
            int currentIndex = i*m1Columns + j;
            
            // Threat the 2d array as 1d array
            while(true)
            {
                // More then 2 rows distance
                if((currentIndex/m1Columns - i) > 1)
                {
                    break;
                }

                if(m1[currentIndex/m1Columns][currentIndex%m1Columns] <= m1[(currentIndex+1)/m1Columns][(currentIndex+1)%m1Columns])
                {
                    currentLongestLength++;
                }
                else
                {
                    break;
                }
                currentIndex++;
            }

            if(currentLongestLength > longestLength)
            {
                longestLength = currentLongestLength;
                startIdxByI = i;
                startIdxByJ = j;
            }
        }
    }

    int startIdx = startIdxByI*m1Columns + startIdxByJ;
    int numbersToBePrinted = longestLength;
    while(numbersToBePrinted > 0)
    {
        cout << m1[startIdx/m1Columns][startIdx%m1Columns] << " ";
        startIdx++;
        numbersToBePrinted--;
    }

    return 0;
}

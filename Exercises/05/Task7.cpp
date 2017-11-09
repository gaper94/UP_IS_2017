#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

   int iCopy, currentDigit;
   bool isSpecial;
   for(int i = 1111; i <= 9999; i++)
    {
        isSpecial = true;
        iCopy = i;

        while(iCopy > 0)
        {
            currentDigit = iCopy % 10;
            if(currentDigit == 0 || n % currentDigit != 0)
            {
                isSpecial = false;
                break;
            }

            iCopy /= 10;
        }

        if(isSpecial)
        {
            cout << i << endl;
        }
    }

    return 0;
}


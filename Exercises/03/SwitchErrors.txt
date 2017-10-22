#include <iostream>
using namespace std;

int main()
{
    unsigned char number;
    cin >> number;

    switch (number)
    {
        case 9:
        case 27:
        {
           cout << "Dividable by 9\n";
        }
        case 3:
        {
           cout << "Also dividable by 3\n";
        }

        case 4 ... 100:
        case 16:
        {
            if (!(number % 2))
            {
                break;
            }
        }

        case 256:
        case 1024:
        case 255:
        case 16:
        {
            cout << "Dividable by 2\n";
            break;
        }
    }

    return 0;
}
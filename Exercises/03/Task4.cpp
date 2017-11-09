#include <iostream>
using namespace std;

int main()
{
    //unsigned char number; - Типът не е подходящ поради следните причини:
    // 1. Интервалът на unsigned char e [0, 255], а в switch-а имаме случай над 255
    // 2. Операторът >> в istream класа за unsigned char не се държи както искаме в примера
    unsigned short number;
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
           break; // Забравен break
        }

        //case 4 ... 100:
        // Имаме синтактична грешка
        case 16:
        {
            //if (!(number % 2)) - грешна проверка
            if ((number % 2))
            {
                    break;
            }
        }

        case 256:
        case 1024:
        //case 255: - Не се дели на 2 без остатък
        //case 16: - Дублиране на случай
        {
            cout << "Dividable by 2\n";
            break;
        }
    }

    return 0;
} 

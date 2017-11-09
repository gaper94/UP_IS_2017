#include <iostream>

using namespace std;

int main()
{
   int digit;
   char language;
   cout << "Въведете цифра: ";
   cin >> digit;
   cout << "Въведете език (Френски - f, Английски - e, Немски - d, Български - b): ";
   cin >> language;

   switch(digit)
   {
      case 1:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "un\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "one\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "eins\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "едно\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 2:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "deux\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "two\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "zwei\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "две\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 3:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "trois\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "three\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "drei\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "три\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 4:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "quatre\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "four\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "vier\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "четири\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 5:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "cinq\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "five\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "funf\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "пет\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 6:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "six\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "six\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "sechs\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "шест\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 7:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "sept\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "seven\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "sieben\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "седем\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 8:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "huit\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "eight\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "acht\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "осем\n";
                       break;
                    }
             } // switch(language)
             break;
      }
      case 9:
      {
         switch(language)
             {
                case 'f':
                    {
                       cout << "neuf\n";
                       break;
                    }
                    case 'e':
                    {
                       cout << "nine\n";
                       break;
                    }
                    case 'd':
                    {
                       cout << "neun\n";
                       break;
                    }
                    case 'b':
                    {
                       cout << "девет\n";
                       break;
                    }
             } // switch(language)
             break;
      }
   }

   return 0;
}

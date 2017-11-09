#include <iostream>

using namespace std;

int main()
{
   char letter;
   cout << "Въведете буква от английската азбука: ";
   cin >> letter;

   switch(letter)
   {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      {
         cout << "Гласна буква\n";
             break;
      }

      default:
      {
         cout << "Съгласна буква\n";
             break;
      }
   }

   return 0;
}

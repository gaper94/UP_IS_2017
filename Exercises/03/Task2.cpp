#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please, enter four digit number:";
    cin >> number;

    if (number % 3 == 0 && number % 6 != 0)
    {
        cout << number << " is divisible by 3 and not divisible by 6\n";
    }
    // Palindrome
    int edinici = number % 10;
    int desetici = (number / 10) % 10;
    int stotici = (number / 100) % 10;
    int hilqdni = number / 1000;
    if (edinici == hilqdni && desetici == stotici)
    {
        cout << number << " is palindrom\n";
    }
    else
    {
        cout << number << " is not palindrom\n";
    }
    //
    int firstNumber = number / 100;
    int secondNumber = number % 100;
    if (firstNumber > secondNumber)
    {
        cout << "First part number is bigger\n";
    }
    else
    {
        cout << "Second part number is bigger\n";
    }
    return 0;
}
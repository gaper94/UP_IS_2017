#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int edinici = number % 10;
    int desetici = ( number / 10 ) % 10;
    int stotici = number / 100;
    cout << "Reversed number is " << edinici << desetici << stotici << endl;
    //
    number = number + 8;
    number += 60;
    number += 1200;
    cout << "Result number is " << number << endl;
    return 0;
}
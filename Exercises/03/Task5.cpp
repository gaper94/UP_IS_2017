#include <iostream>
using namespace std;

int main()
{
    double amountToConvert;
    char localCurrency, foreignCurrency;
    cout << "Please enter amount to convert:";
    cin >> amountToConvert;
    cout << "Please enter local currency(L-lev, E-euro, D-dollar, P-pound):";
    cin >> localCurrency;
    cout << "Please enter foreign currency(L-lev, E-euro, D-dollar, P-pound):";
    cin >> foreignCurrency;
    double convertedCurrency = amountToConvert;
    switch (foreignCurrency)
    {
        case 'L':
        {
            switch (localCurrency)
            {
                case 'E':
                {
                    convertedCurrency = amountToConvert / 0.51;
                    break;
                }
                case 'D':
                {
                    convertedCurrency = amountToConvert / 0.60;
                    break;
                }
                case 'P':
                {
                    convertedCurrency = amountToConvert / 0.45;
                    break;
                }
                default:
                {
                    cout << "Unknow local currency\n";
                    break;
                }
            }
            break;
        }
        case 'E':
        {
            switch (localCurrency)
            {
                case 'L':
                {
                    convertedCurrency = amountToConvert / 1.96;
                    break;
                }
                case 'D':
                {
                    convertedCurrency = amountToConvert / 1.18;
                    break;
                }
                case 'P':
                {
                    convertedCurrency = amountToConvert / 0.89;
                    break;
                }
                default:
                {
                    cout << "Unknow local currency\n";
                    break;
                }
            }
            break;
        }
        case 'D':
        {
            switch (localCurrency)
            {
                case 'L':
                {
                    convertedCurrency = amountToConvert / 1.66;
                    break;
                }
                case 'E':
                {
                    convertedCurrency = amountToConvert / 0.85;
                    break;
                }
                case 'P':
                {
                    convertedCurrency = amountToConvert / 0.75;
                    break;
                }
                default:
                {
                    cout << "Unknow local currency\n";
                    break;
                }
            }
            break;
        }
        case 'P':
        {
            switch (localCurrency)
            {
                case 'L':
                {
                    convertedCurrency = amountToConvert / 2.20;
                    break;
                }
                case 'E':
                {
                    convertedCurrency = amountToConvert / 1.13;
                    break;
                }
                case 'D':
                {
                    convertedCurrency = amountToConvert / 1.33;
                    break;
                }
                default:
                {
                    cout << "Unknow local currency\n";
                    break;
                }
            }
            break;
        }
        default:
        {
            cout << "Unknown foreign currency\n";
            break;
        }
    }
    cout << amountToConvert << " " << localCurrency << " = " << convertedCurrency << " " << foreignCurrency << endl;
    return 0;
}
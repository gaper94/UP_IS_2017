#include <iostream>

using namespace std;

int main()
{
    int age, toyPrice, laptopPrice, sum = 0;

    cin >> age >> laptopPrice >> toyPrice;

    for(int i = 1; i <= age; ++i)
    {
        if(i % 2 == 0)
        {
            sum += (i / 2) * 10 - 1;
        }
        else
        {
            sum += toyPrice;
        }
    }

    if(laptopPrice == sum)
    {
        cout << "Lily has saved exactly the sum that she needs to buy the laptop - " << sum << " leva." << endl;
    }
    else if(laptopPrice > sum)
    {
        cout << "Lily needs to save " << (laptopPrice - sum) << " more leva." << endl;
    }
    else //laptopPrice < sum
    {
        cout << "Lily has saved enough money to buy the laptop and she will still have " << (sum - laptopPrice)
             << " more leva left." << endl;
    }

    return 0;
}


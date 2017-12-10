#include <iostream>
#include <cmath>
using namespace std;

int numberOfDays(int month, int year)
{
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            return 31;
		}
        case 4:
        case 6:
        case 9:
        case 11:
        {
            return 30;
		}
        case 2:
        {
            if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
            {
                return 29;
			}
            else
            {
                return 28;
			}
		}
        default:
        {
            return -1;
		}
	}
}

int main()
{
    cout << "February, 2016 have " << numberOfDays(2, 2016) << " days" << endl;	
    cout << "February, 2015 have " << numberOfDays(2, 2015) << " days" << endl;	
    cout << "July, 2015 have " << numberOfDays(7, 2015) << " days" << endl;	
    cout << "April, 2010 have " << numberOfDays(4, 2010) << " days" << endl;	
    return 0;
}

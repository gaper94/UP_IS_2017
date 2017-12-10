#include <iostream>
#include <cmath>
using namespace std;

int abs(int a)
{
    return a < 0 ? a * -1 : a;
}

double rectanglePerimeter(double a, double b)
{
    return 2 * a + 2 * b;
}

const double PI = 3.14;
double circleArea(double radius)
{
   return PI * radius * radius;
}

double pow(double number, int power)
{
    double result = 1;
    for(int i = 0; i < power; i++)
	{
        result *= number;
	}
	return result;
}

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

bool isTriangle(int a, int b, int c)
{
   return (a + b > c && a + c > b && b + c > a);
}

int main()
{
    cout << "Abs of -10 is " << abs(-10) << endl;
    cout << "Abs of 0 is " << abs(0) << endl;
   
    cout << "Perimeter of rectangle with sides 4 and 5 is " << rectanglePerimeter(4, 5) << endl;
	
    cout << "The area of cirecle with radius 5 is " << circleArea(5) << endl;
    
    cout << "The 2 to the power of 5 is " << pow(2, 5) << endl;
	
    cout << "The distance between p(5, 0) and t(0, 0) is " << distance(5, 0, 0, 0) << endl;

    cout << "Traingle with sides 3, 4, 5 ";
	if(isTriangle(3, 4, 5))
	{
        cout << "exist";
    }
	else
    {
        cout << "don't exists";
	}
    cout << endl;
    
	cout << "Traingle with sides 3, 9, 5 ";
	if(isTriangle(3, 9, 5))
	{
        cout << "exist";
    }
	else
    {
        cout << "don't exists";
	}
    cout << endl;
	return 0;
}

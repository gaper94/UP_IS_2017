#include <iostream>

// Pointers
void swap(int* lhs, int* rhs)
{
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

// References
void swap(int& lhs, int& rhs)
{
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main()
{
    int a = 2;
    int b = 4;
    std::cout << "Before swap " << a << ", " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap " << a << ", " << b << std::endl;
    swap(a, b);
    std::cout << "After second swap " << a << ", " << b << std::endl;
    return 0;
}

#include <iostream>

void swap(int& lhs, int& rhs)
{
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}

void reverse(int x[], int size)
{
    int idx = 0;
    while (idx < size / 2)
    {
        swap(*(x + idx), *(x + size - idx - 1));
        // *(x + idx) - достъпваме елементите от началото
        // *(x + size - idx - 1) - достъпваме елементите от краят
        idx++;
    }
}

int main()
{
    int arr[] = {1, -20, 50, 33, -20, 139, 144};
    std::cout << "Before\n";
    for (int i = 0; i < 7; i++)
    {
        std::cout << arr[i] << " ";
    }
    reverse(arr, 7);
    std::cout << "After\n";
    for (int i = 0; i < 7; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
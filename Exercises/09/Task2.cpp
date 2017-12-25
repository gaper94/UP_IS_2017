#include <iostream>

void print(int arr[], int size)
{
    int idx = 0;
    while (idx < size)
    {
        std::cout << "arr[" << idx << "] = " << *(arr + idx) << std::endl;
        idx++;
    }
}

void print_reverse(int arr[], int size)
{
    int idx = size - 1;
    while (idx >= 0)
    {
        std::cout << "arr[" << idx << "] = " << *(arr + idx) << std::endl;
        idx--;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    print(arr, 6);
    std::cout << "-----------------------------------\n";
    print_reverse(arr, 6);
    return 0;
}

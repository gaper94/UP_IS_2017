#include <iostream>

void replace(int x[], int size, int replaceWhat, int replaceWith)
{
    for (int i = 0; i < size; i++)
    {
        if (x[i] == replaceWhat)
        {
            x[i] = replaceWith;
        }
    }
}

int main()
{
    int arr[] = {1, -20, 50, 33, -20, 139};
    std::cout << "Before\n";
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    replace(arr, 6, -20, 20);
    std::cout << "After\n";
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
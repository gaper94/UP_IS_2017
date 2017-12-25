#include <iostream>

void max(int arr[], int size, int* out)
{
    *out = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *out)
        {
            *out = arr[i];
        }
    }
}

int main()
{
    int arr[] = {1, -20, 50, 33, 23, 139};
    int max_number;
    max(arr, 6, &max_number);
    std::cout << "Max is " << max_number << std::endl;
    return 0;
}
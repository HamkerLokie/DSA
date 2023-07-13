#include <iostream>
#include <limits.h>
using namespace std;

int printMax(int arr[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int printMin(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
int linearSearch(int arr[], int size, int target)

{
    int i;
    while (i < size)
    {
        if (arr[i] == target)
        {
            return i;
        }
        i++;
    }

    return -1;
}
void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed Array: ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {

        swap(arr[i], arr[i + 1]);
    }
    cout << "Swapped Alternate Array: ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (size_t i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    if (ans == 0)
    {
        return INT_MIN;
    }
    return ans;
}
int main()
{

    int arr[5] = {5, 7, 34, 7, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << printMax(arr, size) << endl;
    cout << printMin(arr, size) << endl;
    cout << linearSearch(arr, size, 34) << endl;
    swapAlternate(arr, size);
    reverseArray(arr, size);

    int arr2[] = {5, 8, 9, 3, 4, 4, 8, 3, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << findUnique(arr2, size2);

    return 0;
}
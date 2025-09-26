/**
 * 10: Write a function to sort an array of any size.
 */

#include <iostream>
using namespace std;

void sort(int *arr, int size)
{

    // selection sort Implementation
    for (int i = 0; i < size; i++)
    {
        int smallestIdx;
        int smallest = INT32_MAX;
        for (int j = i; j < size; j++)
        {
            if (arr[j] <= smallest)
            {
                smallest = arr[j];
                smallestIdx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter array Size: ";
    cin >> n;

    int array[n];

    cout << "Enter " << n << " Elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    sort(array, n);
    cout << endl;
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
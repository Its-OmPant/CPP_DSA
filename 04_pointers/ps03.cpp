/**
 * 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
 */

#include <iostream>
using namespace std;

void sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 5, 9, 8, 6, 4, 2, 0, 2, 1};

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, 10);
    cout << "Array after sorting: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
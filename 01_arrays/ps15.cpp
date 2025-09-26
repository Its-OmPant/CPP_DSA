/**
 * 15: Write a function to merge two arrays of the same size sorted in descending
    order.
 */

#include <iostream>
using namespace std;

void merge(int *array1, int *array2, int *result)
{
    int i = 0, j = 0, k = 0;
    while (j < 6 && k < 6)
    {
        if (array1[j] >= array2[k])
        {
            result[i] = array1[j];
            j++;
        }
        else
        {
            result[i] = array2[k];
            k++;
        }
        i++;
    }
    if (j >= 6)
    {
        while (k < 6)
        {
            result[i] = array2[k];
            i++;
            k++;
        }
    }
    else if (k >= 6)
    {
        while (j < 6)
        {
            result[i] = array1[j];
            i++;
            j++;
        }
    }
}

int main()
{
    int array1[] = {16, 15, 14, 6, 3, 2};
    int array2[] = {76, 34, 25, 16, 13, 9};
    int merged_array[12];

    merge(array1, array2, merged_array);

    cout << "Array 1: ";
    for (int i = 0; i < 6; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
    cout << "Array 2: ";
    for (int i = 0; i < 6; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    cout << "Merged : ";
    for (int i = 0; i < 12; i++)
    {
        cout << merged_array[i] << " ";
    }
    cout << endl;
    return 0;
}
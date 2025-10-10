/**
 *  Write a function to swap strings of two char arrays of calling functions.
 */

#include <iostream>
using namespace std;

void swap_char_arrays(char *arr1, char *arr2, int length)
{
    // considering both arrays are of same size/length
    int temp[length];

    // copy arr1 to temp
    for (int i = 0; i < length; i++)
    {
        temp[i] = arr1[i];
    }

    // copy arr2 to arr1
    for (int i = 0; i < length; i++)
    {
        arr1[i] = arr2[i];
    }

    // copy temp(arr1) to arr2
    for (int i = 0; i < length; i++)
    {
        arr2[i] = temp[i];
    }
}

int main()
{
    char name1[] = {'y', 'a', 's', 'h', '\0'};
    char name2[] = {'d', 'e', 'e', 'p', '\0'};

    cout << "Arrays before swap" << endl;
    cout << "Array 1: ";
    int i = 0;
    while (name1[i] != '\0')
    {
        cout << name1[i];
        i++;
    }
    cout << endl;
    cout << "Array 2: ";
    i = 0;
    while (name2[i] != '\0')
    {
        cout << name2[i];
        i++;
    }
    cout << endl;

    swap_char_arrays(name1, name2, 5);
    cout << "Arrays after swap" << endl;
    cout << "Array 1: ";
    i = 0;
    while (name1[i] != '\0')
    {
        cout << name1[i];
        i++;
    }
    cout << endl;
    cout << "Array 2: ";
    i = 0;
    while (name2[i] != '\0')
    {
        cout << name2[i];
        i++;
    }
    cout << endl;
    return 0;
}
/**
 * Write a program in C to copy the elements of one array into another array.Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[5], copy[5];

    // taking input
    cout << "Enter 5 Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // copying array
    for (int i = 0; i < 5; i++)
    {
        copy[i] = numbers[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Copy Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << copy[i] << " ";
    }
    cout << endl;
    return 0;
}
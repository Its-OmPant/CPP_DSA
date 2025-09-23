/**
 * Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n < 2)
    {
        cout << "There must be 2 elements in array" << endl;
        return -1;
    }

    int numbers[n];

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Array in Reverse is: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
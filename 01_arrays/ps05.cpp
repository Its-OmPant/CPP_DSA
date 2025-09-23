/**
 * Write a program to sort elements of an array of size 10. Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    // selection sort implementation
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
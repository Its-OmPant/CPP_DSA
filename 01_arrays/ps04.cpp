/**
 * Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];

    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    int largest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Largest Number: " << largest << endl;
    return 0;
}
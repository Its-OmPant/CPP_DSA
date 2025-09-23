/**
 * Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }

    int avg = sum / 10;
    cout << "Average of numbers is: " << avg << endl;
    return 0;
}
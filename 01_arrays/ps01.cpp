/**
 *  PS: Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;
    cout << "Enter 10 Numbers to add: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }

    cout << "Sum of Numbers is: " << sum << endl;
    return 0;
}
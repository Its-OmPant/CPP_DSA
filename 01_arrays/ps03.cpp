/**
 *  Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
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

    int sum_odd = 0, sum_even = 0;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum_even += numbers[i];
        }
        else
        {
            sum_odd += numbers[i];
        }
    }

    cout << "Sum of Even Numbers: " << sum_even << endl;
    cout << "Sum of Odd Numbers: " << sum_odd << endl;

    return 0;
}
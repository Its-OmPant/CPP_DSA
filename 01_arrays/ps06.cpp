/**
 * Write a program to find second largest in an array.Take array values from the user.
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[10], largest = -1, secondLargest = -1;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest)
        {
            secondLargest = numbers[i];
        }
    }

    cout << "Second Largest Element is: " << secondLargest << endl;
    return 0;
}
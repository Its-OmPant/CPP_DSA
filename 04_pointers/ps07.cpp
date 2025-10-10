/**
 * 7. Write a program to compute the sum of all elements in an array using pointers.
 */

#include <iostream>
using namespace std;

int array_sum(int *arr, int size)
{
    int i = 0, sum = 0;
    while (i < size)
    {
        sum += arr[i];
        i++;
    }
    return sum;
}

int main()
{
    int numbers[10] = {1, 3, 2, 4, 5, 7, 6, 8, 9, 7};

    cout << "Sum of array Elements is: " << array_sum(numbers, 10) << endl;
    return 0;
}
/**
 * 8. Write a program to print the elements of an array in reverse order.
 */

#include <iostream>
using namespace std;

void print_reversed(int *arr, int size)
{
    int i = size - 1;
    while (i >= 0)
    {
        cout << arr[i] << " ";
        i--;
    }
    cout << endl;
}

int main()
{
    int numbers[10] = {1, 3, 2, 4, 5, 7, 6, 8, 9, 7};

    print_reversed(numbers, 10);

    return 0;
}
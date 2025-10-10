/**
 *  Write a function to swap values of two int variables of calling function.
 */

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int val1 = 10, val2 = 20;

    cout << "Before Swapping " << endl
         << "Value 1: " << val1 << endl
         << "Value 2: " << val2 << endl;
    swap(val1, val2);
    cout << "After Swapping " << endl
         << "Value 1: " << val1 << endl
         << "Value 2: " << val2 << endl;

    return 0;
}
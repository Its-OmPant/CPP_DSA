/**
 * 4. Write a program to find the maximum number between two numbers using a pointer.
 */

#include <iostream>
using namespace std;

int max(int *n1, int *n2)
{
    return *n1 >= *n2 ? *n1 : *n2;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum of " << num1 << " and " << num2 << " is : " << max(&num1, &num2) << endl;
    return 0;
}